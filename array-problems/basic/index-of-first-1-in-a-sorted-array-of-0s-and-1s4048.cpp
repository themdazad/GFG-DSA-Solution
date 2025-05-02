//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int firstIndex(vector<int> &arr) {
        // we can use binary search in sorted array 
        int ans = -1;
        int left = 0, right = arr.size() - 1;
        
        while(left <= right){
        int mid = left + (right - left)/2; // Find mid without overflow
            if(arr[mid] && !arr[mid-1]){
                return mid;
            }
            else if(!arr[mid]){
                left = mid + 1;
            }
            else if(arr[mid]){
                right = mid -1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.firstIndex(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends