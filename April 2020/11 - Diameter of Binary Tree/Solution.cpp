class Solution {
    int ans;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        ans = 1; // root node
        height(root);
        return ans - 1;
    }
    int height(TreeNode* node) {
        if(node == NULL) return 0;
        int Left = height(node->left);
        int Right = height(node->right);
        ans = max(ans, Left + Right + 1); // compare diameter
        return max(Left, Right) + 1; // height of a subtree     
    }
};