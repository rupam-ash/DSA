// Last updated: 9/3/2026, 12:23:25 AM
1class Solution {
2private:
3    void thingy(string& str , int left , int right){
4        if(left >= right) return ;
5        swap(str[left] , str[right]);
6        thingy(str , left+1 , right -1);
7    }
8public:
9    bool isPalindrome(string s) {
10        string clean = "";
11        for(char c : s){
12            if(isalnum(c)){
13                clean += tolower(c);
14            }
15        }
16        string originalStr = clean ;
17        int n = clean.size()-1 ; 
18        thingy(clean , 0 , n);
19        return originalStr == clean ;
20    }
21};