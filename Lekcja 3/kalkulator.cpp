#include <iostream>
using namespace std;
int main(){
	int liczba1;
	int liczba2;
	char znak;
	int wynik;
	cout <<"Podaj pierwsza liczbe:"; cin >> liczba1;
	cout <<"Podaj druga liczbe:"; cin >> liczba2 ;
	cout <<"Podaj znak dzialania (+,-,*,/):"; cin >> znak ;
		switch(znak) {
	case '+':
	 (wynik = liczba1 + liczba2);
	 cout <<"Wynik:"; cout << wynik;
		break;
			case '-':
	 (wynik = liczba1 - liczba2);
	 cout <<"Wynik:"; cout << wynik;
		break;
			case '*':
	 (wynik = liczba1 * liczba2);
	 cout <<"Wynik:"; cout << wynik;
		break;
			case '/':
	 (wynik = liczba1 / liczba2);
	 cout <<"Wynik:"; cout << wynik;
		break;
		
	default:
		cout << "Co ty wpisujesz??" << endl;
		break;
	}
	
	return 0; }