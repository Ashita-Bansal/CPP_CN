#include <stack>
bool isBalanced(string str){
    stack<char> s;
    while(!isempty()){
        if(str[i]=='[' or str[i]=='{' or str[i]=='('){
            s.push(str[i]);
        }
        
        if(str[i]==']'){
            if(s.top()=='['){
                s.pop();
            }
            else{
                return false;
            }
        }
        if(str[i]=='}'){
            if(s.top()=='{'){
                s.pop();
            }
            else{
                return false;
            }
        }
        if(str[i]==')'){
            if(s.top()='('){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    return true;
}