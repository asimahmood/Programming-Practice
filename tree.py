class TreeNode:
	def __init__(self, x):
		self.val = x
		self.left = None
		self.right = None


	def dfs(self):  #pre-order traversal
		print(self.val)

		if self.left:
			self.left.dfs()

		if self.right:
			self.right.dfs()


	def dfs_inorder(self):
		if self.left:
			self.left.dfs_inorder()

		print(self.val)

		if self.right:
			self.right.dfs_inorder()


	def dfs_postorder(self):
		if self.left:
			self.left.dfs_postorder()

		if self.right:
			self.right.dfs_postorder()

		print(self.val)



	def bfs(self):

		to_visit = [ self ]

		while to_visit:
			current = to_visit.pop(0)

			print(current.val)

			if current.left:
				to_visit.append(current.left)

			if current.right:
				to_visit.append(current.right)


	def dfs_apply(self, fn):
		fn(self)

		if self.left:
			self.left.dfs_apply(fn)

		if self.right:
			self.right.dfs_apply(fn)



def print_tree(tree, level = 0, label = '.'):
	print(" " * (level*2) + label + ":", tree.val)
	for child, lbl in zip([tree.left, tree.right], ["L", "R"]):
		if child is not None:
			print_tree(child, level + 1, lbl)


t1 = TreeNode(1)

# t1.left = TreeNode(3)
# t1.right = TreeNode(2)

# print_tree(t1)




class PerformSum:
	def __init__(self):
		self.sum = 0

	def process(self, node):
		self.sum += node.val

	def get_sum(self):
		return self.sum

	def reset_sum(self):
		self.sum = 0


p = PerformSum()


t1 = TreeNode(1)
t1.left = TreeNode(3)
t1.right = TreeNode(2)

p.reset_sum()
t1.dfs_apply(p.process)
print(p.get_sum())










