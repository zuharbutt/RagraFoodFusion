# Ragra Food Fusion 🍔🍕🍰

**Ragra Food Fusion** is a comprehensive, multi-user restaurant management and food ordering desktop application built using C++/CLI and Windows Forms in Visual Studio. Designed with a clean, responsive graphical user interface, the system handles order workflows, inventory tracking, and sales reporting (screenshots attached at end).

The system enforces strict **Role-Based Access Control (RBAC)** to secure operations across three distinct user roles:
1. **Customers**: Can register new accounts, log in, browse through multiple categorized food and beverage menus, manage an interactive shopping cart, apply promotional discount codes, select cash/card payment types, and place orders.
2. **Employees**: Have access to view active order logs, process incoming customer requests, and manage day-to-day kitchen operations.
3. **Administrators**: Possess full system control, including access to database log files, customer reviews, sales summaries, and the real-time inventory management panel to update item details, prices, and stock levels.

---

## 🚀 Key Features
* **Modern Windows Forms Design**: Beautiful customized UI using a Salmon/Crimson color palette with premium Book Antiqua typography.
* **Unified Shopping Cart**: Aggregates selections made across all categories (Burgers, Pizzas, Desserts, Beverages, Desi Cuisine, Soups, Appetizers, and Special Offers) into a single Order Summary.
* **DPI Sizing Fix**: Features integrated Win32 high-DPI scaling awareness (`SetProcessDPIAware`) and layout stabilization to prevent window shrinking glitches on modern screens.
* **Admin Dashboard & Inventory Control**: Admin portal equipped with a colorful, zebra-striped grid to view, modify, and save menu prices and stock levels.
* **Promocode System**: Live calculation of discount percentage when applying promocodes at checkout.
* **Dual Payment Support**: Flows for both Card and Cash handling (supporting decimal calculations).
* **Multi-Role Authentication**: Dedicated portals for Customers (with signup/signin), Employees, and Admin roles.

---

## 🔑 Login Credentials

### **Administrator**
* **Username**: `adminname`
* **Password**: `password123`

### **Employees**
You can log in with any of the following accounts:
1. `zuharfaisal` | Password: `zuharbutt`
2. `aqsaehtesham` | Password: `aqsakhan`
3. `employeename`  | Password: `password123`

---

## 🛠️ Step-by-Step Setup & Installation Guide

To compile and run this project locally, follow these steps:

### **Step 1: Install Visual Studio & Workloads**
1. Download and install [Visual Studio 2022](https://visualstudio.microsoft.com/downloads/) (Community, Professional, or Enterprise).
2. Open the **Visual Studio Installer**, click **Modify**, and make sure the following workloads are checked:
   * **Desktop development with C++**
3. Under the **Individual components** tab, search for and install:
   * **C++/CLI support for v143 build tools (Latest)**
   * **.NET Framework 4.7.2 targeting pack**

### **Step 2: Clone & Open the Project**
1. Download or clone this repository to your PC:
   ```bash
   git clone https://github.com/zuharbutt/RagraFoodFusion.git
   ```
2. Navigate to the project folder and open the solution file `Project12.sln` in Visual Studio 2022.

### **Step 3: Build and Run the App**
1. In the top toolbar of Visual Studio, set the configuration to **Debug** or **Release** and select **x64** as the platform.
2. Build the project by pressing `Ctrl + Shift + B` or clicking **Build > Build Solution**.
3. Run the application by pressing `F5` or clicking **Local Windows Debugger**.

---
### **Welcome Screen**

<img width="1758" height="982" alt="image" src="https://github.com/user-attachments/assets/39e789be-cb9e-42e8-b3c4-1207cee9892e" />

### **Menu Screen**
<img width="1639" height="951" alt="image" src="https://github.com/user-attachments/assets/4ecc6851-df20-4a55-95b3-3b7e926c4113" />

<img width="1805" height="849" alt="image" src="https://github.com/user-attachments/assets/531d70ce-4120-41bc-9638-cddc41a3690d" />

### **Order Summary Screen**

<img width="993" height="691" alt="image" src="https://github.com/user-attachments/assets/d4087b77-5feb-49e5-9d43-9dd34921a558" />

### **Payment Screen**

<img width="1576" height="750" alt="image" src="https://github.com/user-attachments/assets/5ec64769-5360-40d6-a0b0-e0714fcda1e4" />

### **Submit Review Screen**

<img width="1101" height="638" alt="image" src="https://github.com/user-attachments/assets/fb357494-0be4-4773-9259-842385f96dd9" />

### **Inventory Screen**

<img width="1471" height="673" alt="image" src="https://github.com/user-attachments/assets/8c4ce6ee-add8-4ea9-9191-fd55ab13a9b9" />

### **Customer Reviews Screen**

<img width="1119" height="662" alt="image" src="https://github.com/user-attachments/assets/e32b3696-9f68-462c-9112-770eb902c406" />

### **Sales Summary Screen**

<img width="582" height="454" alt="image" src="https://github.com/user-attachments/assets/8ce77128-1382-4828-962c-4d8beb868ccf" />







