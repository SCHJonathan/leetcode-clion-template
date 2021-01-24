#include "solution.h"

vector<int> Solution::sampleCode(vector<int>& nums, int k) {
    vector<int> result;
    stack<pair<int, int>> trash;
    deque<pair<int, int>> monotonic;

    for (int i = 0; i < nums.size(); i++) {
        while (monotonic.size() && nums[i] < monotonic.back().first) {
            trash.push(monotonic.back());
            monotonic.pop_back();
        }
        monotonic.push_back({nums[i], i});
    }

    DEBUG(monotonic)

    while (!monotonic.empty()) {
        result.push_back(monotonic.front().first);
        monotonic.pop_back();
    }

    return result;
}
