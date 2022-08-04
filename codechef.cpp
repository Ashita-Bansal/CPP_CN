#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        int x=(p+q+r)/2;
        if(p+b+c>x || a+c+q>x || a+b+r>x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
