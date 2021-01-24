#include "solution.h"

int main() {
    int x = 24;
    vector<int> arr = {84,10,71,23,66,61,62,64,34,41,80,25,91,43,4,75,65,13,37,41,46,90,55,8,85,61,95,71};
    auto result = Solution::mostCompetitive(arr, x);
    DEBUG(result)
    return 0;
}
