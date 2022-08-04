#include <iostream>
using namespace std;

int main(){
    int *p= new int;
    *p=10;
    cout<<10<<endl;

    double *pd = new double;

    char *c= new char;

    int *pa = new int[50];
    int n;
    cin>>n;

    int *pa2 = new int[n];

    pa2[0] = 10;
}