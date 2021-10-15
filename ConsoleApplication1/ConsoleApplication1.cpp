#include <iostream>

using namespace std;

int main()
{
	
	/*
	//cw1 
	int a = 65548;
	cout << "Nr albumu: " << a << endl;
	*/

	/*
	//cw2
	int a;
	cout << "Podaj liczbe: " << endl;
	cin >> a;
	if (a%2 == 0)
	{
		cout << "liczba jest parzysta";
	}
	else
	{
		cout << "Liczba jest nieparzysta";
	}
	*/

	/*
	//cw3
	double a, b;
	cout << "Podaj a oraz b\n";
	cin >> a >> b; 
	if (a > b)
	{
		cout << "Liczba a jest wieksza od liczby b\n";
	}
	else if(b>a)
	{	
		cout << "Liczba b jest wieksza od liczby a\n";
	}
	else
	{
		cout << "Liczby sa rowne\n";
	}
	*/



	
	//cw4 i 5
	double a, b;
	char wybor;
	cout << "Podaj a" << endl;
	cin >> a;
	cout << "Podaj b" << endl;
	cin >> b;
	cout << " + suma\n - roznica\n * iloczyn\n / iloraz\n s srednia\n";
	cout << "wybierz dzialanie" << endl;
	cin >> wybor; 


	switch (wybor)
	{
	case '+':
		cout << "suma = " << a + b << endl;
			break;
	case '-':
		cout << "roznica = " << a - b << endl;
			break;
	case '*':
		cout << "iloczyn = " << a * b << endl;
			break;
	case '/':
		if (b == 0)
		{
			cout << "Nie dziel przez 0\n";
			break;
		}
		else
		{
			cout << "iloraz = " << a / b << endl;
		}
		
	case 's':
		cout << "srednia = " << (a + b) / 2 << endl;
		break;

	default:
		cout << "Nie ma takiej opcji/n";
			break;
	}
}
