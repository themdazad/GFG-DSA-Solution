//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
        
        int isFound = true;
        
       for(int i = A; i <= B; i++){
           isFound = false; // reset
           for(int j = 0;  j < n; j++){
                if(arr[j] == i){
                    isFound = true;
                    break;
                }
           }
         if(!isFound) return false;
       }
       return isFound;
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, A, B;
        cin >> n >> A >> B;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        Solution ob;
        if (ob.check_elements(a, n, A, B))
            cout << "True";
        else
            cout << "False";

        cout << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends