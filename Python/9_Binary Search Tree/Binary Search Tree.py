class Node:
	def __init__(self, data):
		self.left = None
		self.right = None
		self.data = data

def search(root, data):
	if root is None:
		print("Not found")
	if root.data == data:
		print("Found at: ", hex(id(root)))
		return root
	if root.data < data:
		return search(root.right, data)
	else:
		return search(root.left, data)

def insert(root, node):
	if root is None:
		root = node
	else:
		if root.data < node.data:
			if root.right is None:
				root.right = node
			else:
				insert(root.right, node)
		else:
			if root.left is None:
				root.left = node
			else:
				insert(root.left, node)


root = Node(50)
insert(root, Node(30))
insert(root, Node(20))
insert(root, Node(40))
insert(root, Node(70))
insert(root, Node(60))
insert(root, Node(80))

search(root, 70)