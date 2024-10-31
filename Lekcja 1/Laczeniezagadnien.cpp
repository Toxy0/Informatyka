#include <iostream>

int main() {
    int liczba1, liczba2;

    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczba1;
    std::cout << "Podaj druga liczbe: ";
    std::cin >> liczba2;
    
    int suma = liczba1 + liczba2;
    std::cout << "Suma: " << suma << std::endl;
    
     if (suma % 2 == 0) {
        std::cout << "Suma jest liczba parzysta." << std::endl;
    } else {
        std::cout << "Suma jest liczba nieparzysta." << std::endl;
    }
    return 0 ;
}