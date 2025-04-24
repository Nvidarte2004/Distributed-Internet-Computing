//
//  main.cpp
//  assignment 1
//
//  Created by natalie vidarte on 4/22/25.
//

#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;

int main() {
    char user = 'y';
    int itemToPurchase, total;
    int userChoice = 0;
    
    total = 0;
    
    struct Item {
        string name;
        int price;
    };
    
    vector<Item> inventory = {
        { "Lego Star Wars", 25 },
        { "Cookie", 5 }
    };

    
    while (userChoice != 5) {
    cout << "Welcome to Target! Choose the following options: " << endl;
    
    cout << "Make a Purchase (Enter 1)" << endl;
    cout << "Make a Return (Enter 2)" << endl;
    cout << "Manage Inventory (Enter 3)" << endl;
    cout << "View Report (Enter 4)" << endl;
    cout << "Exit (Enter 5)" << endl;

    cin >> userChoice;
    
   
    switch (userChoice) {
        //PURCHASE
        case  1 :
                do {
                    // Print product list
                    cout << "Which product would you like to purchase?" << endl;
                    cout << left << setw(30) << "Item Name" << setw(10) << "Price" << endl;
                    cout << left << setw(30) << "Lego Star Wars (Enter 1)" << "$" << setw(10) << 25 << endl;
                    cout << left << setw(30) << "Cookie (Enter 2) " << "$" << setw(10) << 5 << endl;
                    
                    // Get user's item choice
                    cin >> itemToPurchase;
                    
                    // Add item price to total with troubleshooting
                    if (itemToPurchase >= 1 && itemToPurchase <= 2) {
                        total += inventory[itemToPurchase - 1].price;
                    } else {
                        cout << "Invalid choice. Try again!" << endl;
                    }
                    
                    //ASK USER
                    cout << "Anything else? (y/n): ";
                    cin >> user;
                    
                } while (user == 'y' || user == 'Y');
                
                // Calculate total when User is done
                cout << "Your total is: $" << total << endl;
                cout << "Thank you for shopping at Target!" << endl;
                
                break;
            
            
            //RETURN
            case 2 :
            do {
                // Print product list
                cout << "Which product would you like to return?" << endl;
                cout << left << setw(30) << "Item Name" << setw(10) << "Price" << endl;
                cout << left << setw(30) << "Lego Star Wars (Enter 1)" << "$" << setw(10) << 25 << endl;
                cout << left << setw(30) << "Cookie (Enter 2) " << "$" << setw(10) << 5 << endl;
                
                // Get user's item choice
                cin >> itemToPurchase;
                
                // Add item price to total with troubleshooting
                if (itemToPurchase >= 1 && itemToPurchase <= 2) {
                    total -= inventory[itemToPurchase - 1].price;
                } else {
                    cout << "Invalid choice. Try again!" << endl;
                }
                
                //ASK USER
                cout << "Anything else? (y/n): ";
                cin >> user;
                
            } while (user == 'y' || user == 'Y');
            
            // Calculate total when User is done
            cout << "You returned: " << inventory[itemToPurchase - 1].name << endl;
            cout << "You refund total is: " << inventory[itemToPurchase - 1].price << endl;
            cout << "Thank you for shopping at Target!" << endl;
            cout << endl;
                break;
            
            
            //MANAGE INVENTORY
            case 3:
            int inventoryChoice;

            do {
                cout << "\nManage Inventory" << endl;
                cout << "The following items are currently stored in the system:" << endl;
                cout << left << setw(30) << "Item Name" << setw(10) << "Price" << endl;

                for (int i = 0; i < inventory.size(); ++i) {
                    cout << left << setw(30) << inventory[i].name << "$" << setw(10) << inventory[i].price << endl;
                }

                cout << "\n1. Add New Item" << endl;
                cout << "2. Remove Item" << endl;
                cout << "3. Main Menu" << endl;
                cout << "Enter your choice: ";
                cin >> inventoryChoice;

                if (inventoryChoice == 1) {
                    // Add new item
                    string newItemName;
                    int newItemPrice;

                    cout << "\nAdd Item:" << endl;
                    cout << "Item Name: ";
                    cin.ignore(); // clear newline character
                    getline(cin, newItemName);
                    cout << "Item Price: ";
                    cin >> newItemPrice;

                    inventory.push_back({ newItemName, newItemPrice });
                    cout << "Added Successfully!!\n" << endl;

                } else if (inventoryChoice == 2) {
                    // Remove item
                    if (inventory.empty()) {
                        cout << "Inventory is empty. Nothing to remove." << endl;
                    } else {
                        cout << "\nWhich item would you like to remove?" << endl;
                        for (int i = 0; i < inventory.size(); ++i) {
                            cout << i + 1 << ". " << inventory[i].name << " - $" << inventory[i].price << endl;
                        }

                        int removeIndex;
                        cout << "Enter the number of the item to remove: ";
                        cin >> removeIndex;

                        if (removeIndex >= 1 && removeIndex <= inventory.size()) {
                            string removedItem = inventory[removeIndex - 1].name;
                            inventory.erase(inventory.begin() + (removeIndex - 1));
                            cout << removedItem << " removed successfully!" << endl;
                        } else {
                            cout << "Invalid item number!" << endl;
                        }
                    }
                } else if (inventoryChoice != 3) {
                    cout << "Invalid choice. Please try again.\n" << endl;
                }

            } while (inventoryChoice != 3);

            break;
            
            //VIEW REPORT
            case 4 :
            static int totalCustomers = 0;  // Keep track of total customers
            static int totalProfit = 0;     // Keep track of total profit

            cout << "\nReports:" << endl;
            cout << "Total Customers: " << totalCustomers << endl;
            cout << "Total Profit: $" << totalProfit << endl;

            // Prompt to go back to the main menu
            cout << "\nClick any key to go back to the main menu...";
            cin.ignore();  // Clear any previous input
            cin.get();     // Wait for the user to press any key
            
                break;
            
            //EXIT
            case 5 :
                cout << "Exiting program. Thank you!\n";
                break;
                
            default:
                cout << "Invalid option. Please select a valid choice.\n";
            }
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
