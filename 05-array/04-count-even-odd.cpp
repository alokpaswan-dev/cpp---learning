#include <iostream>
using namespace std;

int main(){
    int size = 0 , count = 0;
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size; i++){
        if(arr[i] % 2 == 0)
        count++;
    }cout<<"Total Even number are : "<<count<<"\n";
    cout<<"Total odd number are : "<<size - count <<"\n";
}