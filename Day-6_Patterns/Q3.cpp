#include<bits/stdc++.h>
using namespace std;

void userInput(int &ro){
    cout << "Enter the number of rows you want to print : ";
    cin >> ro;
    return ;
}
void pat1(int k){
    for(int i=0;i<=k;i++){
        for(int j=1;j<=i;j++) cout << j;
        cout << endl;
    }
    return;
}

int main(){
    int row;
    userInput(row);
    pat1(row);
    return 0;
}