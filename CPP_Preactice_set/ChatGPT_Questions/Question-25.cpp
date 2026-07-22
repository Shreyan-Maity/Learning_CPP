#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the year : ";
    int year;
    cin >> year;
    if(year%400 == 0 || (year%4 == 0 && year%100 !=0)) cout << "It\'s a leapyear!!!";
    else cout<<"It\'s not a leapyear";
    return 0;
}