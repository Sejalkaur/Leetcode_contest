/*Link: https://leetcode.com/contest/weekly-contest-406/problems/lexicographically-smallest-string-after-a-swap/description/
Example 1:

Input: s = "45320"

Output: "43520"

Explanation:

s[1] == '5' and s[2] == '3' both have the same parity, and swapping them results in the lexicographically smallest string.*/

class Solution {
public:
    string getSmallestString(string s) {
        int n=s.length();
        for(int i=1;i<n;i++){
            if((s[i]%2==s[i-1]%2) && s[i]<s[i-1]){
                swap(s[i], s[i-1]);
                break;
            }
        }
        return s;
    }
};
