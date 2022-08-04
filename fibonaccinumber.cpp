/*Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1


Input Format :
Integer N
Output Format :
true or false*/
#include <iostream>
using namespace std;
int f(int e){
    if (e==0){
        return 0;
    }else if (e==1){
        return 1;
    }else{
        return f(e-1)+f(e-2);
    }
}
bool checkMember(int n){
    int i=0;
    int j=0;
    while(n>j){
        j=f(i);
        i++;
    }
    if (j==n){
        return true;
    }else{
        return false;
    }
   
}
int main(){
     int n; 
  cin >> n ;
  if(checkMember(n)){
    cout << "true" << endl;
  }else{
    cout << "false" << endl;
  }
}