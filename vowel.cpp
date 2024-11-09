#include <iostream>

using namespace std;

int main (){
    string ch;
    cout << "Enter any alphabet";
    cin >> ch;
    if (ch=="a" || ch=="e" || ch=="i" || ch=="o" ||ch=="u" )
    {
        cout << ch    <<   " \t is vowel";
    }else{
        cout << ch   << "\t is not vowel";
    }
    
}