/*
ABCD
BCDE
CDEF
DEFG*/
#include <iostream>
using namespace std;

// int main(){          //THIS IS ALSO A CORRECT SOLUTION
//     int n;
//     cin>>n;

//     int i=1;
//     while (i<=n){
//         int j=1;
//         int h=i;
//         while (j<=n){
//             char c='A'+h-1;
//             cout<<c;
//             h++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }

// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char sc='A'+i-1;
        while (j<=n){
            char c=sc +j-1;
            cout<<c;
            j++;
        }
        i++;
        cout<<endl;

    }
}

