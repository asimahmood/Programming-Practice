class TreeNode:
	def __init__(self, x):
		self.val = x
		self.left = None
		self.right = None


class BST(TreeNode):
	def __init__(self, val, parent = None):
		super().__init__(val)
		self.parent = parent


	def insert(self, val):
		if val < self.val:
			if self.left is None:
				new_node = BST(val, parent = self)
				self.left = new_node

			else:
				self.left = insert(val)


		else:
			if self.right is None:
				self.right = BST(val, parent = self)

			else:
				self.right.insert(val)

	def find_root(self):
		temp = self
		while temp.parent is not None:
			temp = temp.parent

		return temp

	def find_min(self):
		min_node = self

		if self.left is not None:
			min_node = find_min(self.left)

		return min_node

	def set_for_parent(self, new_ref):
		if self.parent is None: return
		if self.parent.right == self:
			self.parent.right = new_ref

		if self.parent.left == self:
			self.parent.left == new_ref


	def replace_with_node(self, node):

		self.set_for_parent(node)
		node.parent = self.parent
		self.parent = None
		return node.find_root()

	def delete(self, val):
		if self.parent is None and self.right is None and self.left is Node and self.val == val:
			return None

		if self.val == val:
			if self.right is None and self.left is None:
				self.set_for_parent(None)
				return self.find_root()

			if self.right is None:
				return self.replace_with_node(self.left)

			if self.left is None:
				return self.replace_with_node(self.right)

			successor = self.right.find_min()

			self.val = successor.val

			return self.right.delete(successor.val)

		if val < self.val:
			if self.left is not None:
				return self.left.delete(val)

			else:
				return self.find_root()

			else:
				if self.right is not None:
					return self.right.delete(val)
				else:
					return self.find_root()




b = BST(20)
print(b.val)

b.insert(24)
# print(b.val)
b.insert(10)

	def heap(lst, n, root):
	    largest = root
	    L = 2 * root + 1
	    R = 2 * root + 2
	    if L < n and lst[L] > lst[largest]:
	        largest = L

	    if R < n and lst[R] > lst[largest]:
	        largest = R

	    if largest != root:
	        lst[root], lst[largest] = lst[largest], lst[root]
	        heap(lst,n,largest)


	def build_heap(lst):
	    n = len(lst)
	    for i in reversed(range(n//2)):
	        heap(lst,n,i)


	def heap_sort(lst):
	    n = len(lst)
	    build_heap(lst)
	    for i in reversed(range(n)):
	        lst[i], lst[0] = lst[0], lst[i]
	        heap(lst,i,0)

