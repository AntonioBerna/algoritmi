class Node
	attr_accessor :left, :right, :data

	def initialize(data)
		@left = nil
		@right = nil
		@data = data
	end
end

def search(root, data)
	if root == nil
		print "Not Found"
	end

	if root.data == data
		print "Found At ", root.object_id
		return root
	end

	if root.data < data
		return search(root.right, data)
	else
		return search(root.left, data)
	end
end

def insert(root, node)
	if root == nil
		root = node
	else
		if root.data < node.data
			if root.right == nil
				root.right = node
			else
				insert(root.right, node)
			end
		else
			if root.left == nil
				root.left = node
			else
				insert(root.left, node)
			end
		end
	end
end

root = Node.new(50)

insert(root, Node.new(30))
insert(root, Node.new(20))
insert(root, Node.new(40))
insert(root, Node.new(10))
insert(root, Node.new(70))
insert(root, Node.new(90))
insert(root, Node.new(60))
insert(root, Node.new(80))

search(root, 90)
