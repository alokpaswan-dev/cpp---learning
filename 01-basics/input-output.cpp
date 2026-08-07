#include <iostream>
using namespace std;
int main(){
    int length , breadth ;
    cout << "Enter length : " << endl;
    cin >> length;
    cout << "Enter breadth : " << endl;
    cin >> breadth;
    int area = length * breadth ;
    int perimeter = 2 * (length + breadth );
    cout << "Area of rectangle = " << area <<endl;
    cout << "Perimeter = " << perimeter <<endl;



    return 0;
}


