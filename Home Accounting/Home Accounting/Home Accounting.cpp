#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

#include "Bill.h"

Bill enterBill();
double enterIncome();
void totals(vector<Bill> vector, double income);

int main()
{
    vector<Bill> vector;
    int menu = 0;
    double income = 0;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    do {
        system("cls");
        std::cout << "1: Enter bills" << endl;
        std::cout << "2: Enter income" << endl;
        std::cout << "3: Get totals" << endl;
        std::cout << "4: Exit program" << endl;
        std::cout << "Please enter the number of your desired action: ";
        cin >> menu;

        switch (menu) {
        case 1:
            vector.push_back(enterBill());
            break;
        case 2:
            income = enterIncome();
            break;
        case 3:
            totals(vector, income);
            break;
        case 4:
            break;
        }
    } while (menu != 4);
}

Bill enterBill() {
    system("cls");
    Bill bill;
    std::string name;
    double cost = 0;

    std::cout << "Please enter the name of the bill: ";
    cin >> name;
    bill.setBillName(name);

    std::cout << "Please enter the bill amount: ";
    cin >> cost;
    bill.setBillCost(cost);

    return bill;
}

double enterIncome() {
    system("cls");
    double income = 0;

    std::cout << "Please enter your monthly income: ";
    cin >> income;

    return income;
}

void totals(vector<Bill> vector, double income) {
    system("cls");
    double total = 0;

    for (int i = 0; i != vector.size(); i++) {
        std::cout << i + 1 << ". " << vector[i].getBillName();
        std::cout << "\t\t" << vector[i].getBillCost() << std::endl;
        total = total + vector[i].getBillCost();
    }
    std::cout << "Bill total: " << total << std::endl;
    std::cout << "Income: " << income << std::endl;

    double remainder = income - total;

    std::cout << "Remainder: " << remainder << std::endl;
    system("pause");
}