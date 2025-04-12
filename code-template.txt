//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int peakElement(vector<int> &arr)
    {
        // Your code here
        int n = arr.size();
        int s = 0;
        int e = n - 1;
        while (s < e)
        {
            int mid = (s + e) >> 1;
            if (arr[mid] > arr[mid + 1])
            {
                e = mid;
            }
            else
            {
                s = mid + 1;
            }
        }
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
   
        vector<int> a = {1, 2, 4, 5, 7, 8, 3};
        Solution s1;
        bool result = s1.peakElement(a);

        if(result) cout<<"TRUE";
        else cout<<"FALSE";
        
    return 0;
}

// } Driver Code Ends