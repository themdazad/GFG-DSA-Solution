//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,
                                            long long k) {
                                                
        // code here       
        
        int left =  0; 
        long long count = 0;
        long long product = 1;
        
        for(int right = 0; right < n; right++){
            product *= arr[right];
            
            // if product >= k then remove last element
            while(product >= k && left <= right){
                product /= arr[left++];
            }
            
            count += (right - left + 1);
        }
        
        
        return count;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends