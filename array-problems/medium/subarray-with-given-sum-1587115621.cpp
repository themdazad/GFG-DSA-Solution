// BRUT FORCE APPROACH

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
    int sum = 0;
    int n = arr.size();
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum == target){
            return {i + 1, i + 1}; // Assuming 1-based indexing
        }
        else{
        for(int j = i + 1; j < n; j++){
            sum += arr[j];
            if(sum == target){
            return {i + 1, j + 1}; // Assuming 1-based indexing
            }       
        }
        
        sum = 0;
        }
    }
    return {-1}; // Return -1 if not found
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends