#include <iostream>
using namespace std;

int main() {
    int principal = 40000;
    int rate = 3;
    int time = 4;

    double simpleInterest = (principal * rate * time) / 100.0;
    cout << "Simple Interest = " << simpleInterest <<endl; 


    return 0; 
}