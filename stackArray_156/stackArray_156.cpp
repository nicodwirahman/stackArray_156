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

	//method for check if datas is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << " \nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	stackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\***stack menu***\n";
		cout << "1.push\n";
		cout << "2.pop\n";
		cout << "3.dispay\n";
		cout << "4.exit\n";
		cout << "\nEnter your choice:";
		string input;
		getline(cin, input);
		char ch = (input.empty()) ? '0' : input[0];
		switch (ch) {
		case '1': {
			s.push();
			break;
		}
		case'2':
			if (s.empty()) {
				cout << "\nStackt is empty." << endl;
				break;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;
		case '4':
			return 0;
		default:
			cout << "\nlnvalid choice." << endl;
			break;
		}
	}
}






















		