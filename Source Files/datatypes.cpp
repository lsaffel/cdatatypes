#include <iostream>
using namespace std;

int main()
{
    int yearOfBirth = 1995;
    char gender = 'f';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 45678945876;

    cout << "Size of int s "<<sizeof(int)  << " bytes\n";

    cout << "Int min value is " << INT_MIN << endl;
    // -1,-2,-3,...., -2147483648

    cout << "Int max value is " << INT_MAX << endl;
    // 0,+1,+2,+3,...., +21474836487

    cout<< "Size of unsigned int is " << sizeof(unsigned int) << "bytes\n";
    cout << "UInt max value is " << UINT_MAX << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";

}