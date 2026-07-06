#include<bits/stdc++.h>
using namespace std;

void userInput(int &ro){
    cout << "Enter the number of rows you want to print : ";
    cin >> ro;
    // cout << "Enter the number of columns you want to print : ";
    // cin >> co;
    return ;
}

void patternStar(int s){
        int star=1,space=s*2-2;
    for(int i=0;i<s;i++){
        for(int j=0;j<star;j++){
            cout << "*";
        }
        for(int j=0;j<space;j++){
            cout <<" ";
        }
        for(int j=0;j<star;j++){
            cout << "*";
        }
        cout << endl;
        if(i<s){
            star ++;
            space -=2;
        }
    }
    return;
}

void patternNumber(int r){
    int star=1,space=r*2-2;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=star;j++){
            cout <<j;
        }
        for(int j=1;j<=space;j++){
            cout <<" ";
        }
        for(int j=star;j>0;j--){
            cout <<j;
        }
        cout << endl;
        if(i<r){
            star ++;
            space -=2;
        }
    }
    return;
}

void diamond(int r){
    int star=1,space=r/2;
    for(int i=0;i<r;i++){
        for(int j=0;j<space;j++) cout << " ";
        for(int j=0;j<star;j++) cout << "*";
        cout << endl;
        if(i<r/2){
            star +=2;
            space -=1;
        }
        else{
            star -=2;
            space +=1;
        }
    }
    return;
}

void hollowDiamon(int s){
    int star=s/2,space=1;
    for(int i=0;i<s;i++){
        for(int j=0;j<star;j++) cout << "*";
        for(int j=0;j<space;j++) cout <<" ";
        for(int j=0;j<star; j++) cout << "*";
        cout <<endl;
        if(i<s/2){
            star -=1;
            space +=2;
        }
        else{
            star +=1;
            space -=2;
        }
    }
    return;
}

void hollowTriangle(int n){
    int sp=n-1,st=1,sp1=1,st1=1;
    for(int i=0;i<n;i++){
        if(i== n-1){
            for(int j=0;j<n*2-1;j++) cout << "*";
        }
        else if(i<n){
            for(int j=0;j<sp;j++) cout << " ";
            sp-=1;
        }
        else if(i>0 && i<n-1){
            for(int j=0;j<sp1;j++) cout << " ";
            sp1+=2;
        }
        else if(i>0 && i<n-1){
            for(int j=0;j<st;j++) cout << "*";
            // st+=1;
        }
        cout << endl;
    }
    return;
}

int main(){
    int row;
    userInput(row);
    patternStar(row);
    patternNumber(row);
    diamond(row);
    hollowDiamon(row);
    hollowTriangle(row);
    return 0;
}