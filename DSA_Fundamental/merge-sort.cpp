#include <bits/stdc++.h>
using namespace std;


// Function to merge two sorted subarrays
void mergearr(int arr[], int start, int mid, int end){
    vector<int> temp(end - start + 1);

    int left = start, right = mid + 1, index = 0;

    while(left <= mid && right <= end){
        temp[index++] = arr[left] <= arr[right] ? arr[left++] : arr[right++];
         
        /* 
        if(arr[left] <= arr[right]){
            temp[index++] = arr[left++];
        }else{
            temp[index++] = arr[right++];
        } 
            */
    }
    while(left <= mid){
        temp[index++] = arr[left++];
    }
    while(right <= end){
        temp[index++] = arr[right++];
    }

    // now copy the sorted elements back to the original array
    while(start <= end){
        arr[start] = temp[start++];
    }
}


void mergesort(int arr[], int start, int end){
   int mid = start +(end - start)/2;  

    mergesort(arr, start, mid); // left subarray
    mergesort(arr, mid + 1, end); // right subarray

    mergearr(arr, start, mid, end); // merge the two subarrays
}




int main(){
int arr[] = {12, 11, 13, 5, 6, 7};
int start = 0;
int end = sizeof(arr)/sizeof(arr[0]);

// Before sorting
cout << "Given array is \n";
for(int i = 0; i < end; i++){
    cout << arr[i] << " ";
}

mergesort(arr, start, end);
// After sorting
cout<< "\nSorted array is \n";
for(int i = 0; i < end; i++){
    cout << arr[i] << " ";
}
cout << "\n";

    return 0;
}