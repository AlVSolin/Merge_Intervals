class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> a;
        int k = 0;

        std::ranges::sort(intervals);

        a.push_back(intervals[0]);

        for (int i = 1; i != intervals.size(); ++i) {
            if (intervals[i][0] <= a[k][1]) {
                if (intervals[i][1] > a[k][1]) {a[k][1] = intervals[i][1];}
            }
            else {
                ++k;
                a.push_back(intervals[i]);
            }
        }

        return(a);

    }
};
