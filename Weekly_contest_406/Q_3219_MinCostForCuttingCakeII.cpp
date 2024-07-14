//Link:https://leetcode.com/problems/minimum-cost-for-cutting-cake-ii/description/
class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        long long cost=0;
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
