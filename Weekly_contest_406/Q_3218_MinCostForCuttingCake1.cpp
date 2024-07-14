/*Link: https://leetcode.com/problems/minimum-cost-for-cutting-cake-i/description/
greedy approach
Example 1:

Input: m = 2, n = 2, horizontalCut = [7], verticalCut = [4]

Output: 15

Explanation:

Perform a cut on the horizontal line 0 with cost 7.
Perform a cut on the vertical line 0 on 1 x 2 subgrid with cost 4.
Perform a cut on the vertical line 0 on 1 x 2 subgrid with cost 4.
The total cost is 7 + 4 + 4 = 15.*/

class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        int cost=0;
        int hPieces=1;
        int vPieces=1;
        sort(horizontalCut.begin(), horizontalCut.end(), greater<int>());
        sort(verticalCut.begin(), verticalCut.end(), greater<int>());
        int i=0;
        int j=0;
        while(i<(m-1) && j<(n-1)){
            if(horizontalCut[i]>=verticalCut[j]){
                cost+=horizontalCut[i]*vPieces;
                hPieces++;
                i++;
            }
            else{
                cost+=verticalCut[j]*hPieces;
                vPieces++;
                j++;
            }
        }
        while(i<(m-1)){
            cost+=horizontalCut[i] * vPieces;
                i++;
        }
        while(j<(n-1)){
            cost+=verticalCut[j] * hPieces;
                j++;
        }
        return cost;
    }

};
