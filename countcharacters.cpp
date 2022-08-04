/*Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and
white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.
That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.
Print count of characters, count of digits and count of white spaces respectively (separated by space).
Input Format :
A stream of characters terminated by '$'
Output Format :
3 integers i.e. count_of_characters count_of_digits count_of_whitespaces (separated by space)*/
#include <iostream>
using namespace std;

int main(){
    char c;
    
    
    int count_of_characters=0;
    int count_of_digits=0;
    int count_of_whitespaces=0;
    while(c!='$'){
        c=cin.get();
        int a='a';
        int b='z';
        int i='0';
        int j='9';
        if (c>=a && c<=b){
            count_of_characters+=1;
        }else if(c>=i && c<=j){
            count_of_digits+=1;
        }else{
            count_of_whitespaces+=1;
        }
    }
    cout<<count_of_characters<<" "<<count_of_digits<<" "<<count_of_whitespaces-1;
}
