#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; 
	char input;
	int X = 0;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student ["  << 1+X << "]: ";
		cin >> input; 
		
		if(input == 'A'){
			count[0] += 1;
			X++;
		} else if(input == 'B'){
			count[1] += 1;
			X++;
		} else if(input == 'C'){
			count[2] += 1;
			X++;
		}else if(input == 'D'){
			count[3] += 1;
			X++;
		}else if(input == 'F'){
			count[4] += 1;
			X++;
		}else if(input != '0'){ 
			cout << "Wrong input. Please input again.\n";
		}
	}while(input != '0');

	cout << "In total " << X << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	
	return 0;
}
