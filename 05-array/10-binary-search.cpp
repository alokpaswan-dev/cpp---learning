#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 30, 44, 67, 78, 100};
    int target = 78;

    int n = sizeof(arr)/sizeof(arr[0]);

    int ans = -1;

    int s = 0, e = n - 1;

    while(s <= e){
        int mid = (s+e)/2;

        if(arr[mid] == target){
            ans = mid;
            break;
        }else if(arr[mid] < target){
            s = mid +1;
        }else{
            e = e -1;
        }
    }
    cout<<ans<<endl;

}