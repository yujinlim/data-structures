#include <iostream>
#include <string.h>
#include "polymorphism.h"
#include "fobjects.h"
#include "math.h"
#include "weeklysales.h"

class Data
{
public:
	Data(char *s = "", int i = 0, double d = 1, int c = 10) {
		strcpy(data1, s);
		data2 = i;
		data3 = d;
		data4 = c;

	}

	void run() {
		swap(&data2, &data4);
		print();
	}

	void print() {
		std::cout << "data 1" << data4 << "data 2" << data2;
	}

private:
	void swap(int *p, int *s) {
		int temp = *p;
		*p = *s;
		*s = temp;
	}

protected:
	char data1[20];
	int data2;
	double data3;
	int data4;
};

struct Node {
	char *name;
	int age;

	Node(char *n = "", int a = 0) {
		name = strdup(n);
		age = a;
	}

	~Node() {
		if (name != 0)
			free(name);
	}
};

int main() {
	int *p, a = 3;
	p = &a;
	*p = 10;
	WeeklySalaryCounter sales;
	sales.run();
	
	//Node node1("roger", 20), node2("here", 10);
	//delete &node1;
	//poly();
	sum();

	Math m;
	bool found = false;
	int start = 1226;
	while (!found) {
		if (m.squareRoot(start) && start == m.sum(m.findRoot(start))) {
			printf("%i", start);
			found = true;
		} else {
			start++;
		}
	}


	return 0;
}
