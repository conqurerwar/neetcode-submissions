class Solution {
   public:
    int mySqrt(int x) {
        int l = 1;
        int r = x;
        int ans = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long square = (long long) mid * mid;
            if (square == x) {
                return mid;
            }
            if (square > x) {
                r = mid - 1;
            } else {
                ans = mid;
                l = mid + 1;
            }
        }
        return ans;
    }
};