/** the program will manipulate a matrix */
#include<iostream>
using namespace std;
const int SIZE = 4;
const int SIZE2 = 3;
int main() {
	double matrix[SIZE][SIZE2];
	int choice;
	cout << "Enter your choice: " << endl;//Ask from the user to choose
	cin >> choice;
	while (choice > 0 && choice < 5) {
		cout << "1) Enter data in matrix(range -5.5 to 5.5)" << endl;
		cout << "2) Negate all elements" << endl;
		cout << "3) show data in matrix" << endl;
		cout << "4) Exit" << endl;
		cout << "Please enter your choice: " << endl;
		cin >> choice;
	}
}