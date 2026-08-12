#include <iostream>
using namespace std;

int main(){
    int row, rowindex, num;
    
    cout<<"Enter no of row : ";
    cin>>row;

    for(rowindex = 1; rowindex <= row; rowindex++){
        int num = 1;
        do{
            cout<<num<<" ";
            num++;
            
        }while(num <= rowindex);
        cout<<"\n";
    }
    return 0;
}