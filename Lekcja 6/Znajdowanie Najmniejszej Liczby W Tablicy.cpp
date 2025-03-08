#include <iostream>
using namespace std;

int main() {
    int liczby[5];
    cout << "Podaj 5 liczb calkowitych:\n";
    for (int i = 0; i < 5; i++) {
        cin >> liczby[i];
    }
    int minLiczba = liczby[0];
    for (int i = 1; i < 5; i++) {
        if (liczby[i] < minLiczba) {
            minLiczba = liczby[i];
        }
    }
    cout << "Najmniejsza liczba to: " << minLiczba << "\n";
    
    return 0;
}
