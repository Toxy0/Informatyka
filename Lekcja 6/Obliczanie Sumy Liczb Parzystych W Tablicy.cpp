#include <iostream>
using namespace std;
int main() {
    int liczby[10];
    int sumaParzystych = 0;
    
    cout << "Podaj 10 liczb calkowitych:\n";
    for (int i = 0; i < 10; i++) {
        cin >> liczby[i];
    }
    
    cout << "Liczby parzyste: ";
    for (int i = 0; i < 10; i++) {
        if (liczby[i] % 2 == 0) {
            cout << liczby[i] << " ";
            sumaParzystych += liczby[i];
        }
    }
    
    cout << "Suma liczb parzystych: " << sumaParzystych << "\n";
    
    return 0;
}
