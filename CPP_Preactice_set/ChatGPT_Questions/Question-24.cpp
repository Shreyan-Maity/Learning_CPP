#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2,num3;
    cout << "Enter the value of 1st number : ";
    cin >> num1;
    cout << "Enter the value of 2nd number : ";
    cin >> num2;
    cout << "Enter the value of 3rd number : ";
    cin >> num3;

    /////Using ternary/////
    cout << ((num1<num2 && num2>num3)? "2nd number is bigger" :(num2<num3 && num3>num1)? "3rd number is bigger" : "1st number is bigger") << endl;

    return 0;
}