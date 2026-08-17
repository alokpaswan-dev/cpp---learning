#include <iostream>

using namespace std;

int main(){
    int arr[] = {12, 42, 78, 94, 115};
    int n = sizeof(arr) / sizeof(arr[0]);

    int isSorted = 1;
    for(int i = 0; i<n-1; i++){
        if(arr[i+1] < arr[i]){
            isSorted = 0;
            break;
        }
    }
    cout<< isSorted <<"\n";
    if(isSorted == 1){
        cout<<"increasing \n";
    }else{
        cout<<"is not sorted  \n";
    }
    return 0;
}
