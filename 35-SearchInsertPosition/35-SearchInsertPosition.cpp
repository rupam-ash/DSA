// Last updated: 7/26/2026, 8:19:58 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int pos = nums.size();
        int start = 0 , end = nums.size() - 1 , mid;
        while(start <= end){
            mid = start + (end - start)/2;
            if(nums[mid] == target){
                pos = mid;
                break;
            }else if(nums[mid] < target){
                start = mid + 1;
            }else{
                pos = mid ;
                end = mid -1 ;
            }
        }
        return pos;
    }
};