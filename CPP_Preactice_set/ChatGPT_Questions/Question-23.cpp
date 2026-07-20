#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cout << "Enter the value of 1st number : ";
    cin >> num1;
    cout << "Enter the value of 2nd number : ";
    cin >> num2;

    /////Using ternary/////
    cout << ((num1<num2)? "2nd number is bigger" : "1st number is bigger") << endl;
    
    return 0;
}