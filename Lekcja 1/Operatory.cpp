#include <iostream>

int main() {
    int liczba1, liczba2;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczba1;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> liczba2;

    int suma = liczba1 + liczba2;
    int roznica = liczba1 - liczba2;
    int iloczyn = liczba1 * liczba2;
    int iloraz = liczba1 / liczba2;
    int reszta = liczba1 % liczba2;

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Roznica: " << roznica << std::endl;
    std::cout << "Iloczyn: " << iloczyn << std::endl;
    std::cout << "Iloraz: " << iloraz << std::endl;
    std::cout << "Reszta z dzielenia: " << reszta << std::endl;

    return 0;
}
