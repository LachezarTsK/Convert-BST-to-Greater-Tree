
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
    int sum = 0;    
public:
    TreeNode* convertBST(TreeNode* root) {
        if (root == nullptr) {
            return nullptr;
        }
        convertBST(root->right);
        sum += root->val;
        root->val = sum;
        convertBST(root->left);
        return root;
    }
};
