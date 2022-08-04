#include <iostream>
using namespace std;

int main(){
   int n;
   cin>>n;

   int d=2;
   bool f=false;
   while (d<n){
       if(n%d==0){
           f=true;
           break;
       }
       d++;
   }
   if (f){
       cout<<"Not prime"<<endl;
   }else{
       cout<<"Prime"<<endl;
   }

}