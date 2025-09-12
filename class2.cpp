#include <iostream>
#include <string>
using namespace std;

class Menu {
public:
    string item1 = "Burger";
    string item2 = "Pizza"; 
    string item3 = "Drink";
    
    double price1 = 5.99;
    double price2 = 8.50;
    double price3 = 2.25;
    
    int qty1, qty2, qty3;
    
    void showMenu() {
        cout << "=== MENU ===" << endl;
        cout << "1. " << item1 << " - $" << price1 << endl;
        cout << "2. " << item2 << " - $" << price2 << endl;
        cout << "3. " << item3 << " - $" << price3 << endl;
    }

    void getItems(){
        cout<<"Choose the item you want to order"<<endl;
        cout<<"1."<<item1<<endl;
        cout<<"2."<<item2<<endl;
        cout<<"3."<<item3<<endl;

        




    }
    
    void getOrder() {
        cout << "\nEnter quantities:" << endl;
        cout << item1 << ": ";
        cin >> qty1;
        cout << item2 << ": ";
        cin >> qty2;
        cout << item3 << ": ";
        cin >> qty3;
    }
    
    void showTotal() {
        double total = (qty1 * price1) + (qty2 * price2) + (qty3 * price3);
        cout << "\nTotal Amount: $" << total << endl;
    }
};

int main() {
    Menu myMenu;
    
    myMenu.showMenu();
    myMenu.getOrder();
    myMenu.showTotal();
    
    return 0;
}