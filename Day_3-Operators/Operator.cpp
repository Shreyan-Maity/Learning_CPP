#include<bits/stdc++.h>
using namespace std;

class Operation{
    public:
    int add(int n,int j){
        int k=n+j;
        return(k);
    }
    int sub(int n,int j){
        int k=n-j;
        return(k);
    }
    int mul(int n,int j){
        int k=n*j;
        return(k);
    }
    int div(int n,int j){
        int k=n/j;
        return(k);
    }
    
};

int main(){
    int a,b;
    string func;
    cout << "Enter what you want to do :" << endl << "for Addition enter 'ADD'" << endl << "for substraction 'SUB'" << endl << "For Multlipication 'MUL'" << endl << "for division 'DIV' " << endl;
    cout << "Enter your choice : ";
    cin >> func;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    Operation fun; // thi is my object
    if(func == "ADD" || func == "add" ){
        int c = fun.add(a,b);
        cout << "The Addition of " << a << " & " << b <<" is = " << c << endl;
    }
    else if(func == "SUB" || func == "sub" ){
        int c = fun.sub(a,b);
        cout << "The Substraction of " << a << " & " << b <<" is = " << c << endl;
    }
    else if(func == "MUL" || func == "mul" ){
        int c = fun.mul(a,b);
        cout << "The Multlipication of " << a << " & " << b <<" is = " << c << endl;
    }
    else if(func == "DIV" || func == "div" ){
        int c = fun.div(a,b);
        cout << "The Division of " << a << " & " << b <<" is = " << c << endl;
    }
    else{
        cout << "Incorrect Entry!!! \nYour choice not entered in correct format.";
    }
    // cout << c;
    return 0;
}
