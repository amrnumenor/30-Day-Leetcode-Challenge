class Solution {
    int maxPath = INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
       recursion(root);
        return maxPath;
    }
    
    int recursion(TreeNode* node) {
        if(node == NULL)
            return 0;
        
        int gain_left = max(recursion(node->left), 0);
        int gain_right = max(recursion(node->right), 0);
        
        int curMaxPath = node->val + gain_left + gain_right;
        maxPath = max(maxPath, curMaxPath);
        
        return node->val + max(gain_left, gain_right);
    }
};