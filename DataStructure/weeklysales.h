//a.h

#ifndef __WEEKLY_SALES_INCLUDED__   // if x.h hasn't been included yet...
#define __WEEKLY_SALES_INCLUDED__ 

class WeeklySalaryCounter {
	private: 
		int FIXED_SALARY, PRICE_PER_HOUR, SHOE_PRICE;
		int hoursPerDay;

	public:
		void run();
		WeeklySalaryCounter() {
			FIXED_SALARY = 600;
			PRICE_PER_HOUR = 7;
			SHOE_PRICE = 225;
			hoursPerDay = 8;
		}
		int fixedSalary(int weeklySales) {
			return this->FIXED_SALARY;
		}
		int baseSalaryWithCommission(int weeklySales) {
			int weeklySalary = this->PRICE_PER_HOUR * this->hoursPerDay * 7;
			float commissionPerShoe = (float) 0.1 * (float) this->SHOE_PRICE;
			float commissionsCollected = (float) weeklySales * (float) commissionPerShoe;
			return weeklySalary + (int) commissionsCollected; 
		}
		int commisionBasis(int weeklySales) {
			float commissionPerShoe = (float) 0.2 * (float) this->SHOE_PRICE;
			int commissionForEachSold = 20 * weeklySales;
			return (int) commissionPerShoe + commissionForEachSold;
		}
};
#endif