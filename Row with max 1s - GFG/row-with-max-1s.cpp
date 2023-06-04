//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    int i,j,c=0,max=0,ind;
	    vector<int>l;
	    for(i=0; i<n; i++)
	    {
	        c=0;
	        for(j=0; j<m; j++)
	        {
	            if(1*arr[i][j]==1)
	            {
	                c++;
	                if(max<c)
        	        {
        	            max=c;
        	            ind=i;
        	        }
	            }
	        }
	    }
	    if(max==0)
	    {
	        return -1;
	    }
	    return ind;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends