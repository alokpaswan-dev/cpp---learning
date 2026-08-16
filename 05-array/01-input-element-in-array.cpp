//Take the size N and N array element as input. Print the array

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter "<<n<<" size of an array: ";

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
}