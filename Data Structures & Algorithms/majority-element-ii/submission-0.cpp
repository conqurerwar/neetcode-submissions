class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;

        for(auto it : nums)
        {
            mp[it]++;
        }

        vector<pair<int,int>> store;
        for(auto it : mp)
        {
            if(it.second > n/3)
            store.push_back({it.second,it.first});
        }
        sort(store.rbegin(),store.rend());
        vector<int> ans;

        for(int i=0;i<store.size();i++)
        {
            ans.push_back(store[i].second);
        }
        
        return ans;
    }
};