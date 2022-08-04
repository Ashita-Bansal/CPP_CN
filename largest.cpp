#include <iostream>
#include <climits>
using namespace std;
//print laregest element in the array
int main(){
    int n;
    cin>>n;
    int f[100];
    for(int i=0;i<n;i++){
        cin>>f[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if (f[i]>max){
            max=f[i];
        }
    }
    cout<<max;
}