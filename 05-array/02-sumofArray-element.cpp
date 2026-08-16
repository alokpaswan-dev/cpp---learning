#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 0;
    size = sizeof(arr)/sizeof(arr[0]);
    cout<<size<<"\n";
    int sum = 0;
    for (int i = 0; i<size; i++){
    
    sum = sum + arr[i];
    }cout<<sum;
    return 0;
}