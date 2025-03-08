#include <iostream>
using namespace std;
int main (){
int N;
cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;
    int licznik = 0, k = 1;
    do {
    if (k % 2 == 0) licznik++;
    k++;
    } while (k <= N);
    cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << licznik << "\n";

    return 0;
}
