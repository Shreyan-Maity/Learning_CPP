#include<bits/stdc++.h>
using namespace std;

int inputFromUser(){
    int num;
    cout << "Enter your number : ";
    cin >> num;
    return num;
}
void checkForLeap(int year){
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) cout << "Leap year!!!";
    else cout << "Not a leap year";
}

int main(){
    int userInput = inputFromUser();
    checkForLeap(userInput);
    return 0;
}