#include <iostream>
using namespace std;

void printHello(); //function decelaration

int main(){
    printHello(); //function call
    cout<<"How are you \n";
    printHello();
    printHello();
    return 0;
}


void printHello(){ //function definition
    cout<<"HelloG!!\n";
}