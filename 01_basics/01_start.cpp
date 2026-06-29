// calling the standard library
#include<iostream>
// //calling the entire library 
#include<bits/stdc++.h>

// taking the standard namespace
using namespace std;

//-------------------------------------------------
// // main function - execution starts from here
// int main() {
//     // printing Hello, World! to the console
//     cout << "Hello, World!" << endl;
//     return 0;
//     // returning 0 indicates that the program ended successfully
// }

//-------------------------------------------------
// int main(){
//     int a;
//     int b;
//     cout<< "Enter the value of a: ";
//     cin>>a;
//     cout<< "Enter the value of b: ";
//     cin>>b;
//     cout<< "The value of a is: " << a << endl;
//     cout<< "The value of b is: " << b << endl;
//     return 0;
// }

//-------------------------------------------------
// int main(){
//     int a;
//     int b;
//     cout<< "Enter the value of a: ";
//     cin>>a;
//     cout<< "Enter the value of b: ";
//     cin>>b;
//     cout<< "The sum of a and b is: " << a + b << endl;
//     return 0;
// }

//-------------------------------------------------
// int main(){
//     //datatypes
//     int a; //int,float,double,long, long long

//     string name; // string, getline
//     cout << "Enter your name: ";
//     cin >> name;
//     cout<< "Hello " + name + ",how are you?" <<endl;
//     // string str;
//     // getline{cin, str};
//     // return 0;
// }

//-------------------------------------------------
//if else condition, nested if else condition
// int main(){
//     int age;
//     cout << "enter your age:";
//     cin >> age;
//     //conditions
//     if(age<=17){
//         if(age<=5){
//             cout << "you are a baby";
//         }
//         else if(age<=10){
//             cout << "you are a kid";
//         }
//         cout << "you are a minor";
//     }
//     else if(age<=50){
//         cout << "you are an adult";
//     }
//     else{
//         cout << "you are old";
//     }
//     return 0;
// }

//-------------------------------------------------
// //switch
// int main(){
    
//     int day;
//     cout << "enter the day in number";
//     cin >> day;
//     switch(day) {
//         case 1: 
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//         default:
//             cout << "invalid";
//     }
//     cout << "/outside";
//     return 0;
// }


// //-------------------------------------------------
// int main(){
//     string arr[3];
//     cout << "Enter the 1st name : " ;
//     cin >> arr[0];
//     cout << "Enter the 2nd name : " ;
//     cin >> arr[1];
//     cout << "Enter the 3rd name : " ;
//     cin >> arr[2];

//     cout << "here are the names " + arr[0] + "/" + arr[1] + "/" + arr[2];
    
// }

//-------------------------------------------------
//This demonstraits a for loop functionality
//for(initialization; condition; update) {
//    // body of loop
//}

// Start
//  ↓
// Initialize (i = 1)
//  ↓
// Check Condition (i <= 5?)
//  ├── Yes → Execute Body → Update (i++)
//  └── No → Exit Loop
//  ↓
// End

// int main(){
//     int i=111;
//     for(int i=0;i<=25;i+=5){
//         cout << "the values is :" << i << endl ;
//     }
//     cout << "the values is :" << i << endl ;
//     return 0;
// }

//-------------------------------------------------
//This demonstraits a while loop functionality
//
// int main(){
//     int i =0;
//     while(i<=25){
//         cout << "the values is :" << i << endl ;
//         i+=3;
//     }
//     return 0;
// }
//
// // Imagine you’re eating cookies:
// // You say: “I’ll keep eating cookies while there are still cookies in the jar.”
// // Each time you check: Is the jar empty?
// // If no, eat one cookie and check again.
// // If yes, stop.
//  int main(){
//     int cookies = 5;

//     while (cookies > 0) {   // condition: cookies still left
//         cout << "Eating the " << cookies << " cookie..."  << endl;  // eat one cookie
//         cookies--;
//         if(cookies == 0) cout << "No cookies left, the jar is empty";  
//     }

// }


//-------------------------------------------------
// int main() {
//     int cookies = 5;

//     do {
//         cout << "Eating the " << cookies <<" cookie..." << endl;
//         cookies--;   // eat one
//     } while (cookies > 0);  // check after eating
//     cout << "no cookies left";
// }




//-------------------------------------------------
// #include <iostream>
// using namespace std;

// class BankAccount {
// private:
//     double balance;   // private data member

// public:
//     // Constructor to initialize balance
//     BankAccount(double initialBalance) {
//         if (initialBalance >= 0)
//             balance = initialBalance;
//         else
//             balance = 0;
//     }

//     // Getter (to check balance)
//     double getBalance() {
//         return balance;
//     }

//     // Setter (to deposit money)
//     void setBalance(double amount) {
//         if (amount >= 0) {
//             balance += amount;   // add deposit
//         } else {
//             cout << "Invalid deposit amount!" << endl;
//         }
//     }
// };

// int main() {
//     BankAccount account(100);   // start with ₹100

//     cout << "Initial Balance: " << account.getBalance() << endl;

//     account.setBalance(50);     // deposit ₹50
//     cout << "After Deposit: " << account.getBalance() << endl;

//     account.setBalance(-20);    // invalid deposit
//     cout << "Final Balance: " << account.getBalance() << endl;

//     return 0;
// }



//-------------------------------------------------
// int main(){
//     int n=10;
//     for(int i=0;i<=n;i++){
//         cout << i <<endl;
//     }
//     cout << n;
// }


//-------------------------------------------------
// int main(){
//     int n=5 ;
//     for (int i=0;i<=n-1;i+=1){
//         // cout << "*" << endl;
//         for(int j =0; j<=n;j++){
//             cout << "* " ;

//         }
        
//         cout <<endl;
//     }
// }



//-------------------------------------------------
// int main(){
//     int n=5 ;
//     for (int i=1;i<=n;i+=1){
//         // cout << "*" << endl;
//         for(int j =1; j<=i;j++){
//             cout << "* " ;

//         }
        
//         cout <<endl;
//     }
// }



//-------------------------------------------------
// int main(){
//     int n=5 ;
//     for (int i=1;i<=n;i+=1){
//         // cout << "*" << endl;
//         for(int j =1; j<=i;j++){
//             cout << j ;

//         }
        
//         cout <<endl;
//     }
// }


//-------------------------------------------------
// int add (int x=0, int y=0){
//     int z=x+y;
//     // cout << z;
//     return z;
// }

// int mul(int i, int j){
//     return (i*j);
// }

// int sub(int X, int Y){
//     return (X-Y);
// }

// int main(){
//     int a;
//     int b;
//     cin >> a >> b;
//     cout << add(a,b) <<endl;
//     cout << mul(a,b) <<endl;
//     cout << sub(a,b) <<endl;

//     return 0;
// }


//-------------------------------------------------
// int main(){
//     int n;
//     cin >> n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             cout << i << "X" << j <<"=" << (i*j) << "   ";
//         }
//         cout<< endl;
//     }
// }


//-------------------------------------------------
// class Name{
// public:
//     void pat(int nn){

//         for(int i=1;i<=nn;i++){
//             for(int j=i;j<=nn;j++){
//                 cout << "  ";
//             }
//             for(int k=1;k<=i;k++){
//                 cout << "* ";
//                 // for(int l=1;l<=i;l++){
//                 //     cout << " ";
//                 // }
//             }
//             cout << endl;
//         }
//     }
// };
// int main(){
//     int n,nnn ;
//     cin >> n;
//     Name namesp,namesp1;
//     namesp.pat(n);
//     namesp.pat(n+5);
//     // for(int i = 1; i <= n; i++) {          // rows
//     //     for(int j = 1; j <= i; j++) {      // stars in each row
//     //         cout << "*";
//     //     }
//     //     cout << endl;
//     // }
//     return 0;
// }


//-------------------------------------------------
// class Solution{
// public:
//     vector<vector<int>> createMatrix(int rowHeightFromMain){
//         vector<vector<int>> twoDArray;
//         for(int row=0; row<rowHeightFromMain; row++){
//             vector<int> oneDArray;
//             for(int col=0; col<=row; col++){
//                 oneDArray.push_back(col+1);
//             }
//             twoDArray.push_back(oneDArray);
//         }
//         return twoDArray;
//     }

//     void print(vector<vector<int>> recivedFromMain){
//         // int len = recivedFromMain.size();
//         for(int i=0; i<recivedFromMain.size(); i++){
//             for(int j=0; j<recivedFromMain[i].size(); j++){
//                 cout << recivedFromMain[i][j];
//             }
//             cout << endl;
//         }
//         return;

//     }


// };

// int main(){
//     int rowHeight;
//     cout << "Enter the row height : ";
//     cin >> rowHeight;
//     Solution sol;
//     vector<vector<int>> mat;
//     mat = sol.createMatrix(rowHeight);
//     sol.print(mat);
//     return 0;
// }

//-------------------------------------------------

// class Solution{

//     public:
//         vector<vector<int>> pattern(int totalFromMain){
//             vector<vector<int>> towDArray;
//             for (int i=0; i<totalFromMain;i++){
//                 vector<int> oneDArray;
//                 for(int j=0; j<=i;j++){
//                     oneDArray.push_back(j+1);
//                 }
//                 towDArray.push_back(oneDArray);
//             }
//             return towDArray;    
//         }
//         // void pri(vector<vector<int>> printFromMain){

//         //     for(int i=0; i<printFromMain.size();i++){
//         //         for(int j=0;j<printFromMain[i].size();j++){
//         //             cout << "#" ;
//         //         }
//         //         cout << endl;
//         //     }
//         //     return;
//         // }
//         void pri(int printFromMain){

//             for(int i=0; i<printFromMain;i++){
//                 for(int j=0;j<=i;j++){
//                     cout << "#" ;
//                 }
//                 cout << endl;
//             }
//             return;
//         }
// };
// int main(){
//     int total;
//     cout << "Enter the total row : ";
//     cin >> total;
//     Solution sol;
//     // vector<vector<int>> print = sol.pattern(total);
//     sol.pri(total);
//     // sol.pri(print);
//     return 0;

// }



//-------------------------------------------------
class Class{
public:
    // vector<vector<string>> execute(int nFromMain){
    //     vector<vector<string>> two;
    //     for(int i=0; i<nFromMain;i++){
    //         vector<string> one;
    //         for(int j=0; j<=nFromMain-1;j++){
    //             one.push_back()
    //         }
    //         two.push_back(one);
    //     }
    //     return two;
    // } 
    void print(int n){
        for(int i=0; i<n; i++){
            for(int j=0; j<n-1-i; j++){
                cout << " ";
            }
            for(int k=0; k<=i; k++){
                cout << k+1 ;
            }
            cout<<endl;
        }
        return;
    }
};
int main(){
    int numberOfRows;
    cout << "Enter the number of rows : ";
    cin >> numberOfRows;
    Class cls;
    // vector<vector<string>> exe = cls.execute(numberOfRows);
    cls.print(numberOfRows);
    return 0;
}