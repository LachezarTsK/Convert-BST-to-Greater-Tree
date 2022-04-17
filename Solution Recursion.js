
// Function TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this function.
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}

/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var convertBST = function (root) {
    this.sum = 0;
    return  updateNodeValues(root);
};

/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
function updateNodeValues(root) {
    if (root === null) {
        return null;
    }
    updateNodeValues(root.right);
    this.sum += root.val;
    root.val = this.sum;
    updateNodeValues(root.left);
    return root;
}
