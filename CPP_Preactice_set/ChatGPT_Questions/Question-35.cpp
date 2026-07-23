#include<bits/stdc++.h>
using namespace std;

int main(){
    int si1,si2,si3;
    cout << "Enter 1st side length of the triangel : ";
    cin >> si1>>si2>>si3;
    if(si1+si2 >si3 && si2+si3 >si1 && si1+si3 > si2) cout << "valid";
    else cout << "invalid";
    return 0;
}