class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string merged = "";
        if(n<m)
        {
            for(int i=0;i<n;i++)
            {
                merged += word1[i];
                merged += word2[i];
            }
            for(int i=n;i<m;i++)
            {
                merged += word2[i];
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
                merged += word1[i];
                merged += word2[i];
            }
            for(int i=m;i<n;i++)
            {
                merged += word1[i];
            }
        }
        return merged;
    }
};