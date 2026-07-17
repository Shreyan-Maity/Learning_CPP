#include<bits/stdc++.h>
using namespace std;

void simpleInterest(int am, int yr,int r);

int main(){
    cout << "/////---This is Simple interest calculator---/////" << endl;
    cout << "Enter the amount you invested : ";
    int amount;
    cin >> amount;
    cout << "Enter the years you invested : ";
    int years;
    cin >> years;
    cout << "Enter the rate of interest you invested : ";
    int rr;
    cin >> rr;
    simpleInterest(amount,years,rr);
    return 0;
}

void simpleInterest(int am, int yr,int r){
    int interest=(am*r)/100;
    int total = am +interest ;
    for(int i=1; i<=yr;i++){
        cout << "After " << i << " year, your total capital is : " << total << endl; 
        total = total+interest;
    }
    return;
}