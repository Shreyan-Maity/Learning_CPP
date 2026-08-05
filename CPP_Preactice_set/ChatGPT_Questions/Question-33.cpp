#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    char ch;
    cout<<"Enter 1st number : ";cin>>num1;
    cout<<"Enter 2nd number : ";cin>>num2;
    cout<<"Enter the calculation you want to perform";cin>>ch;
    switch(ch){
        case '+': cout<<num1+num2;
            break;
        case '-': cout<<num1-num2;
            break;
        case '*': cout<<num1*num2;
            break;
        case '/': cout<<num1/num2;
            break;
        default: cout<<"Enter the right symbol you want to perform";
    }
    return 0;
}
