class Solution {
public:
    int minimumPushes(string word) {
        int p = 0;
        int n = word.size();
        int cost = 1;
        while (n > 0) {
            int take = min(n , 8);
            p += take * cost;
            n = n - 8;
            cost++;
        }
        return p;
    }
};