// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int ro=4;
    int co=4;
    vector<vector<int>> ar(ro, vector<int>(co,0));
    for(int i=0;i<ro;i++){
        for(int j=0;j<co;j++){
            cout<<"Enter value of [" <<i<< "," <<j<< "] : ";
            cin>>ar[i][j];
        }
    }
    int sumR=0;
    int sumL=0;
    cout<<"{\n";
    for(int i=0;i<ro;i++){
        
    int maxi = INT_MIN, mini = INT_MAX, sum = 0;
    for(int j=0; j<co; j++){
        sum += ar[i][j];
        maxi = max(maxi, ar[i][j]);
        mini = min(mini, ar[i][j]);
    }
    //int axi =*max_element(ar[i].begin(),ar[i].end());
    //int sum =accumulate(ar[i].begin(),ar[i].end(), 0);
    //int axi1 =*min_element(ar[i].begin(),ar[i].end());
    sort(ar[i].begin(),ar[i].end());
    
    
    
        cout<<"{";
        for(int j=0;j<co;j++){
            cout<<ar[i][j]<<", ";
            if(i==j) sumR+=ar[i][j];
            else if(i+j==ro-1) sumL+=ar[i][j];
        }
        cout<<"}\n";
        cout<< "Max:" <<maxi<<endl;
        cout<< "Min:" <<mini<<endl;
        cout<< "Sum:" <<sum<<endl;
        
    }
    cout<<"}\n";
    cout<<"Sum of right diagonal is : "<<sumR<<endl;
    cout<<"Sum of left diagonal is : "<<sumL;
    return 0;
}