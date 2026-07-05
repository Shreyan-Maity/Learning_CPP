#include<bits/stdc++.h>
using namespace std;

void userInput(int &ro,int &co){
    cout << "Enter the number of rows you want to print : ";
    cin >> ro;
    cout << "Enter the number of columns you want to print : ";
    cin >> co;
    return ;
}

void pattern(int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cout << "* ";
        cout <<endl;
    }
}

int main(){
    int row,col;
    userInput(row,col);
    pattern(row,col);
    return 0;
}