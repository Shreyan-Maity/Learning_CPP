#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter your number : ";
    cin >> num;
    // if(num%2==0)  cout << "The number is even. " ;
    // else cout << "The number is odd. ";
    
    /////This is ternary operator/////
    cout << ((num%2==0) ? "The number is even. " : "The number is odd. ");

    return 0;
}