class TreeNode<T> {
    var data: T
    var leftNode: TreeNode?
    var rightNode: TreeNode?
    
    init(data: T, leftNode: TreeNode? = nil, rightNode: TreeNode? = nil) {
        self.data = data
        self.leftNode = leftNode
        self.rightNode = rightNode
    }
}

class BinarySearchTree<T: Comparable & CustomStringConvertible> {
    
    private var rootNode: TreeNode<T>?
    
    func insert(element: T) {
        let node = TreeNode(data: element)
        if let rootNode = self.rootNode {
            self.insert(rootNode, node)
        } else {
            self.rootNode = node
        }
    }

    private func insert(_ rootNode: TreeNode<T>, _ node: TreeNode<T>) {
        if rootNode.data > node.data {
            if let leftNode = rootNode.leftNode {
                self.insert(leftNode, node)
            } else {
                rootNode.leftNode = node
            }
        } else {
            if let rightNode = rootNode.rightNode {
                self.insert(rightNode, node)
            } else {
                rootNode.rightNode = node
            }
        }
    }
}

extension BinarySearchTree {
    
    func search(element: T) {
        self.search(self.rootNode, element)
    }
    
    private func search(_ rootNode: TreeNode<T>?, _ element: T) {
        
        guard let rootNode = rootNode else {
            print("INVALID NODE : \(element)")
            return
        }
        
        // print("ROOT NODE \(rootNode.data)")
        if element > rootNode.data {
            self.search(rootNode.rightNode, element)
        } else if element < rootNode.data {
            self.search(rootNode.leftNode, element)
        } else {
           print("NODE FOUND : \(rootNode.data)")
        }
    }
}

let tree = BinarySearchTree<String>()

tree.insert(element: "F")
tree.insert(element: "G")
tree.insert(element: "H")
tree.insert(element: "D")
tree.insert(element: "E")
tree.insert(element: "I")
tree.insert(element: "J")
tree.insert(element: "A")
tree.insert(element: "B")
tree.insert(element: "C")

tree.search(element: "E")
tree.search(element: "N")