#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ivec;
        int count;
        int tmp;
        for (int i = 0; i <= num; ++i) {
            count = 0;
            tmp = i;
            while (tmp >= 2) {
                count += tmp % 2;
                tmp /= 2;
            }
            count += tmp;
            ivec.push_back(count);
        }
        return ivec;
    }
};

int main() {
    Solution *s = new Solution();
    for (auto i : s->countBits(5)) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}