#include <iostream> 
using namespace std;

int main(){
    int num1 = 20;
    int num2 = 15;

    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    int division = num1 / num2;
    int remainder = num1 % num2;

    cout << "Addition = " << addition <<"\n";
    cout << "Subtraction = " << subtraction <<"\n";
    cout << "Multiplication = " << multiplication <<"\n";
    cout << "Division = " << division <<"\n";
    cout << "Remainder = " << remainder <<"\n";

    return 0;
}