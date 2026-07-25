#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,c,count=0;
    cout << "Enter your number : ";
    cin>>num;
    for(int n=num;(num/10)!=0;n++) count++;
    cout << count;
    return 0;
}