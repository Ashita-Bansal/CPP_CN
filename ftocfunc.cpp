/*Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W),
 you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and Celsius Fahrenheit value.
Fahrenheit value and its corresponding Celsius value should be separate by tab ("\t")*/
#include <iostream>
using namespace std;

void printtable(int start,int end,int step){
    int i =start;
    for(;i<=end;i+=step){
        int c=(5.0/9)*(i-32);
        cout<<i<<"\t"<<c<<endl;
    }
}