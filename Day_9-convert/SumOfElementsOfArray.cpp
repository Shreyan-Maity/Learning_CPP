// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void inputAndCalculate();

int main() {
    // Write C++ code here
    inputAndCalculate();
    return 0;
}

void inputAndCalculate(){
    cout << "Enter the length of the array : "; int n; cin >>n;
    int arr[n] ;
    for(int i=0;i<n;i++){
        cout << "Enter the value of arr[" << i<<"] : " ;
        cin >> arr[i];
        //cout <<endl;
    }
    cout << "The array is : {";
    for(int i=0;i<n;i++){
        cout << arr[i] << " "; 
    }
    cout << "}" << endl;
    int j = 0;
    for(int i=0;i<n;i++){
        j = j+arr[i];
        //cout << j << endl;
    }
    cout << "The total is " << j;
    return;
}
