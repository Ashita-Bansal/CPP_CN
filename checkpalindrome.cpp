#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool help(char input[],int start,int end){
    if (start>=end){
        return true;
    }
    if (input[start]!=input[end]){
        return false;
    }
    bool smallarr=help(input,start+1,end-1);
    return smallarr;
}

bool checkPalindrome(char input[]) {
    int start=0;
    int end= strlen(input)-1;

    return help(input,start,end);

}


int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}