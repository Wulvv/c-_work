class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int v = 0;
        int area = 0;
        while(left<right){
            v = (right-left)*min(height[left],height[right]);
            area = max(v,area);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return area;
    }
};



/* 正确流程应该是：

1 当前 left 和 right 形成一个容器
2 计算面积
3 更新最大值
4 决定移动哪一边
 */


//双指针题正确流程顺序：计算答案，更新结果，移动指针
//而不是先移动，再计算，可能跳过当前组合的结果