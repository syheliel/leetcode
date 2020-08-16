#include <bits/stdc++.h>
#include <vector>
#include "../leetcodeUtils/utils.cpp"
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);
        int leftVal = 1;
        for(int i=0;i<nums.size();i++){
            leftVal *= nums[i];
            if(i+1 < nums.size()){
            result[i+1] *= leftVal;
            }
        }
        int rightVal = 1;
        for(int i=nums.size()-1;i>=0;i--){
            rightVal *= nums[i];
            if(i-1 >= 0){
            result[i-1] *= rightVal;
            }
        }
        return result;
    }
};

int main(){
    vector<int> input{1,2,3,4};
    Solution solution;
    print(solution.productExceptSelf(input));

}