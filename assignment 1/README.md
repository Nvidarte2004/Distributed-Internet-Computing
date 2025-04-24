# Target Store Simulation

This project simulates a simple **store management system** where users can:
- Make a purchase
- Return items
- Manage inventory
- View reports of total customers and profit

## Features

1. **Make a Purchase**:
   - Display a list of products with prices.
   - Allow users to select products to purchase.
   - Calculate the total cost based on selected items.

2. **Make a Return**:
   - Allow users to return items from the product list.
   - Deduct the item price from the total.

3. **Manage Inventory**:
   - View current inventory of items.
   - Add new items to the inventory.
   - Remove items from the inventory.

4. **View Reports**:
   - Display the total number of customers.
   - Display the total profit from all purchases.

## Technologies Used

- C++
- Standard Library (iostream, iomanip)
- Arrays for Inventory Management

## How to Run the Program

1. Clone or download this repository.
2. Open the project in your preferred C++ IDE (e.g., Visual Studio, Code::Blocks, or any other C++ compiler).
3. Compile and run the `main.cpp` file.
4. Follow the on-screen prompts to interact with the store simulation.

## Screenshot:
<img width="1342" alt="Screenshot 2025-04-23 at 10 21 28 PM" src="https://github.com/user-attachments/assets/1a2639c3-729e-4051-8e54-a9b4a5aa30ee" />

## Output EXAMPLE:
Welcome to Target! Choose the following options: 
Make a Purchase (Enter 1)
Make a Return (Enter 2)
Manage Inventory (Enter 3)
View Report (Enter 4)
Exit (Enter 5)
1
Which product would you like to purchase?
Item Name                     Price     
Lego Star Wars (Enter 1)      $25        
Cookie (Enter 2)              $5         
1
Anything else? (y/n): y
Which product would you like to purchase?
Item Name                     Price     
Lego Star Wars (Enter 1)      $25        
Cookie (Enter 2)              $5         
1
Anything else? (y/n): y
Which product would you like to purchase?
Item Name                     Price     
Lego Star Wars (Enter 1)      $25        
Cookie (Enter 2)              $5         
1
Anything else? (y/n): n
Your total is: $75
Thank you for shopping at Target!
Welcome to Target! Choose the following options: 
Make a Purchase (Enter 1)
Make a Return (Enter 2)
Manage Inventory (Enter 3)
View Report (Enter 4)
Exit (Enter 5)
2
Which product would you like to return?
Item Name                     Price     
Lego Star Wars (Enter 1)      $25        
Cookie (Enter 2)              $5         
2
Anything else? (y/n): n
You returned: Cookie
You refund total is: 5
Thank you for shopping at Target!

Welcome to Target! Choose the following options: 
Make a Purchase (Enter 1)
Make a Return (Enter 2)
Manage Inventory (Enter 3)
View Report (Enter 4)
Exit (Enter 5)
3

Manage Inventory
The following items are currently stored in the system:
Item Name                     Price     
Lego Star Wars                $25        
Cookie                        $5         

1. Add New Item
2. Remove Item
3. Main Menu
Enter your choice: 1

Add Item:
Item Name: Brownie
Item Price: 7
Added Successfully!!


Manage Inventory
The following items are currently stored in the system:
Item Name                     Price     
Lego Star Wars                $25        
Cookie                        $5         
Brownie                       $7         

1. Add New Item
2. Remove Item
3. Main Menu
Enter your choice: 2

Which item would you like to remove?
1. Lego Star Wars - $25
2. Cookie - $5
3. Brownie - $7
Enter the number of the item to remove: 2
Cookie removed successfully!

Manage Inventory
The following items are currently stored in the system:
Item Name                     Price     
Lego Star Wars                $25        
Brownie                       $7         

1. Add New Item
2. Remove Item
3. Main Menu
Enter your choice: 3
Welcome to Target! Choose the following options: 
Make a Purchase (Enter 1)
Make a Return (Enter 2)
Manage Inventory (Enter 3)
View Report (Enter 4)
Exit (Enter 5)
4

Reports:
Total Customers: 0
Total Profit: $0

Click any key to go back to the main menu...j
Welcome to Target! Choose the following options: 
Make a Purchase (Enter 1)
Make a Return (Enter 2)
Manage Inventory (Enter 3)
View Report (Enter 4)
Exit (Enter 5)
5
Exiting program. Thank you!
Program ended with exit code: 0

