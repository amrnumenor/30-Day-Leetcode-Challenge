class Solution {
public:
    TreeNode *bstFromPreorder(vector<int> &preorder, int parent_value = INT_MAX) {
        return Helper(preorder, 0, preorder.size() - 1);
    }
private:
    TreeNode *Helper(vector<int> &preorder, int start, int end) {
        if(start > end)
            return NULL;
        
        TreeNode *node = new TreeNode(preorder[start]);
        int i = start;
        while(i <= end) {
            if(preorder[i] > node->val)
                break;
            ++i;
        }
        
        node->left = Helper(preorder, start + 1, i - 1);
        node->right = Helper(preorder, i, end);
        return node;
    }
};