
import java.util.ArrayDeque;
import java.util.Deque;

public class Solution {

    public TreeNode convertBST(TreeNode root) {
        if (root == null) {
            return null;
        }

        Deque<TreeNode> stack = new ArrayDeque<>();
        TreeNode current = root;
        int sum = 0;

        while (!stack.isEmpty()) {
            while (current != null) {
                stack.push(current);
                current = current.right;
            }
            current = stack.pop();
            sum += current.val;
            current.val = sum;
            current = current.left;
        }
        return root;
    }
}

// Class TreeNode is in-built in the solution file on leetcode.com. 
// When running the code on the website, do not include this class.
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
