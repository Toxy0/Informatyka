#include <iostream>
using namespace std;
int main (){
	int parking;
	int oplata;
	char litera;
		cout <<"Podaj liczbe godzin parkowania:"; cin >> parking;
	cout <<"Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus):"; cin >>litera;
	switch (litera){
			case 'S':
	 (oplata = parking * 5);
	 cout <<"Oplata za parkowanie:"; cout << oplata;
		break;
			case 'M':
	 (oplata = parking * 3);
	 cout <<"Oplata za parkowanie:"; cout << oplata;
		break;
			case 'A':
	 (oplata = parking * 10);
	 cout <<"Oplata za parkowanie:"; cout << oplata;
		break;
	default:
		cout << "Tylko duze litery" << endl;
		break;
	}
	return 0;
}