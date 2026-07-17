#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter you number : " ;
    int number;
    cin >> number;
    // Input validation check
    // if (!(cin >> number)) {
    //     cerr << "Invalid input. Please enter a numeric value.\n";
    //     return 1;
    // }
    // int qubeOfNumber = (number);
    int qubeOfNumber = (number*number*number);
    cout << "The qube of your provided number is = "<< qubeOfNumber <<endl;
    return 0;
}