#include<bits/stdc++.h>
using namespace std;

class Operation{
    public:
    int add(int n,int j){
        int k=n+j;
        return(k);
    }
    
};

int main(){
    int a,b;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    Operation fun;
    int c = fun.add(a,b);
    // cout << c;
    cout << "The Sum of " << a << " & " << b <<" is = " << c << endl;
}
