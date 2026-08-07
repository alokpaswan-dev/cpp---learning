#include <iostream>
using namespace std;

int main(){
    float  tempCelsius;
    cout << "Enter temp in celsius : ";
    cin >> tempCelsius;

    float tempFahrenheit = (9.0 / 5.0) * tempCelsius + 32;
    cout << "Temp in Fahrenheit : " <<tempFahrenheit <<endl;



    return 0;
}