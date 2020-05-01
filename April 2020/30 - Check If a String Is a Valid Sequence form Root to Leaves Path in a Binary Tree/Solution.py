class Solution:
    def isValidSequence(self, root: TreeNode, arr: List[int]) -> bool:
        n = len(arr)
        def dfs(node, idx):
            if not node or node.val != arr[idx]:
                return False
            if idx == n - 1:
                return not (node.left or node.right)
            return dfs(node.right, idx + 1) or dfs(node.left, idx + 1)
        return dfs(root, 0)