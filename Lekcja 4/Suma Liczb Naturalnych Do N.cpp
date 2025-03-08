#include <iostream>
using namespace std;
int main () {
int N;
cout << "Podaj liczbe N: ";
cin >> N;
int suma = 0, j = 1;
while (j <= N) {
        suma += j;
        j++;
    }
    cout << "Suma liczb naturalnych do " << N << ": " << suma << "\n";
return 0;}