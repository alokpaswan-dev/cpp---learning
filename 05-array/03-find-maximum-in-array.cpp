#include <iostream>
using namespace std;

int main(){
    int arr[] = {45, 55, 78, 34, 99, 76, 90};
    int size = 0, max = arr[0];
    size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1; i < size; i++){
        if(arr[i] > max)
        max = arr[i];
    }cout<<max<<"\n";
}