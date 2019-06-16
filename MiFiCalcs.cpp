#include <iostream>
#include <cmath>

using namespace std;

double compoundInterest(double p = 1500.00, double r = 4.3, double t = 6.0, double n = 4.0);


int main(){
	
	cout << "--Compound interest calculator.--\n";
	cout << "\nFinal amount: $" << compoundInterest() << "\n\n";

}

double compoundInterest(double p, double r, double t, double n){
	std::string def_req = "";
	cout << "Use defaults ($1500, 4.3%, t=6, n=4) = $1938.84? (y/n): ";
	cin >> def_req; //should add some data type check
	if (def_req == "n"){
		cout << "Principal: "; cin >> p;
		cout << "Annual Interest rate (%): "; cin >> r; // r is the annual rate. Period rate is r/n
		cout << "Number of years: "; cin >> t;
		cout << "Compounding per year: "; cin >> n;
	}
	
	for(int i=1; i <= t*n; i++){
		p = p + (p*(r/n/100.0));
	}
	
	return p;
	
}
