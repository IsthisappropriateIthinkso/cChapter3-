#include <iostream>
#include <string>
using namespace std;


int main()

{
	int firstNum;
	int secondNum;
	int add;
	int subtract;
	int multiply;
	int divide;
	int remainder;
	string nameString;
	cout << "what is your first name?";
	cin >> nameString;

	
	cout << "please enter your first number";
	cin >> firstNum;

	cout << "please enter your other number";
	cin >> secondNum;

	add = firstNum + secondNum;
	subtract = firstNum - secondNum;
	multiply = firstNum * secondNum;
	divide = firstNum / secondNum;
	remainder = firstNum % secondNum;
	
	
	cout << "the sum of" << firstNum << "and" << secondNum << "=" << add << endl;
	
	
	
	
	system("pause");




	cout << "the product of" << firstNum << "and" << secondNum << "=" << multiply << endl;




	system("pause");

	cout << "the quotient of " << firstNum << "and" << secondNum << "=" << divide << endl;




	system("pause");

	cout << "the remainder from " << firstNum << "and" << secondNum << "=" << remainder << endl;




	system("pause");
	
	return 0;
}