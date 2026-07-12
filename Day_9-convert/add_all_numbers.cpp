#include<bits/stdc++.h>
using namespace std;

int input();
int total(int n);

int main(){
    int n = input() ;
    cout << total(n);
    return 0;
}

int input(){
    cout << "Enter your number : ";
    int num;
    cin >> num;
    return num;
}

int total(int n){
    int total= 0;
    for(int i=0;i<=n;i++){
        total = total + i;
    }
    return total;
}

