class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0; int end = nums.size()-1;
        int mid = start + (end - start)/2;

        while(start < end){
            // Compare mid element with end to decide the search space
            if(nums[mid] >= nums[end] ){
                start = mid+1;
            }
            else{
                end = mid;// The minimum is in the right half
            }
            mid = start + (end - start)/2;
        }
        return nums[start];// or nums[end] since start == end
    }
};
