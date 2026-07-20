#include<bits/stdc++.h>
using namespace std;

int main(){
    cout <<"Enter you character : ";
    char ch;
    cin >> ch;
    /////-----Explicit conversion-----/////
    //cout << (((int)ch>26) ?"It's lowercase"  : "It's uppercase");
    /////-----Implicit conversion-----/////
    cout << ((ch-'A'>26) ?"It's lowercase"  : "It's uppercase");

    return 0;
}