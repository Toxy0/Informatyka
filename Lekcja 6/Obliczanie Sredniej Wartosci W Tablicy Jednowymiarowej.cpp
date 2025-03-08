#include <iostream>
using namespace std;
int main(){
	
	    int liczby[5];
    int suma = 0;
    cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < 5; i++) {
        cin >> liczby[i];
        suma += liczby[i];
    }
    cout << "Srednia liczb: " << (suma / 5.0) << "\n";
	return 0;
}