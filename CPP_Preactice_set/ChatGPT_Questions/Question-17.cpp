#include<bits/stdc++.h>
using namespace std;

void simpleInterest(int am, int yr,int r);

int main(){
    cout << "/////---This is Compounding interest calculator---/////" << endl;
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
    for(int i=1;i<=yr;i++){
        float total = am * pow(1 + (float)r/100,i);
        cout << total ;
        float interest = total-am ;
        cout <<"After " << i<< "year, your interest is : " << interest <<" and your total is : " <<total <<endl;
    }
    return;
}