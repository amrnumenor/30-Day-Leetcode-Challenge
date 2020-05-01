class Solution:
    def bstFromPreorder(self, preorder: List[int]) -> TreeNode:
        if not preorder:
            return None;
        
        node = TreeNode(preorder[0])
        i = 1
        while i < len(preorder) and preorder[i] < node.val:
            i += 1
            
        node.left = self.bstFromPreorder(preorder[1:i])
        node.right = self.bstFromPreorder(preorder[i:])
        
        return node