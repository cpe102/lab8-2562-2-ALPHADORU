#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	//il = initial loan ,irpy = interest rate per year ,ppy = pay per year
	double il ,irpy ,ppy ;
	int i=1; 
	cout << "Enter initial loan: ";
	cin >> il;
	cout << "Enter interest rate per year (%): ";
	cin >> irpy;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;
	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(il > 0){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << il;
		cout << setw(13) << left << il*irpy/100;
		cout << setw(13) << left << il+il*irpy/100;
		cout << setw(13) << left << (ppy <= il+il*irpy/100 ? ppy : il+il*irpy/100);
		cout << setw(13) << left << (ppy <= il+il*irpy/100 ? il+il*irpy/100-ppy:0);
		cout << "\n";
		il = (ppy <= il+il*irpy/100 ? il+il*irpy/100-ppy:0);
		i++;
	}
	return 0;
}
