#include<bits/stdc++.h>
using namespace std;

float areaCalculator(float l, float w);

int main(){
    float length;
    float width;
    cout<< "Enter the length of the rectangle in meters : ";
    cin >> length;
    cout<< "Enter the width of the rectangle in meters : ";
    cin >> width;
    cout << "The area of the rectangle will be (" << areaCalculator(length,width) << ") m^2.";
    return 0;
}

float areaCalculator(float l, float w){
    float areaOfRectangle = l*w;
    return areaOfRectangle; 
}