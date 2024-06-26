class Solution:
    def __init__(self):
        self.res = []

    def inorder(self, root):
        if not root:
            return
        self.inorder(root.left)
        self.res.append(root.val)
        self.inorder(root.right)

    def makeBST(self, start, end):
        if start > end:
            return None
        mid = (start + end) // 2
        root = TreeNode(self.res[mid])
        root.left = self.makeBST(start, mid - 1)
        root.right = self.makeBST(mid + 1, end)
        return root

    def balanceBST(self, root):
        self.res = []  # Ensure res is reset for each new call
        self.inorder(root)
        start = 0
        end = len(self.res) - 1
        return self.makeBST(start, end)
