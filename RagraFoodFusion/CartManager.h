#pragma once
#include <string>
#include <fstream>

namespace Project12 {
    using namespace System;
    using namespace System::IO;
    using namespace System::Collections::Generic;

    public ref class CartManager {
    private:
        ref struct CartItem {
            String^ name;
            int quantity;
            double price;
        };

        List<CartItem^>^ items;
        String^ screenName;
        static List<CartManager^>^ allCarts = gcnew List<CartManager^>();
        static String^ FormatRupee(double amount) {
            return String::Format("Rs{0:N2}", amount); // Formats as Rs1,234.56
        }
    public:
        // Static array for 8 screen carts
        static array<CartManager^>^ ScreenCarts = gcnew array<CartManager^>(8);

        // Constructors
        CartManager() : screenName("Default") {
            items = gcnew List<CartItem^>();
            allCarts->Add(this);
        }

        CartManager(String^ screen) : screenName(screen) {
            items = gcnew List<CartItem^>();
            allCarts->Add(this);
        }

        // Initialize all screen carts
        static void InitializeAllCarts() {
            ScreenCarts[0] = gcnew CartManager("Appetizers");
            ScreenCarts[1] = gcnew CartManager("Beverages");
            ScreenCarts[2] = gcnew CartManager("Burgers");
            ScreenCarts[3] = gcnew CartManager("Desi");
            ScreenCarts[4] = gcnew CartManager("Pizzas");
            ScreenCarts[5] = gcnew CartManager("Soups");
            ScreenCarts[6] = gcnew CartManager("Desserts");
            ScreenCarts[7] = gcnew CartManager("Offers");
        }

        // Add item to cart (existing functionality)
        void AddItem(String^ name, int quantity, double price) {
            // Check if item exists
            for each (CartItem ^ item in items) {
                if (item->name == name) {
                    item->quantity += quantity;
                    return;
                }
            }

            // Add new item
            CartItem^ newItem = gcnew CartItem();
            newItem->name = name;
            newItem->quantity = quantity;
            newItem->price = price;
            items->Add(newItem);
        }

        // Get formatted cart contents (existing functionality)
        String^ GetCartContents() {
            String^ contents = "";
            double total = 0.0;

            for each (CartItem ^ item in items) {
                contents += String::Format("{0} x {1} - {2}\n",  // Removed $ sign
                    item->name,
                    item->quantity,
                    FormatRupee(item->quantity * item->price));  // Use new formatter
                total += item->quantity * item->price;
            }

            if (total > 0) {
                contents += String::Format("Total: {0}\n", FormatRupee(total));  // Use Rs
            }

            return contents;
        }

        String^ GetAllCartsCombinedContents() {
            String^ contents = "";
            double total = 0.0;

            for each (CartManager^ cart in allCarts) {
                for each (CartItem ^ item in cart->items) {
                    contents += String::Format("{0} x {1} - {2}\n",
                        item->name,
                        item->quantity,
                        FormatRupee(item->quantity * item->price));
                    total += item->quantity * item->price;
                }
            }

            if (total > 0) {
                contents += String::Format("Total: {0}\n", FormatRupee(total));
            }

            return contents;
        }

        // Save to standard cart format (existing functionality)
        void SaveToFile(String^ filename) {
            StreamWriter^ sw = gcnew StreamWriter(filename, false);
            sw->Write(GetAllCartsCombinedContents());
            sw->Close();
        }

        // Save to alternate cart format (existing functionality)
        void SaveToCartFileFormat(String^ username) {
            StreamWriter^ sw = gcnew StreamWriter("cartfile.txt", true);

            for each (CartItem ^ item in items) {
                sw->WriteLine(String::Format("{0}: {1} -> {2}",
                    username, item->name, item->quantity));
            }

            sw->Close();
        }

        // NEW: Check if cart has items
        bool HasItems() {
            return items->Count > 0;
        }

        // NEW: Get all carts' contents with screen headers
        static String^ GetAllCartsContents() {
            String^ allContents = "";
            double grandTotal = 0.0;

            for each (CartManager ^ cart in ScreenCarts) {
                if (cart->HasItems()) {
                    allContents += "=== " + cart->screenName + " ===\n";
                    allContents += cart->GetCartContents();
                    allContents += "-------------------\n";

                    // Calculate grand total
                    for each (CartItem ^ item in cart->items) {
                        grandTotal += item->quantity * item->price;
                    }
                }
            }

            if (grandTotal > 0) {
                allContents += String::Format("GRAND TOTAL: {0}", FormatRupee(grandTotal));  // Changed
            }
            else {
                allContents = "All carts are empty";
            }

            return allContents;
        }

        // NEW: Save all carts to file
        static void SaveAllCarts() {
            StreamWriter^ sw = gcnew StreamWriter("cart.txt", false);
            sw->Write(GetAllCartsContents());
            sw->Close();
        }

        // Clear cart (existing functionality)
        void ClearCart() {
            items->Clear();
        }

        // NEW: Clear all carts
        static void ClearAllCarts() {
            for each (CartManager ^ cart in ScreenCarts) {
                cart->ClearCart();
            }
        }
    };
}