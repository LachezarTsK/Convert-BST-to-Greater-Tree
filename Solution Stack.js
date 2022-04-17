
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
    if (root === null) {
        return null;
    }

    const stack = [];
    let current = root;
    let sum = 0;

    while (stack.length !== 0 || current !== null) {
        while (current !== null) {
            stack.push(current);
            current = current.right;
        }
        current = stack.pop();
        sum += current.val;
        current.val = sum;
        current = current.left;
    }
    return root;
};
