#include <iostream>
using namespace std;
int main () {
char wybor;
    do {
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Wprowadziles liczbe: " << liczba << "\n";
    cout << "Czy chcesz wprowadzic kolejna liczbe? (t/n): ";
    cin >> wybor;
    } while (wybor == 't' || wybor == 'T');
    cout << "Dziekuje za wprowadzenie liczb!\n";
	return 0;}