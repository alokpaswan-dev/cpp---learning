#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 45, 67, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 3;

    int ans = -1;

    for(int i = 0; i<n; i++){
        if(arr[i] == target){
        ans = i;
        break;
    }
    }
    cout<<ans<<endl;
    return 0;
}