//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function template for C++
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[]) {
	    // code here
        int n =  sizeof(arr)/sizeof(arr[0]);
	    vector<int> ans; // to store multiple index if exist
        for(int i=0;i<n;i++)
        {
            if(arr[i]==i+1)
            ans.push_back(i+1); // to insert from end of array
        }
        return ans;
 
	}
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(nums);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x : ans) {
                cout << x << " ";
            }
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends