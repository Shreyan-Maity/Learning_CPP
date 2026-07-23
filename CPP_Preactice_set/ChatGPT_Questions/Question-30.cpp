#include<bits/stdc++.h>
using namespace std;

int main(){
    int units;
    cout << "Enter total units consumed : ";
    cin >> units;
    int bill=0;
    if(units<=100) bill = units*2;
    else if(units<=200) bill = (100*2) + (units-100)*3;
    else if(units<=400) bill = (100*2) + (100*3) + (units-200)*5;
    else bill = (100*2) + (100*3) + (200*5) + (units-400)*8;
    cout << bill ;    
    return 0;
}