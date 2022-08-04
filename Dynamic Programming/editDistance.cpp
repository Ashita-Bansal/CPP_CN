#include <iostream>
#include <string>
using namespace std;

int editDistance_dp(string s,string t){
    int m=s.size();
    int n=t.size();

    int **output=new int *[m+1];
    for(int i=0;i<m+1;i++){
        output[i]=new int[n+1];
    }

    return 0;

}

int editDistance_mem(string s1,string s2,int **output){
    int m=s1.size();
    int n=s2.size();

    if(m==0 || n==0){
        return max(m,n);
    }

    if(output[m][n] != -1){
        return output[m][n];
    }

    int ans;
    if(s1[0]==s2[0]){
        return editDistance_mem(s1.substr(1),s2.substr(1),output);
    }
    
    //delete a char
    int a=editDistance_mem(s1,s2.substr(1),output);
    
    //replace a char
    int b=editDistance_mem(s1.substr(1),s2.substr(1),output);
    
    //insert a char
    int c=editDistance_mem(s1.substr(1),s2,output);
    
    ans=1+ min(a,min(b,c));

    output[m][n]=ans;
    
    return ans;

}

int editDistance_mem(string s,string t){
    int m=s.size();
    int n=t.size();

    int **output=new int*[m+1];
    for(int i=0;i<m+1;i++){
        output[i]=new int[n+1];
        for(int j=0;j<n+1;j++){
            output[i][j]= -1;
        }
    }

    return editDistance_mem(s,t,output);
}

int editDistance(string s1,string s2){
    int m=s1.size();
    int n=s2.size();
    
    if(m==0 || n==0){
        return max(m,n);
    }
    
    if(s1[0]==s2[0]){
        return editDistance(s1.substr(1),s2.substr(1));
    }
    
    //delete a char
    int a=editDistance(s1,s2.substr(1));
    
    //replace a char
    int b=editDistance(s1.substr(1),s2.substr(1));
    
    //insert a char
    int c=editDistance(s1.substr(1),s2);
    
    int ans=1+ min(a,min(b,c));
    
    return ans;
}

int main(){
    string s,t;
    cin>>s>>t;

    cout<<editDistance_mem(s,t);
}