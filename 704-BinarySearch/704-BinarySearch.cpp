// Last updated: 11/9/2026, 7:15:18 PM
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low = 0 ;
5        int high = nums.size()-1 ;
6        int mid ;
7        int index = -1  ;
8        while(low <= high){
9            mid = low + (high - low) / 2;
10            if(nums[mid] == target){
11                index = mid ;
12            }
13            if(nums[mid] > target){
14                high = mid - 1 ;
15            }else{
16                low = mid + 1 ;
17            }
18        }
19        return index ;
20    }
21};