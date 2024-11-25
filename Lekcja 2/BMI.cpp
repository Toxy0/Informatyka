#include <iostream>
using namespace std;
int main(){
	float kg;
	cout <<"Podaj wage (w kg):"; cin >> kg; 
	float m; 
	cout <<"Podaj Wzrost (w metrach):"; cin >> m;
	float bmi = kg / (m * m);
	cout <<"Twoje BMI wynosi:" << bmi << endl;
	if (bmi <=18.5) cout << "Niedowaga" << endl;
{

	if ((bmi >= 18.5) && (bmi <= 24.9))
	cout <<"W Normie" << endl;
}
{
	if ((bmi >= 25) && (bmi <= 29.9))
	cout <<"Nadwaga" << endl; 
	}
	{
	if (bmi >=30) cout << "Otylosc" << endl;
	}
	return 0;
}