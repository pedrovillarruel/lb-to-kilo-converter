// This little program converts pounds (lbs) to kilograms (kilo)
#include <iostream>
#include <string>
using namespace std;
int main(){
	double pounds, kg;
	cout << "Enter pounds desired ";
	cin >> pounds;
	kg = pounds / 2.205;
	cout << pounds << " lbs. converted to kilo is, " << kg << " kilos." << endl;
	cout << endl;
	system("pause"); 
}
