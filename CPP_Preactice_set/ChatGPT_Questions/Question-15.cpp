#include<bits/stdc++.h>
using namespace std;

float areaCalculator(float r);

int main(){
    float radius;
    cout<< "Enter the radius of the circle in meters : ";
    cin >> radius;
    cout << "The area of the circle will be (" << areaCalculator(radius) << ") m^2.";
    return 0;
}

float areaCalculator(float r){
    float pi =3.14159265;
    float areaOfCircle = (pi*(r*r));
    return areaOfCircle; 
}