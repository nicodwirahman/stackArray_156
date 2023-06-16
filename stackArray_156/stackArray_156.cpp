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

		if (top == 4) {//step 1
			cout << "Number of data exceds the limit." << endl;
			return;
		}

		top++;//step2
		stack_array[top] = element;//step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

	}
	void pop() {
		if (empty()) {//step 1
			cout << "\nStack is empty.cannon pop." << endl;//1.a
			return;//1.b
		}

		cout << "\nThe popped element is : " << stack_array[top] << endl;// step 2
		top--;
	}























		