// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<int> leftIndex;
        stack<pair<long long, int>> s;
        
        for(int i=0;i<n;i++){
            if(s.empty()){
                leftIndex.push_back(-1);
            }
            
            else if(!s.empty() && s.top().first<arr[i]){
                leftIndex.push_back(i);
            }
            else if(!s.empty() && s.top().first>=arr[i]){
                while(!s.empty() && s.top().first>arr[i]){
                    s.pop();
                }
                if(s.empty()){
                    leftIndex.push_back(-1);
                }else{
                    leftIndex.push_back(s.top().second);
                }
            }
            
            s.push({arr[i],i});
        }
        
        vector<int> rightIndex;
        stack<pair<long long,int>> sr;
        
        for(int i=n-1;i>=0;i--){
            if(sr.empty()){
                rightIndex.push_back(n);
            }
            else if(!sr.empty() && sr.top().first<arr[i]){
                rightIndex.push_back(i);
            }
            else if(!s.empty() && sr.top().first>=arr[i]){
                while(!sr.empty() && sr.top().first>=arr[i]){
                    sr.pop();
                }
                if(sr.empty()){
                    rightIndex.push_back(n);
                }else{
                    rightIndex.push_back(sr.top().second);
                }
            }
            
            sr.push({arr[i],i});
        }
        
        reverse(rightIndex.begin(),rightIndex.end());
        
        vector<long long> ans;
        for(int i=0;i<n;i++){
            int j=rightIndex[i]-leftIndex[i]-1;
            long long x=arr[i];
            long long y=x*j;
            ans.push_back(y);
        }
        
        long long maxElement=*max_element(ans.begin(),ans.end());
        
        return maxElement;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends