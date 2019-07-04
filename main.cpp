#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>


// https://leetcode.com/problems/search-in-a-binary-search-tree/

#include "../utils/VectorUtils.hpp"
#include "../utils/TreeUtils.hpp"

#include "../utils/PrintUtils.hpp"

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto _no_sync_ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root) return nullptr;
        if (root->val == val)
            return root;
        if (val < root->val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);

    }
};

void test1() {
    vector<int> v1 {4, 2, 7, 1, 3};
    auto t1 = new TreeNode(v1);
    cout << " ? \n" << Solution().searchBST(t1, 2) << endl;
}

void test2() {

}

void test3() {

}