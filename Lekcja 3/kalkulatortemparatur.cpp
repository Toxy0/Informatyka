#include <iostream>
using namespace std;
	int main(){	 
	int temperatura;
	char znak;
	int wynik;
	cout <<"Podaj temperature w stopniach Celsjusza:"; cin >> temperatura;
	cout <<"Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit):"; cin >> znak ;
	switch (znak){
	
	case 'K':
	 (wynik = temperatura + 273.15);
	 cout <<"Temperatura w stopniach Kelvina:"; cout << wynik;
		break;
	case 'F':
	 (wynik = (temperatura * 9/5)+32);
	 cout <<"Temperatura w stopniach Fahrenheita:"; cout << wynik;
		break;	
	 (wynik = temperatura + 273.15);
	default:
		cout << "Wpisz jednostke z duzej litery" << endl;
		break;
	}
	return 0; }
		