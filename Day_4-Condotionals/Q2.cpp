#include<bits/stdc++.h>
using namespace std;

int inputFromUser(){
    int num;
    cout << "Enter your number : ";
    cin >> num;
    return num;
}

void checkForGrade( int input){
    char gr;
    if(input < 0 || input > 100){
        cout << "Range is invalid!!!"; 
        return;
    }
    else if(input>=90) gr ='A';
    else if(input>=75) gr = 'B';
    else if(input>=50) gr = 'C';
    else gr = 'D';
    cout << "Your grade is : " << gr;
    return;
}

int main(){
    int userInput = inputFromUser();
    checkForGrade(userInput);
    return 0;
}