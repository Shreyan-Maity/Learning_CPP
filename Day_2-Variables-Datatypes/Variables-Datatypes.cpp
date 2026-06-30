#include<bits/stdc++.h>

using namespace std;

// int main (){
//     int age;
//     string name;
//     cout << "Enter Your Name : ";
//     getline(cin, name);
//     cout << "Enter your Age : ";
//     cin >> age;

//     cout << "Hello! " << name << ", You are " << age << " year old.";

//     return 0;
// }


int main() {
    string name;
    int age;
    int marks;

    cout << "Enter your name: ";
    getline(cin, name); 

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your marks: ";
    cin >> marks;

    cout << "Hello " << name << ", you are " << age << " years old and scored " << marks << " marks.\n";

    return 0;
}