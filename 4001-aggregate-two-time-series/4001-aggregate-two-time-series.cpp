class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& s, vector<vector<int>>& t) {
        vector<vector<int>> ans;
        int i = 0;
        int j = 0;
        int n = s.size();
        int m = t.size();

        while (i < n && j < m) {
            int sx = s[i][0]; // series s ka timestamp
            int tx = t[j][0]; // series t ka timestamp
            int val = s[i][1] + t[j][1];

            if (sx < tx) {
                ans.push_back({sx, val});
                i++;
            } else if (sx > tx) {
                ans.push_back({tx, val});
                j++;
            } else {
                // both equal
                ans.push_back({sx, val});
                i++;
                j++;
            }
        }

        while (i < n) {
            ans.push_back(s[i]);
            i++;
        }

        while (j < m) {
            ans.push_back(t[j]);
            j++;
        }

        return ans;
    }
};