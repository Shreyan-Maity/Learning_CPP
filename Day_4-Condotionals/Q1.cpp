#include<bits/stdc++.h>
using namespace std;

void check(int num){
    if(num %2 == 0) cout << "Your number is even";
    else cout << "Your number is odd";
}

int main(){
    int n;
    cout << "Enter you number : ";
    cin >> n;
    check(n);
}