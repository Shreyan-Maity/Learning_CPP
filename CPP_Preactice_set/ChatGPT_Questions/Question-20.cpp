#include<bits/stdc++.h>
using namespace std;

void convert(char d);
int main(){
    cout << "Enter character you want to convert : ";
    char ch;
    cin >> ch;
    convert(ch);
    return 0;
}

void convert(char d){
    int num = (int) d;
    cout << "The value is = "<<num;
    return;
}