#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;
    int password;

    cout << "Enter Username : ";
    cin >> username;
    cout << "Enter Password : ";
    cin >> password;
    
    if(username == "Alok"){
        if(password == 95341){
            cout<< "login successful" <<endl;
        }else{
            cout<< "Wrong Password" <<endl;
        }
    }else{
        cout << "Wrong username" <<endl;
    }

    return 0;
}