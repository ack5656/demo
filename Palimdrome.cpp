
#include<iostream>
#include<algorithm>
using namespace std;

bool ispalindrome(string st1){
    string st2 = st1;
    reverse(st2.begin(),st2.end());
    if(st1==st2){
        return true;
    }else{
        return false;
    }
}

int main(){
    string st;
    cout<<"enter the string:";
    getline(cin,st,'.');
    if(ispalindrome(st)){
        cout<<"this is a palindrome."<<endl;
        
    }else{
        cout<<"this is not a palindrome.";
    }
    return 0;
}
