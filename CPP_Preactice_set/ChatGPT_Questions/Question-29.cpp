#include<bits/stdc++.h>
using namespace std;

int main(){
    cout <<"Enter you number : ";
    int num;
    cin >> num;
    /////-----Using ternery-----/////
    cout << ((num%5==0 && num%11==0) ? "Divisible by 5 & 11" : "Not divisible");

    return 0;
}