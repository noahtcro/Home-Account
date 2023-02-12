#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Bill.h"
#include "Recurring.h"

std::vector<Bill> createBill(vector<Bill> billVector);
std::vector<Bill> oneTime(vector<Bill> billVector);
void recurring();
void editBill();
void total();

int main()
{
    vector<Bill> billVector;
    int menu = 0;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::cout << "Welcome to the Home Accounting program." << endl;

    do {
        std::cout << "1: Enter bills" << endl;
        std::cout << "2: Edit bills" << endl;
        std::cout << "3: Get totals" << endl;
        std::cout << "4: Exit program" << endl;
        std::cout << "Please enter the number of your desired action: ";
        cin >> menu;

        //Bill menu
        switch (menu) {
        case 1:
            createBill(billVector) = billVector;
            break;
        case 2:
            editBill();
            break;
        case 3:
            total();
            break;
        case 4:
            break;
        }
    } while (menu != 4);
}

std::vector<Bill> createBill(vector<Bill> billVector) {
    system("cls");
    int billMenu = 0;

    std::cout << "1: One-time bill" << endl;
    std::cout << "2: Recurring bill" << endl;
    std::cout << "Please enter the number of your desired action: ";
    std::cin >> billMenu;

    switch (billMenu) {
    case 1:
        oneTime(billVector);
        break;
    case 2:
        recurring();
        break;
    }

    return billVector;
}

std::vector<Bill> oneTime(vector<Bill> billVector) {
    system("cls");
    string name;

    Bill bill;
    billVector.push_back(bill);

    std::cout << "Please enter the name of the bill: ";
    std::cin >> name;

    system("cls");

    billVector[billVector.size() - 1].setBillName(name);

    for (int i = 0; i != billVector.size(); i++) {
        std::cout << billVector[i].getBillName() << std::endl;
    }

    system("pause");
    system("cls");

    return billVector;
}

void recurring() {
    
}

void editBill() {

}

void total() {

}