#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the value in Celcius : ";
    float celciusValue;
    cin >>celciusValue;
    float farenhightValue = (celciusValue*1.8) + 32;
    cout << "The Farenhight Value of " << celciusValue << "C is = "<< farenhightValue << "F"<<endl;
    return 0;
}