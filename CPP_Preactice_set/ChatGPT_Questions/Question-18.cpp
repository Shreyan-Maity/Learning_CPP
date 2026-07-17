#include<bits/stdc++.h>
using namespace std;

float average(float a, float b, float c);
int main(){
    cout << "Enter the 1st number : " ;
    float num1;
    cin >> num1;
    cout << "Enter the 2nd number : " ;
    float num2;
    cin >> num2;
    cout << "Enter the 3rd number : " ;
    float num3;
    cin >> num3;
    cout <<"The Average of the given three numbers is : " << average(num1,num2,num3);
    return 0;
}

float average(float a, float b, float c){
    float avg = (a+b+c)/3;
    return avg;
}