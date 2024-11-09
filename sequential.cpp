#include <iostream>
using namespace std;
int main(){
    int x;
    int y;
    int sum;
    int diff;
    int product;

    

    cout<<"Enter 1st number" << endl;
    cin >> x;

    cout <<"Enter 2nd number" << endl;
    cin >> y;

    sum = x +y;
    cout <<"The above given 2 number sum is\t" << sum << endl;

    diff = x -y;
    cout <<"The above given 2 number difference is\t" << diff <<endl;

    product = x*y;
    cout <<"The above given 2 number product is \t " << product <<endl;
}