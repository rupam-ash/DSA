// Last updated: 8/21/2026, 4:28:38 PM
1class Solution {
2public:
3    int reverse(int x) {
4        long long  finalNo = 0 ; 
5        while( x  != 0 ){
6            int lastDigit  = x % 10 ; 
7            finalNo = finalNo * 10 + lastDigit ;
8             x  = x / 10 ;
9        }
10        if ( finalNo > INT_MAX || finalNo < INT_MIN) return 0 ;
11        return finalNo ; 
12    }
13};