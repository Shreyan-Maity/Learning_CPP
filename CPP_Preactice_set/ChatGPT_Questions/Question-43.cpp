#include<bits/stdc++.h>
using namespace std;

int reverse(int num);

int main(){
    cout << "Enter your number : ";
    int num;
    cin >> num;
    cout << reverse(num);
    return 0;
}

int reverse(int num){
    int rev=0;
    int n;
    while(num!=0){
        n= num%10;
        rev=rev*10+n;
        num=num/10;
    }
    return rev;
}