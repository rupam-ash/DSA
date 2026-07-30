// Last updated: 7/30/2026, 12:50:29 PM
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n = nums.size();
5
6        if (n == 1) return 0;
7
8        if (nums[0] > nums[1]) return 0;
9        if (nums[n - 1] > nums[n - 2]) return n - 1;
10
11        int start = 1 ;
12        int end = n - 2 ;
13
14        while(start <= end){
15            
16            int mid = start + (end  - start )/2;
17
18            if(nums[mid] > nums[mid -1] && nums[mid] > nums[mid + 1]){
19                return mid ;
20            }else if (nums[mid] < nums[mid-1]){
21                 end = mid - 1 ;
22            }else{
23                start = mid + 1 ;
24            }
25        }
26    return -1;
27        
28    }
29};