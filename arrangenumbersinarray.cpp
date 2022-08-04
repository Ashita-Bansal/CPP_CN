/*You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,.......4,2.
Note:
You need not print the array. You only need to populate it.
Input Format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
The first and the only line of each test case or query contains an integer 'N'.
Output Format :
For each test case, print the elements of the arra/listy separated by a single space.
Output for every test case will be printed in a separate line.*/
#include <iostream>
using namespace std;

void arrange(int *arr,int n){
    int i=0;
    int j=1;
    for(;j<=n;i++,j+=2){
        arr[i]=j;
    }
    int g=n;
    if (n%2!=0){
        g=n-1;
    }
    for(;g>=2;i++){
        arr[i]=g;
        g-=2;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}