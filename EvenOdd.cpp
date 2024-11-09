#include <iostream>
using namespace std;
int main(){
    int x;
    cout <<"Enter any number";
    cin >> x;
    if (x % 2 ==0)
    {
        cout << x << "\tis an even number";
    }else{
        cout << x << "\tis an odd number";
    }
    
}