#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the value in Farenhight : ";
    float farenhightValue;
    cin >>farenhightValue;
    float celciusValue = (((farenhightValue-32)*5)/9);
    cout << "The Farenhight Value of " << farenhightValue << "F is = "<< celciusValue << "C"<<endl;
    return 0;
}