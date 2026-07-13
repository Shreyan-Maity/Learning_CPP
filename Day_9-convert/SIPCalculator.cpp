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
    int total =0,amountYear,yearlyReturn;
    cout << "Enter how much you will invest monthly : ";
    int amount; cin >> amount;
    cout << "Enter how many year's you will invest : ";
    int years; cin >> years;
    cout << "Enter your expected rate of return on your investment : ";
    int RR; cin >> RR;
    //cout << RR;
    amountYear = amount*12;
    //cout << amountYear;
    yearlyReturn = amountYear+((amountYear*RR)/100);
    //cout << yearlyReturn;
    for(int i=1;i<=years;i++){
        total = total + yearlyReturn;
        cout << "After " << i << " year total is : " << total <<endl;
    }
    return;
}
