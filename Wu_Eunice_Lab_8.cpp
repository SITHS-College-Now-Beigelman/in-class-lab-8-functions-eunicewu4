// Eunice Wu
// Nov 4, 2024
// Lab 8

#include <iostream>
#include <cmath>

using namespace std;
double getSum (double x, double y, double z);

int main () {

    double num=0;
    double num1, num2, num3 =0;
    double result=0;

    cout << "Enter a floating point number ";
    cin >> num;

    cout << "The square root of the number is " << sqrt(num) << endl;
    cout << "The number raised to the 4th power is " << pow(num,4) << endl;
    cout << "The floor of the number is " << floor(num) << endl;


    cout << "Enter three numbers ";
    cin >> num1 >> num2 >> num3;
    result=getSum (num1,num2,num3);
    cout << result;


    return 0;
}

double getSum (double x, double y, double z) {
return x+y+z;
}