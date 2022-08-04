/*Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format :
N (Total no. of rows)
Output format :
Pattern in N lines*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char b='A'+n-1;
    int i=1;
    while(i<=n){
        int j=1;
        char sc=b-i+1;
        while(j<=i){
            char c=sc+j-1;
            cout<<c;
            j++;
        }
        i++;
        cout<<endl;
    }
}