class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& a) {
        
        int n = a.size();
        vector<int> res(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(a[i]>a[j])
                    res[i]++;
            }
        }
        
        return res;
    }
};

