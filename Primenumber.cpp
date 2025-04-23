class Solution {
    public:
      bool isPrime(int n) {
          // code here
          int count = 0;
          for(int i = 1; i * i <= n; ++i){
              if(n % i == 0){
                  if(i!=n/i){
                      count++;
                  }
                  count++;
                  
              }
          }
          return (count == 2);
      }
  };