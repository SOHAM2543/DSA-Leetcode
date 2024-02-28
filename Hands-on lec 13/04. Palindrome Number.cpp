class Solution {
public:
    bool isPalindrome(int x) {
        long long int ans = 0, num = x, rem;
        while(num) {
            rem = num % 10;
            num /= 10;
            ans = ans * 10 + rem; 
        }
        if( x != ans || x < 0 ) return false;
        else return true;
        
    }
};
