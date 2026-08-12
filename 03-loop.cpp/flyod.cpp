#include <iostream>
using namespace std;

int main(){
    int rows, rowIndex, colIndex, num = 1;
    cout<<"Enter row number : ";
    cin>>rows;

    for (rowIndex = 1; rowIndex <= rows; rowIndex++){
        for(colIndex = 1; colIndex <= rowIndex; colIndex++){
            cout<<num<<" ";
            num++;
        }cout<<"\n";
    }
    return 0;
}