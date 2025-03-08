#include <iostream>
using namespace std;
int main (){
int liczby[5];	
cout << "Wprowadz 5 liczb calkowitych:\n";
    for (int i = 0; i < 5; i++) {
        cin >> liczby[i];
        if (liczby[i] < 0) liczby[i] = 0;
    }
    cout << "Liczby ujemne zamienione na 0: ";
    for (int i = 0; i < 5; i++) {
        cout << liczby[i] << (i < 4 ? ", " : "\n");
    }
	
	return 0;
}