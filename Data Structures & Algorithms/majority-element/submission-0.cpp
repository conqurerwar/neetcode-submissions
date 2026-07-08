class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mymap;

        for(int i=0;i<n;i++)
        {
            mymap[nums[i]]++;
        }
        int count = 0;
        int ans = 0;
        for(auto i : mymap)
        {
            if(i.second > count)
            {
                count = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};