#include<bits/stdc++.h>
using namespace std;

void userInput(int &ro){
    cout << "Enter the number of rows you want to print : ";
    cin >> ro;
    return ;
}

void pat(int n){
    int sp=n-1,st=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<sp;j++) cout << " ";
        for(int j=0;j<st;j++) cout << "*";
        if(i<n){
            sp -=1;
            st +=2;
        }
        cout << endl;
    }
    return;
}

int main(){
    int row;
    userInput(row);
    pat(row);
    return 0;
}