#pragma once
#include <cstdlib>
#include <iostream>
#include <string>

#include "Bill.h"

using namespace std;

#ifndef RECURRING_H
#define RECURRING_H

class Recurring : public Bill {
private:
	int billRate = 0;
public:
	void setBillRate(int sBillRate);
	int getBillRate();
};

#endif RECURRING_H
