#include<iostream>
using namespace std;

//Write the function printO() here
printO(int N,int M){
	if(N > 0 and M > 0){
		for(int y=N ;y > 0 ; y--){
			for(int i=M ;i > 0 ; i--){
				cout << "O";
			}
			cout << "\n";
		}	
	}else{
		cout << "Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
