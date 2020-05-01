class Solution {
    int max_sum = Integer.MIN_VALUE;
    public int maxPathSum(TreeNode root) {
        max_gain(root);
        return max_sum;
    }
    
    int max_gain(TreeNode node) {
        if(node == null)
            return 0;
        
        int leftGain = Math.max(max_gain(node.left), 0);
        int rightGain = Math.max(max_gain(node.right), 0);
        max_sum = Math.max(max_sum, node.val + leftGain + rightGain);
        
        return node.val + Math.max(leftGain, rightGain);
    }
}