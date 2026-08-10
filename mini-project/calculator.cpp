#include <iostream>
using namespace std;

int main(){

    double num1, num2, result;
    char operation;
    char again;

    do{
        cout<<"========================================\n";
        cout<<"             C++ CALCULATOR \n";
        cout<<"========================================\n";

        cout<<"Enter first number : ";
        cin>>num1;

        cout<<"Enter operator(+ , - , * , /) : ";
        cin>>operation;

        cout<<"Enter second number : ";
        cin>>num2;

        switch(operation){

            case '+' : 
            result = num1 + num2;
            cout<<"Result = "<<result<<endl;
            break;

            case '-' :
            result = num1 - num2;
            cout<<"Result = "<<result<<endl;
            break;

            case '*' :
            result = num1 * num2;
            cout<<"Result = "<<result<<endl;
            break;

            case '/' :
            if(num2 == 0){
                cout<<"Error! cannot divided by zero"<<endl;
            }
            else{
                result = num1 / num2;
                cout<<"Result = "<<result<<endl;
            }
            break;

            default :
            cout<<"Invalid operator!"<<endl;
            break;
         }
         cout<<"\nDo you want to calculate again (y/n) : ";
         cin >> again;
    
     }
     while(again == 'y' || again == 'Y');

     cout<<"\nCalcultor closed. Thank you!\n";

    return 0;
}