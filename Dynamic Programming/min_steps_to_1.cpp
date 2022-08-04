#include <iostream>
using namespace std;

int countMinStepsToOne(int n){
    if(n==1){
        return 0;
    }
    if(n%2==0){
        int a=countMinStepsToOne(n/2);
    }
    if(n%3==0){
        int b=countMinStepsToOne(n/3);
    }
    int c= countMinStepsToOne(n-1);

    int d=min(a,min(b,c))+1;
    return d;
}

int helper(int n,int * ans){
    if(n==1){
        return 0;
    }
    if(ans[n]!=-1){
        return ans[n];
    }
    //calculation
    int a=INT_MAX;
    int b=INT_MAX;
    int c=helper(n-1,ans);
    if(n%2==0){
        a=helper(n/2,ans);
    }
    if(n%3==0){
        b=helper(n/3,ans);
    }
    

    int d=min(a,min(b,c))+1;
    ans[n]=d;
    return ans[n];
}

int countStepsToOne(int n){
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return helper(n,ans);
}


//using dp