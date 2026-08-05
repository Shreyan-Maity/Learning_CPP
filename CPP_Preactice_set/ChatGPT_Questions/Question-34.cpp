#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    char ch;
    cout<<"Enter no of day of the week : ";cin>>num1;
    switch(num1){
        case 1: cout<<"MONDAY - Working Day";
            break;
        case 2: cout<<"TUESDAY - Working Day";
            break;
        case 3: cout<<"WEDNESDAY - Working Day";
            break;
        case 4: cout<<"THURSDAY - Working Day";
            break;
        case 5: cout<<"FRIDAY - Working Day";
            break;
        case 6: cout<<"SATURDAY - Holi Day";
            break;
        case 7: cout<<"SUNDAY - Holi Day";
            break;
        default: cout<<"Enter a day in range 1-7";
    }
    return 0;
}
