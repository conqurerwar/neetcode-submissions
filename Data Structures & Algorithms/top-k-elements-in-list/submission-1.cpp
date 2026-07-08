class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> temp;

        for(auto it : mp)
        {
            temp.push_back({it.second,it.first});
        }

        sort(temp.rbegin(),temp.rend());

        vector<int> res;
        for(int i=0;i<k;i++)
        {
            res.push_back(temp[i].second);
        }
        return res;
    }
};
