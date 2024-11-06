// Eunice Wu
// Nov 4, 2024
// Lab 8

#include <iostream>
#include <cmath>

using namespace std;
//part 2: declaring a function and setting a body that returns value back
int doubleMultiply(int a, int b)
{
    int product;
    product= a*b * 2;
    return product;
}
//part 3: declaring a variable again
double getSum (double x, double y, double z);

int main () {

    double num=0; // declaring a num so that user inputted value can be use in predefined fuctions in part 1
    double value1 =0 , value2 = 0, value3 =0; //prevent garbage values
    double result=0;

    // part 1
    cout << "Enter a floating point number: ";
    cin >> num;

    cout << "The square root of the number is " << sqrt(num) << endl;
    cout << "The number raised to the 4th power is " << pow(num,4) << endl;
    cout << "The floor of the number is " << floor(num) << endl;

    //part 2
    int num1, num2; // declared two int values so that user can input values in
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Twice the product of the numbers is: "
    << doubleMultiply (num1, num2) << endl; //using the user made fuction before the main fuction, returns twice the product of the nums

    system("PAUSE"); // ask user to press any number to continue

    //part 3: ask user for 3 values and then use a user made fuction to calc total
    cout << "Enter three numbers: ";
    cin >> value1 >> value2 >> value3;
    result=getSum (value1,value2,value3);
    cout << result;


    return 0;
}
// sets what the fuction body does in part 3 (add all the values up and returns it)
double getSum (double x, double y, double z) {
    return x+y+z;
}

/*Enter a floating point number: 6.5
The square root of the number is 2.54951
The number raised to the 4th power is 1785.06
The floor of the number is 6
Enter two integers: 9 7
Twice the product of the numbers is: 126
Press any key to continue . . . 
Enter three numbers: 1 2 3
6
*/
