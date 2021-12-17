#include <iostream>
#include <iomanip>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0,mean,div;
    string score;
    ifstream source("score.txt");
 
    while(getline(source,score)){
        sum += atof(score.c_str());
        div += pow(atof(score.c_str()),2);
        count++;
        mean = sum/count;
    }  
    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << sqrt(div/count-pow(mean,2));
    return 0;
}