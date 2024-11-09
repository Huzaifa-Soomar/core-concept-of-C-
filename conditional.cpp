#include <iostream>
using namespace std;

int main(){
   int num;
   cout <<"enter any number";
   cin >>num;
   if (num==0)
   {
    cout << "The number is zero";
   }else if (num > 0)
   {
    cout << "The number is positive";
   }else{
    cout << "The number is neagtive";
   }
   
    return 0 ;
}