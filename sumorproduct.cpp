/*Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the 
sum and computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
Input format :
Line 1 : Integer N
Line 2 : Choice C
Output Format :
 Sum or product according to user's choice*/
 #include <iostream>
 using namespace std;

 int main(){
     int n;
     int c;
     cin>>n>>c;

     if (c==1){
         int x=(n*(n+1))/2;
         cout<<x;
     }else if(c==2){
         int p=1;
         for(int i=1;i<=n;i++){
             p*=i;
         }
         cout<<p;
     }else{
         cout<<-1;
     }
 }