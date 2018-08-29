#include <iostream>
#include<string>
using namespace std;

int main()
{

	const double britishPounds = .6318;
	const double mexicanPesos = 12.8863;
	const double japaneseYen = 82.34;

	double inputAmericandollars;
	

	cout << "How much money do you want to convert?";
	cin >> inputAmericandollars;


	double bpConvo = britishPounds * inputAmericandollars;
	double mpConvo = mexicanPesos * inputAmericandollars;
	double jpConvo = japaneseYen * inputAmericandollars;

	cout << "Britsh Pounds = " << bpConvo;
	cout << "Mexican Pesos = " << mpConvo;
	cout << "Japanese Yen = " << jpConvo;


	system("pause");
	
	return 0;
}
