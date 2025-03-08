#include <iostream>
using namespace std;
int main(){
int liczba ;
cout << "Podaj wynik egzaminu (liczba punktow) : "; 
cin >> liczba; 	
if ((liczba >= 0) && (liczba <= 49)) {
    cout << "Ocena Niedostaczena" << endl;
    
} if ((liczba >= 50) && (liczba <= 69)) {
    cout << "Ocena Dostaczena" << endl;
}
if ((liczba >= 70) && (liczba <= 84)) {
    cout << "Ocena Dobra" << endl;
}
if ((liczba >= 85) && (liczba <= 99)) {
    cout << "Ocena Bardzo Dobra " << endl;
}
if (liczba == 100) {
    cout << "Ocena Celujaca " << endl;
}
else {
 (liczba >=100);
 cout <<"Liczba poza zakresem" ; }  

return 0; }
