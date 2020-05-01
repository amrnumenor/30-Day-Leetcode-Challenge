class Solution {
public:
    bool isValidSequence(TreeNode* root, vector<int>& arr, int idx = 0) {
        // check if node is null and there are still elements left
        if(!root and idx < arr.size())
            return false;
        
        //check if the node is leave or not when reach the last element
        if(idx == arr.size() - 1)
            return root->val == arr[idx] and root->left == NULL and root->right == NULL;
        
        return root->val == arr[idx] and (isValidSequence(root->left, arr, idx + 1) or
                                          isValidSequence(root->right, arr, idx + 1));
    }
};