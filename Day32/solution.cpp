class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int max_len = 0;
        int size = nums.size();
        int count = 0;
        int count_array[2 * size + 1];

        for(int i =0; i < 2 * size + 1; ++i) 
            count_array[i] = -2;
        count_array[size] = -1;

        for(int i = 0; i < size; ++i) {
            if(nums[i] == 0)
                count--;
            else 
                count++;
            
            if(count_array[count + size] != -2) {
                max_len = max(max_len, i - count_array[count + size]);
            } else {
                count_array[count + size] = i;
            }
        }
            
        return max_len;
    }
};
