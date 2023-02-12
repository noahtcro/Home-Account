#pragma once
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

#ifndef BILL_H
#define BILL_H

class Bill {
private:
	string billName = "N/A";
	double billCost = 0.00;
public:
	void setBillName(string sBillName);
	string getBillName();
	void setBillCost(double sBillCost);
	double getBillCost();
};

#endif BILL_H
