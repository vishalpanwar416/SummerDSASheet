
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                index=i-1;
                break;
            }
        }
        //finding the break point 
        // now stored in index

        if(index==-1){
            sort(nums.begin(),nums.end());
            return ;
        }
        // if no break point we sort the array and return
        // else
        for(int i=nums.size()-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }
        //swaping the min element which is greater than break point 
        // and now sorting the remaining elements to get the next permutation
        sort(nums.begin()+index+1,nums.end());
    }
};