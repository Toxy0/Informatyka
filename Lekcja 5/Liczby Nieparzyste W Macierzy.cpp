#include <iostream>
using namespace std;
int main () {
	int wiersze, kolumny;
    cout << "Podaj liczbe wierszy: ";
    cin >> wiersze;
    cout << "Podaj liczbe kolumn: ";
    cin >> kolumny;
    int liczba = 1;
    for (int i = 0; i < wiersze; i++) {
        for (int j = 0; j < kolumny; j++) {
            cout << liczba << "\t";
            liczba += 2;
        }
        cout << "\n";
    }
	return 0;}