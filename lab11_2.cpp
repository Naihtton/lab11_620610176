#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------\n";
	dest << "AR CHI\n";
	dest << "AR BOW\n";
	dest << "CHOW CHOW\n";
	dest << "BA KA\n";
	dest << "BA GEAR\n";
	dest << "CHEER CHEER\n";
	dest << "WE ARE ALL\n";
	dest << "ENTANEER\n";
	dest << "CMU\n";
	dest << "-------------------- HA!! ---------------------";


    source.close();
    dest.close();
	return 0;
}
