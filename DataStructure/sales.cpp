#include "weeklysales.h"
#include <iostream>

void WeeklySalaryCounter::run() {
	int sales = 0;
	std::cout << "what is the sales?";
	std::cin >> sales;

	int com = this->baseSalaryWithCommission(sales);
	int baseandcom = this->commisionBasis(sales);
	int fixed = this->fixedSalary(sales);

	std::cout << "commission base --> " << com << " base and commissions --> " << baseandcom << " fixed salary --> " << fixed;
};