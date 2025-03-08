#include <iostream>
using namespace std;
int main() {
  int N;
    cout << "Podaj liczbe N: ";
    cin >> N;
    cout << "Liczby parzyste od 2 do " << N << ":\n";
    int i = 2;
    while (i <= N) {
        cout << i << "\n";
        i += 2;
    }
return 0; }