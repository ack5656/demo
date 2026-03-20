#include<iostream>
#include<vector>
using namespace std;

class Stack
{
    public:
        vector<int> st;
        void push(int x)
        {
            st.push_back(x);
        }
    
        void pop()
    {
        
            if(st.empty())
        {
            cout<<"stack underflow"<<endl;
            return;
        }
            st.pop_back();
    }
        int top()
        {
            
            if(st.empty())
            {
                 cout<<"stack is empty"<<endl;
                 return -1;
            }
            return st.back();
             
        }
        
        bool isEmp(){
            
          return  st.empty();
            }
            
        int size(){
            return st.size();
            }
};

int main(){
    
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"before pop"<<endl;
    for(int i=0; i<s.st.size(); i++){
        
        cout<<s.st[i]<<endl;
    }
    s.pop();
   cout<<"the top is:"<< s.top()<<endl;
    cout<<"isEmpty: "<<s.isEmp()<<endl;
    cout<<"the size is:"<<s.size()<<endl;
    cout<<"after pop"<<endl;
    for(int i=0; i<s.st.size(); i++){
        
        cout<<s.st[i]<<endl;
    }
    return 0;
    
}
