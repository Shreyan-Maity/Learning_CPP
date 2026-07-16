#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the value of variable_1 : ";
    int variable_1;
    cin >>variable_1;
    cout << "Enter the value of variable_2 : ";
    int variable_2;
    cin >> variable_2;
    variable_1 = variable_1+variable_2;
    variable_2 = variable_1-variable_2;
    variable_1 = variable_1 -variable_2;
    cout << "After swap variable_1 = "<< variable_1 <<endl;
    cout << "After swap variable_2 = "<< variable_2 <<endl;
    return 0;
}