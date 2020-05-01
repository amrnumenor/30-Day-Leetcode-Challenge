class Solution(object):
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.ans = 1
        def depth(node):
            if node is None:
                return 0
            r = depth(node.right)
            l = depth(node.left)
            self.ans = max(self.ans, l + r + 1) # compare diameter of subtree/tree
            return max(l, r) + 1 # compare height of subtree/tree
        depth(root)
        return self.ans - 1