#include <string>

#include "Bill.h"

void Bill::setBillName(string sBillName) {
	billName = sBillName;
}
string Bill::getBillName() {
	return billName;
}
void Bill::setBillCost(double sBillCost) {
	billCost = sBillCost;
}
double Bill::getBillCost() {
	return billCost;
}