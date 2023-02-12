#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>

#include "Bill.h"
#include "Recurring.h"

void space();

using namespace std;

int main()
{
    //Menu variables
    int mainMenu = 0;
    int billMenu = 0;
    int editMenu = 0;
    int editMenu2 = 0;
    int totalMenu = 0;
    double billSum = 0;
    double recurringSum = 0;
    double totalSum = 0;

    //Bill variables
    string nameInput;
    double costInput;
    double rateInput;

    //Vector varibales
    vector<Bill>billArray;
    int billArraySize;
    vector<Recurring>recurringArray;
    int recurringArraySize;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    //One-time welcome message
    std::cout << "Welcome to the Home Accounting program." << endl;
    space();

    do {
        std::cout << "1: Enter bills" << endl;
        std::cout << "2: Edit bills" << endl;
        std::cout << "3: Get totals" << endl;
        std::cout << "4: Exit program" << endl;
        std::cout << "Please enter the number of your desired action: ";
        cin >> mainMenu;

        //Bill menu
        if (mainMenu == 1) {
            //Clears the screen for improved UX
            system("CLS");

            std::cout << "1: One-time bill" << endl;
            std::cout << "2: Recurring bill" << endl;
            std::cout << "Please enter the number of your desired action: ";
            cin >> billMenu;

            //One-time bill menu
            if (billMenu == 1) {
                //Clears the screen for improved UX
                system("CLS");

                //Changes the billArraySize menu control to the billArray size
                int billArraySize = billArray.size();

                //Control to ensure the billArray does not exceed 5
                if (billArraySize > 4) {
                    std::cin.ignore();
                    std::cout << "Sorry, you have entered too many bills, please edit preexisting bills.";
                    std::cin.get();
                }
                if (billArraySize == 0) {
                    //Creating Bill object
                    Bill bill1;

                    std::cout << "Please enter the name of bill " << billArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of bill " << billArraySize + 1 << ": ";
                    cin >> costInput;

                    //Storing Bill object in billArray
                    billArray.push_back(bill1);

                    //Setting and getting Bill object in billArray
                    billArray[0].setBillName(nameInput);
                    billArray[0].setBillCost(costInput);
                }
                if (billArraySize == 1) {
                    //Creating Bill object
                    Bill bill2;

                    std::cout << "Please enter the name of bill " << billArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of bill " << billArraySize + 1 << ": ";
                    cin >> costInput;

                    //Storing Bill object in billArray
                    billArray.push_back(bill2);

                    //Setting and getting Bill object in billArray
                    billArray[1].setBillName(nameInput);
                    billArray[1].setBillCost(costInput);
                }
                if (billArraySize == 2) {
                    //Creating Bill object
                    Bill bill3;

                    std::cout << "Please enter the name of bill " << billArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of bill " << billArraySize + 1 << ": ";
                    cin >> costInput;

                    //Storing Bill object in billArray
                    billArray.push_back(bill3);

                    //Setting and getting Bill object in billArray
                    billArray[2].setBillName(nameInput);
                    billArray[2].setBillCost(costInput);
                }
                if (billArraySize == 3) {
                    //Creating Bill object
                    Bill bill4;

                    std::cout << "Please enter the name of bill " << billArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of bill " << billArraySize + 1 << ": ";
                    cin >> costInput;

                    //Storing Bill object in billArray
                    billArray.push_back(bill4);

                    //Setting and getting Bill object in billArray
                    billArray[3].setBillName(nameInput);
                    billArray[3].setBillCost(costInput);
                }
                if (billArraySize == 4) {
                    //Creating Bill object
                    Bill bill5;

                    std::cout << "Please enter the name of bill " << billArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of bill " << billArraySize + 1 << ": ";
                    cin >> costInput;

                    //Storing Bill object in billArray
                    billArray.push_back(bill5);

                    //Setting and getting Bill object in billArray
                    billArray[4].setBillName(nameInput);
                    billArray[4].setBillCost(costInput);
                }
            }
            //Recurring bill menu
            else if (billMenu == 2) {
                //Clears the screen for improved UX
                system("CLS");

                //Changes the recurringArraySize menu control to the recurringArray size
                int recurringArraySize = recurringArray.size();

                //Control to ensure the recurringArray does not exceed 5
                if (recurringArraySize > 4) {
                    std::cin.ignore();
                    std::cout << "Sorry, you have entered too many recurring bills, please edit preexisting recurring bills.";
                    std::cin.get();
                }

                if (recurringArraySize == 0) {
                    //Creating Recurring object
                    Recurring recurring1;

                    std::cout << "Please enter the name of recurring bill " << recurringArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> costInput;
                    std::cout << "Please enter how many times per month you are charged for recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> rateInput;

                    //Storing Recurring object in recurringArray
                    recurringArray.push_back(recurring1);

                    //Setting and getting Recurring object in recurringArray
                    recurringArray[0].setBillName(nameInput);
                    recurringArray[0].setBillCost(costInput);
                    recurringArray[0].setBillRate(rateInput);
                }
                if (recurringArraySize == 1) {
                    //Creating Recurring object
                    Recurring recurring2;

                    std::cout << "Please enter the name of recurring bill " << recurringArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> costInput;
                    std::cout << "Please enter how many times per month you are charged for recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> rateInput;

                    //Storing Recurring object in recurringArray
                    recurringArray.push_back(recurring2);

                    //Setting and getting Recurring object in recurringArray
                    recurringArray[1].setBillName(nameInput);
                    recurringArray[1].setBillCost(costInput);
                    recurringArray[1].setBillRate(rateInput);
                }
                if (recurringArraySize == 2) {
                    //Creating Recurring object
                    Recurring recurring3;

                    std::cout << "Please enter the name of recurring bill " << recurringArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> costInput;
                    std::cout << "Please enter how many times per month you are charged for recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> rateInput;

                    //Storing Recurring object in recurringArray
                    recurringArray.push_back(recurring3);

                    //Setting and getting Recurring object in recurringArray
                    recurringArray[2].setBillName(nameInput);
                    recurringArray[2].setBillCost(costInput);
                    recurringArray[2].setBillRate(rateInput);
                }
                if (recurringArraySize == 3) {
                    //Creating Recurring object
                    Recurring recurring4;

                    std::cout << "Please enter the name of recurring bill " << recurringArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> costInput;
                    std::cout << "Please enter how many times per month you are charged for recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> rateInput;

                    //Storing Recurring object in recurringArray
                    recurringArray.push_back(recurring4);

                    //Setting and getting Recurring object in recurring
                    recurringArray[3].setBillName(nameInput);
                    recurringArray[3].setBillCost(costInput);
                    recurringArray[3].setBillRate(rateInput);
                }
                if (recurringArraySize == 4) {
                    //Creating Recurring object
                    Recurring recurring5;

                    std::cout << "Please enter the name of recurring bill " << recurringArraySize + 1 << ": ";
                    //ignore and getline are needed to input strings with spaces
                    cin.ignore();
                    std::getline(std::cin, nameInput, '\n');
                    std::cout << "Please enter the cost of recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> costInput;
                    std::cout << "Please enter how many times per month you are charged for recurring bill " << recurringArraySize + 1 << ": ";
                    cin >> rateInput;

                    //Storing Recurring object in recurringArray
                    recurringArray.push_back(recurring5);

                    //Setting and getting Recurring object in recurringArray
                    recurringArray[4].setBillName(nameInput);
                    recurringArray[4].setBillCost(costInput);
                    recurringArray[4].setBillRate(rateInput);
                }
            }
        }else if (mainMenu == 2) {
            //Clears the screen for improved UX
            system("CLS");
            std::cout << "1: Edit one-time bills" << endl;
            std::cout << "2: Edit recurring bills" << endl;
            std::cout << "Please enter the number of your desired action : ";
            cin >> editMenu;

            if (editMenu == 1) {
                //Clears the screen for improved UX
                system("CLS");

                for (int i = 0; i < billArray.size(); i++) {
                    std::cout << "Record Number: " << i + 1 << endl;
                    std::cout << "Bill Name: " << billArray[i].getBillName() << endl;
                    std::cout << "Bill Cost: " << billArray[i].getBillCost() << endl;
                    std::cout << endl;
                }

                std::cout << "Please enter the number of the record you wish to edit: ";
                cin >> editMenu2;

                std::cout << "Now editing record: " << editMenu2 << endl;
                std::cout << "Please enter a new bill name: ";
                //ignore and getline are needed to input strings with spaces
                cin.ignore();
                std::getline(std::cin, nameInput, '\n');
                billArray[editMenu2 - 1].setBillName(nameInput);
                std::cout << "Please enter a new bill cost: ";
                cin >> costInput;
                billArray[editMenu2 - 1].setBillCost(costInput);
            }
            if (editMenu == 2) {
                //Clears the screen for improved UX
                system("CLS");

                for (int i = 0; i < recurringArray.size(); i++) {
                    std::cout << "Record Number: " << i + 1 << endl;
                    std::cout << "Bill Name: " << recurringArray[i].getBillName() << endl;
                    std::cout << "Bill Cost: " << recurringArray[i].getBillCost() << endl;
                    std::cout << "Bill Charges Per Month: " << recurringArray[i].getBillRate() << endl;
                    std::cout << endl;
                }

                std::cout << "Please enter the number of the record you wish to edit: ";
                cin >> editMenu2;

                std::cout << "Now editing record: " << editMenu2 << endl;
                std::cout << "Please enter a new recurring bill name: ";
                //ignore and getline are needed to input strings with spaces
                cin.ignore();
                std::getline(std::cin, nameInput, '\n');
                recurringArray[editMenu2 - 1].setBillName(nameInput);
                std::cout << "Please enter a new recurring bill cost: ";
                cin >> costInput;
                recurringArray[editMenu2 - 1].setBillCost(costInput);
                std::cout << "Please enter how many times you are charged per month: ";
                cin >> rateInput;
                recurringArray[editMenu2 - 1].setBillRate(rateInput);
            }

        }else if (mainMenu == 3) {
            //Clears the screen for improved UX
            system("CLS");

            for (int i = 0; i < billArray.size(); i++) {
                billSum = billSum + billArray[i].getBillCost();
                std::cout << endl;
            }

            for (int i = 0; i < recurringArray.size(); i++) {
                recurringSum = recurringArray[i].getBillCost()* recurringArray[i].getBillRate() + recurringSum;
                std::cout << endl;
            }

            totalSum = billSum + recurringSum;

            std::cout << "The total of your one-time bills: " << billSum << endl;
            std::cout << "The total of your recurring bills: " << recurringSum << endl;
            std::cout << "The total of all your bills: " << totalSum << endl;
            space();
            std::cin.ignore();
            std::cout << "Please press enter to continue: ";
            std::cin.get();
        }
        //Ensures the welcome message is only shown once
        system("CLS");
    } while (mainMenu < 4);
}

void space() {
    std::cout << endl;
}