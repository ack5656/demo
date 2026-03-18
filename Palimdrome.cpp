#include<iostream>
using namespace std;

bool AlphaNum(char ch){
    if((ch>='a' && ch<='z') || (ch >='0' && ch<='9') ){
        return true;}
    return false;
    }

bool ispalindrome(string str){
    
    int st = 0,end = str.length()-1;
    while(st<end){
        if(!AlphaNum(str[st])){
          st++;
          continue;
        }
        if(!AlphaNum(str[end])){
            end--;
            continue;
        }
           if(str[st]!=str[end]){
        return false;
    }
    st++,end--;
    return true;
    }
   
}

int main(){
    cout<<ispalindrome("#27bsue")<<endl;
}


