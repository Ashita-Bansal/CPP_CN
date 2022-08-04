#include <iostream>
using namespace std;
void printarray(int input[],int n){
   // cout<<"function"<<sizeof(input)<<endl;
for(int i=0;i<n;i++){
    cout<<input[i]<<" ";
}cout<<endl;
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;

    int input[100];
    cout<<"enter array elements : ";
    cout<<input<<endl;

    for (int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<"Main"<<sizeof(input)<<endl;
    printarray(input,n);

}