#include<bits/stdc++.h>
using namespace std;
//normal recusion
int fibonacci(int n){
    if(n==0) return n;
    if(n==1) return n;
    return fibonacci(n-1)+fibonacci(n-2);
}

//memoization
int f(int n,vector<int>&dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = f(n-1,dp) + f(n-2,dp);
}


//tabulation
int fib(int n,vector<int>&dp){
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[n] = dp[n-1]+dp[n-2];
    }

    return dp[n];
}


//most optimized
int fibo(int n){
    int prev2 = 0;
    int prev1 = 1;
    for(int i=2;i<=n;i++){
        int curr = prev2 + prev1;
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

int main(){
    int n; cin>>n;
    vector<int>dp(n+1,-1);
    cout<<fibonacci(n);
    cout<<f(n,dp);
} 