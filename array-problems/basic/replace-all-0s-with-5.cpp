#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      int convertFive(int n) {
          // Your code here
          int digit = 0, nNum = 0;
          while(n){
              
              digit = n % 10; // extract last digit then
              n =  n / 10; // remove last digit
              
              if(digit == 0){
                  digit = 5;
                  
                  // constructing a new number 
                  nNum = nNum * 10 + digit; // in reverse order
              }
          }
          return rNum(nNum);
      }
      int rNum(int x){
          int num = 0, digit = 0 ;
          while(x){
              digit = x % 10;
              x = x/10;
              num = num*10 + digit;
          }
          return num;
      }
  };
  


int main(){

        int n = 1002;

        Solution s1 ;

        s1.convertFive(n);
        

    return 0;
}