#include<bits/stdc++.h>
using namespace std;

void convert(int d);
int main(){
    cout << "Enter number of days you want to convert : ";
    int days;
    cin >> days;
    convert(days);
    return 0;
}

void convert(int d){
    int years = d/365;
    cout << years<< " years, ";
    int remDay = d%365;
    int mon = remDay/30;
    cout << mon<< " months, ";
    int days = remDay%30;
    cout << days<< " days.";
    return;
}