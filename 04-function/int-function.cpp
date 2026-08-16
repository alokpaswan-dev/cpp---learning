#include <iostream>
using namespace std;

int sum(int a , int b);  //parameter 

int main(){
    cout<<sum(5, 6)<<"\n"; //argument
    return 0;
}

int sum(int a, int b){ 
    return a+b;
}