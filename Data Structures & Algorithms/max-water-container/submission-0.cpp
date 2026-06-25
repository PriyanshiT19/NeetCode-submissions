class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r = heights.size()-1;
        int maxArea = 0;
        while(l<r){
            int currArr= min(heights[l],heights[r]) * (r-l);
            maxArea = max(maxArea, currArr);

            if(heights[l]<heights[r]){
                l++;
            }
            else r--;
        }
        return maxArea;
    }
};
