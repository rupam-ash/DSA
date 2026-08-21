// Last updated: 8/21/2026, 4:35:53 PM
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if ( x < 0) return false ; 
5        int original = x ; 
6        long long reverseNo = 0 ;
7        while( x  != 0 ){
8            int lastDigit = x % 10 ; 
9            reverseNo = reverseNo * 10 + lastDigit ; 
10            x  = x / 10 ;
11        }
12        if(original == reverseNo){
13            return true ;
14        }else {
15            return false ; 
16        }
17    }
18};