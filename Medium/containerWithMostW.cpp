//LC 11
class Solution {
public:
    int maxArea(vector<int>& height) {
        int mw = 0;
        int n = height.size();
        int lp=0,rp=n-1;
        while(lp<rp){
          int w = rp-lp;
          int h = min(height[lp],height[rp]);
          int cw = w*h;
          mw = max(mw,cw);
          if(height[lp]<height[rp]){
            lp++;
          }
          else{
            rp--;
          }
        }          
        return mw;
    }
};