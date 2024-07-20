/*Link:https://leetcode.com/problems/find-the-winning-player-in-coin-game/
Example 1:

Input: x = 2, y = 7

Output: "Alice"

Explanation:

The game ends in a single turn:

Alice picks 1 coin with a value of 75 and 4 coins with a value of 10.
Example 2:

Input: x = 4, y = 11

Output: "Bob"

Explanation:

The game ends in 2 turns:

Alice picks 1 coin with a value of 75 and 4 coins with a value of 10.
Bob picks 1 coin with a value of 75 and 4 coins with a value of 10.
*/



class Solution {
public:
    string losingPlayer(int x, int y) {
        int round=0;
        while(x>0 && y>3){
        x-=1;
        y-=4;
        round++;
        }
        if(round%2==0){
            return "Bob";
        }return "Alice";
    }
};
