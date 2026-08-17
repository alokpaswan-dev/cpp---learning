#include <iostream>
using namespace std; 

int main(){
    int arr[] = {1,2,3,2,1};
    int target = 3;
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0, c = 0;

    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = i ; j < n ; j++){
            sum = sum + arr[j];
            if(sum == target)
            c++;
        }
    }
    cout<<c<<"\n";
    return 0;
}