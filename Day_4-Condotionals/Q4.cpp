#include<bits/stdc++.h>
using namespace std;

void inputFromUser(){
    int num1,num2,num3;
    cout << "Enter 1st number : ";
    cin >> num1;
    cout << "Enter 2nd number : ";
    cin >> num2;
    cout << "Enter 3rd number : ";
    cin >> num3;
    if (num1 > num2 && num1 > num3 ) cout << "The 1st number is the largest";
    else if (num2 > num3 && num2>num1) cout << "The 2nd number is the largest";
    else cout << "The 3rd number is the largest";
    return ;
}

int main(){
    inputFromUser();
    return 0;
}