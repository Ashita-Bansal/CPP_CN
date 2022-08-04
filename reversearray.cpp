#include <iostream>
using namespace std;

void printarray(int input[],int n){
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

void reverse(int input[],int n){
    int i=0,j=n-1;
    while(i<j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int a=10;
    int b[10] ={1,2,3,4,5};
    reverse(b,5);
    printarray(b,5);
}


//AN ALTERNATE METHOD
// void printarray(int inputarray[],int sizeofarray){
//     for (int i=sizeofarray-1;i>=0;i--){
//         cout<<inputarray[i]<<" ";
//     }
//     cout<<endl;
// }

// int main(){
//     int n;
//     cin>>n;
//     int b[10];
//     for (int i=0;i<n;i++){
//         cin>>b[i];
//     }
//     printarray(b,n);
// }