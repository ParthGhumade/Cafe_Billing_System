# ☕ Cubes n' Dices Café Billing System (C Program)

## 📝 About
The **Cubes n' Dices Café Billing System** is a console-based restaurant ordering and billing application written in C.  
It allows customers to select items from categorized menus (Sandwiches, Italian, Burgers, Beverages, and Desserts), specify quantities, and automatically generates a formatted bill including subtotal, taxes (CGST & SGST), and total amount.  
This project demonstrates the use of **structures**, **arrays**, **loops**, **string manipulation**, and **mathematical operations** in C programming.

---

## 📘 Overview
This program simulates a café’s ordering system:
- Displays a categorized menu with prices.
- Allows multiple orders using a code-based selection (e.g., `A3`, `B4`).
- Supports item quantity entry.
- Calculates subtotal, taxes, and final total.
- Prints a professional-style itemized bill.

---

## 🧩 Features

- 📋 **Categorized Menu**
  - **A – Sandwiches**
  - **B – Italian Dishes**
  - **C – Burgers & Fries**
  - **D – Beverages**
  - **E – Desserts**
  
- 🍽️ **Dynamic Ordering**
  - Choose items like `A3` (3rd Sandwich) or `D5` (5th Beverage).
  - Enter quantity for each item.
  - Add multiple dishes in a single session.

- 💰 **Automatic Billing**
  - Calculates subtotal based on quantity and price.
  - Adds **CGST @2.5%** and **SGST @2.5%**.
  - Displays final grand total neatly.

- 🧾 **Formatted Output**
  - Professionally structured bill showing:
    - Item name
    - Rate
    - Quantity
    - Price per item
    - Subtotal and taxes

---

## ⚙️ Technologies Used

| Component    | Description                                 |
|--------------|---------------------------------------------|
| **Language** | C                                           |
| **Libraries**| `stdio.h`, `stdlib.h`, `string.h`, `math.h` |
| **Platform** | Windows / Linux (auto-clears console)       |

---

## 🧮 Program Logic

| Step                        | Description                                                                               |
|-----------------------------|-------------------------------------------------------------------------------------------|
| **1. Menu Display**         | Shows all menu items in columns under categories.                                         |
| **2. Order Input**          | User enters order like `B5` followed by quantity.                                         |
| **3. Item Processing**      | Program uses `atoi()` to extract the numeric part and selects item from correct category. |
| **4. Billing**              | Subtotal = Σ(item price × quantity)                                                       |
| **5. Tax Calculation**      | Adds 2.5% CGST + 2.5% SGST                                                                |
| **6. Bill Printing**        | Outputs formatted bill with totals.                                                       |

---

## 🖥️ How to Run

1. **Clone or Download** this repository.
2. **Compile the code**:
   ```bash
   gcc cafe_billing.c -o cafe_billing
