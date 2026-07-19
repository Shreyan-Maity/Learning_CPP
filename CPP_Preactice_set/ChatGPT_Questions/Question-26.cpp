#include<bits/stdc++.h>
using namespace std;

int main(){
    cout <<"Enter you character : ";
    char ch;
    cin >> ch;
    
    /////Using switch case/////
    // switch(ch){
    //     case 'a': case 'A': case 'e': case 'E':case 'i': case 'I': case 'o': case 'O': case 'u': case 'U':
    //         cout << ch << " is a vowel." << endl;
    //         break;

    //     default :
    //         cout << "is consonent";
    // }

    /////Using if else condition/////
    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u') cout << ch<<" is Vowel."<< endl;
    else cout << ch << " is Consonant";

    /////Using ternary operator/////
    //cout << ((ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u') ? "You entered a Vowel." : "You entered a Consonant" ) <<endl;
    
    return 0;
}