class Solution {
    public boolean isValidSequence(TreeNode root, int[] arr) {
        return dfs(root, arr, 0);
    }
    
    private boolean dfs(TreeNode node, int[] arr, int idx) {
        if(node == null || node.val != arr[idx])
            return false;
        if(idx == arr.length - 1)
            return node.left == null && node.right == null;
        return dfs(node.right, arr, idx + 1) || dfs(node.left, arr, idx + 1);
    }
}