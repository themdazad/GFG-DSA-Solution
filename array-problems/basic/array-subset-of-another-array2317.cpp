//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
       unordered_map<int,int> hash;
       
       for(int i = 0; i<a.size(); i++){
           hash[a[i]]++; // count frequency of elements present in a
       }
       
       for(int i = 0; i<b.size(); i++){
           if(hash.find(b[i]) != hash.end() && hash[b[i]] > 0){
               hash[b[i]]--;
           }
           else
           {
               return false;
           }
       }
     return true;
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a1, a2;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a1.push_back(number);
        }
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            a2.push_back(number);
        }
        Solution s;
        bool ans = s.isSubset(a1, a2);
        if (ans) {
            cout << "true"
                 << "\n";
        } else {
            cout << "false"
                 << "\n";
        }
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends