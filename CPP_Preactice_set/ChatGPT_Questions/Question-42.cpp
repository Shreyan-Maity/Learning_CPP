#include<bits/stdc++.h>
using namespace std;

void table(int n);
int mul(int a,int b);

int main(){
    cout<<"Enter your number : ";
    int num;
    cin>>num;
    table(num);
    return 0;
}

void table(int n){
    for(int i=1;i<=10;i++){
        cout << n <<" X "<<i << " = " << mul(n,i) <<endl;
    }
}

int mul(int a,int b){
    return a*b;
}