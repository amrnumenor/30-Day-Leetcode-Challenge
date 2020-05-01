class Solution(object):
    def maxPathSum(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.max = float('-inf')
        def get_max(node):
            if node is None:
                return 0
            left = max(get_max(node.left), 0)
            right = max(get_max(node.right), 0)
            self.max = max(self.max, node.val + left + right)
            return node.val + max(left, right)
        
        get_max(root)
        return self.max