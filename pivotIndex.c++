class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        // Calculate the total sum of all elements
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }

        int leftsum = 0; // Initialize left sum to 0
        // Iterate through the array to find the pivot index
        for (int i = 0; i < n; i++) {
            int rightsum = sum - leftsum - nums[i]; // Calculate right sum

            // If left sum equals right sum, return the current index
            if (leftsum == rightsum) 
                return i;

            // Update left sum by adding the current element
            leftsum += nums[i];
        }

        // Return -1 if no pivot index is found
        return -1;
    }
};
