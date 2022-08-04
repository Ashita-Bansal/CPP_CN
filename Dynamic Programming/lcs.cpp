#include <iostream>
#include <string>
using namespace std;

int lcs_dp(string s,string t){
    int m=s.size();
    int n=t.size();

    int **output=new int *[m+1];
    for(int i=0;i<m+1;i++){
        output[i] = new int[n+1];
    }

    //initialize the first row
    for(int j=0;j<n+1;j++){
        output[0][j]=0;
    }

    //initialize the first column
    for(int i=0;i<m+1;i++){
        output[i][0]=0;
    }

    //filling the left-over cells,i=row,j=col
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(s[i-1]==t[j-1]){
                output[i][j]=1+output[i-1][j-1];
            }
            else{
                int a=output[i][j-1];
                int b=output[i-1][j];
                output[i][j]=max(a,b);
            }
        }
        
    }

    return output[m][n];
}

int lcs_mem(string s,string t,int **output){

    int m=s.size();
    int n=t.size();
    //base case
    if(s.size()==0 || t.size() == 0){
        return 0;
    }

    if(output[m][n] != -1){
        return output[m][n];
    }
    
    int ans;
    if(s[0]==t[0]){
        ans= 1+lcs_mem(s.substr(1),t.substr(1),output);
    }
    else{
        int a=lcs_mem(s,t.substr(1),output);
        int b=lcs_mem(s.substr(1),t,output);
        int c=lcs_mem(s.substr(1),t.substr(1),output);

        ans= max(a,max(b,c));
    }

    output[m][n]=ans;

    return ans;


}


int lcs_mem(string s,string t){
    int m=s.size();
    int n=t.size();
    int **output=new int*[m];
    for(int i=0;i<m+1;i++){
        output[i]=new int[n+1];
        for(int j=0;j<n+1;j++){
            output[i][j]=-1;
        }
    }

    return lcs_mem(s,t,output);
}

int lcs(string s,string t){
    //base case
    if(s.size()==0 || t.size()==0){
        return 0;
    }

    //recursive step | small calculation
    if(s[0]==t[0]){
        return 1+lcs(s.substr(1),t.substr(1));
    }
    else{
        int a=lcs(s,t.substr(1));
        int b=lcs(s.substr(1),t);
        int c=lcs(s.substr(1),t.substr(1));

        return max(a,max(b,c));
    }
}

int main(){
    string s,t;
    cin>>s>>t;

    cout<<lcs_dp(s,t);
}