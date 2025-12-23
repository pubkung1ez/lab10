#include <iostream>
#include <iomanip>
#include<fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    ifstream source;
	source.open("score.txt") ;
    cout << "Number of data = ";
    cout << setprecision(3);
    double y,z=0,a,b,c,d,e;
    string x;
    while(getline(source , x)){
        y = y + stof(x);
        b = b + (stof(x)*stof(x));
        z++;
    }
    c= b/z;
    a = y/z;
    d = c - a*a;
    e = sqrt(d);
    cout << z << endl;
    cout << "Mean = "<< a <<endl;
    cout << "Standard deviation = "<< e;
    source.close();
	return 0;
}