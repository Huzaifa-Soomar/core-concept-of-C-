#include <iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int sum;
    int diff;
    string op;
    cout << "enter 1st nummber" <<endl;
    cin >> num1;
    cout << "enter 2nd nummber" <<endl;
    cin >> num2;
    cout << "Which operation you perform (+) or (-)" << endl;
    cin >> op;
    if (op == "+")
    {
        sum = num1 + num2;
        cout << "The sum of two number is " << sum;
    }else if(op=="-"){

        diff = num1- num2;
        cout << "The differnce of two number is " << diff;
    }
    
    return 0;
} 