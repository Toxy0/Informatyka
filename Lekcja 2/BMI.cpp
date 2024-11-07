#include <iostream>
using namespace std;
int main(){
	float kg;
	cout <<"Podaj wage (w kg):"; cin >> kg; 
	float m; 
	cout <<"Podaj Wzrost (w metrach):"; cin >> m;
	float bmi = kg / (m * m);
	cout <<"Twoje BMI wynosi:" << bmi ; if (bmi <=18.5) {
    cout << "Niedowaga" << endl;
}
if (bmi )
	return 0;
}