#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter your number : ";
    cin >> num;
    // if(num%2==0)  cout << "The number is positive. " ;
    // else cout << "The number is negative. ";
    
    /////This is ternary operator/////
    cout << ((num > 0) ? "The number is positive. " : (num==0) ?  "It\'s 0" : "The number is negative. " );

    return 0;
}