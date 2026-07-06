#include<bits/stdc++.h>
using namespace std;

void userInput(int &ro){
    cout << "Enter the number of rows you want to print : ";
    cin >> ro;
    // cout << "Enter the number of columns you want to print : ";
    // cin >> co;
    return ;
}

void pattern(int r){
    for(int i=0;i<r;i++){
        for(int j=0;j<=i;j++) cout << "* ";
        cout <<endl;
    }
}

// void pat1(int k){
//     for(int i=0;i<k;i++){
//         for(int j=0;j<k-i;j++) cout << "* ";
//         cout << endl;
//     }
//     return;
// }

int main(){
    int row;
    userInput(row);
    pattern(row);
    // pat1(row);
    return 0;
}