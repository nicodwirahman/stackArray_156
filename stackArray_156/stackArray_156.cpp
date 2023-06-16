#include <iostream>
#include <string>
using namespace std;

class stackArray {
private:
	string stack_array[5];
	int top;
public:
	//constructor
	stackArray() {
		top = -1;
	}

	void push() {
		cout << "\nEnter a element:";
		string element;
		getline(cin, element);
	}
};