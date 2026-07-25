#include<bits/stdc++.h>
using namespace std;

long long factorial(long long n);

int main(){
    cout<<"Enter your number : ";
    long long num;
    cin>>num;
    cout << "The factorial of " << num << " is = " << factorial(num);
    return 0;
}

long long factorial(long long n){
    long long result=1;
    for(long long i=1;i<=n;i++){
        result=result*i;
    }
    return result;
}