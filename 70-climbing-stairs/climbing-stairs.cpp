class Solution {
public:
    int climbStairs(int n) {
        if (n == 1) {
            return 1;
        }
        int last= 1, st = 1;
        for (int i = 2; i <= n; i++) {
            int temp = st;
            st = last + st;
            last = temp;
        }
        return st;
    }
};
 
//  int climbHelper(int n,vector<int>&memo)
//  {
//     if(n==1)
//     return 1;
//     if(n==2)
//     return 2;

//     if(memo[n]!=-1)
//     return memo[n];

//     memo[n]=climbHelper(n-1,memo)+climbHelper(n-2,memo);

//     return 
//  }