#pragma once
#include <msclr/marshal_cppstd.h>

using namespace System;

public ref class InventoryManager {
public:
    static void UpdateInventory(int itemId, int quantity) {
        try {
            // Check if inventory file exists
            if (!System::IO::File::Exists("inventory.txt")) {
                throw gcnew System::IO::FileNotFoundException("Inventory file not found");
            }

            // Read all lines from inventory file
            array<String^>^ lines = System::IO::File::ReadAllLines("inventory.txt");
            bool itemFound = false;

            // Find and update the matching item by ID
            for (int i = 0; i < lines->Length; i++) {
                // Skip empty lines
                if (String::IsNullOrWhiteSpace(lines[i])) continue;

                array<String^>^ parts = lines[i]->Split('/');
                if (parts->Length >= 4) {
                    int currentId;
                    if (!Int32::TryParse(parts[0], currentId)) {
                        continue; // Skip if ID isn't a valid number
                    }

                    if (currentId == itemId) {
                        itemFound = true;
                        int currentQuantity;
                        if (!Int32::TryParse(parts[3], currentQuantity)) {
                            throw gcnew FormatException("Invalid quantity format for item ID " + itemId);
                        }

                        // Update quantity
                        int newQuantity = currentQuantity - quantity;
                        if (newQuantity < 0) {
                            throw gcnew Exception("Not enough inventory for item ID " + itemId);
                        }

                        // Rebuild the line with updated quantity
                        lines[i] = String::Format("{0}/{1}/{2}/{3}",
                            parts[0]->Trim(),
                            parts[1]->Trim(),
                            parts[2]->Trim(),
                            newQuantity);
                        break;
                    }
                }
            }

            if (!itemFound) {
                throw gcnew Exception("Item ID " + itemId + " not found in inventory");
            }

            // Write the updated lines back to file
            System::IO::File::WriteAllLines("inventory.txt", lines);
        }
        catch (Exception^ e) {
            throw gcnew Exception("Inventory update failed: " + e->Message);
        }
    }
};