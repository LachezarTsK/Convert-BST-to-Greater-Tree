
#include <stack>
using namespace std;

// Struct TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this struct.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    
public:
    TreeNode* convertBST(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }

        stack<TreeNode*> stack;
        TreeNode* current = root;
        int sum = 0;

        while (!stack.empty() || current != nullptr) {
            while (current != nullptr) {
                stack.push(current);
                current = current->right;
            }
            current = stack.top();
            stack.pop();

            sum += current->val;
            current->val = sum;
            current = current->left;
        }
        return root;
    }
};
