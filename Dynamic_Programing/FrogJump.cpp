#include<bits/stdc++.h>
using namespace std;

class Solution{
    public: 
        static int getMinJump(int n,vector<int>&height){
            if(n==0) return n;
            int lft = getMinJump(n-1,height) + abs(height[n] - height[n-1]);
            int rgt = INT_MAX;
            if(n > 1)
                rgt = getMinJump(n-2,height) + abs(height[n] - height[n-2]);
            
            return min(lft,rgt);
        }
};

int main(){
    vector<int>height = {30,10,60,10};
    int ans = Solution::getMinJump(height.size()-1,height);
    cout<<ans;
}