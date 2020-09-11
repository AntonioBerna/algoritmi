class Edge {
  	var neighbor: Node

  	public init(neighbor: Node) {
    	self.neighbor = neighbor
  	}
}

class Node {
	var neighbors: [Edge]

 	var label: String
  	var distance: Int?
  	var visited: Bool

	public init(label: String) {
		self.label = label
		neighbors = []
		visited = false
	}

	func remove(_ edge: Edge) {
		neighbors.remove(at: neighbors.firstIndex { $0 === edge }!)
	}
}

class Graph {
	var nodes: [Node]

	public init() {
		self.nodes = []
	}

	func addNode(_ label: String) -> Node {
		let node = Node(label: label)
		nodes.append(node)
		return node
	}

	func addEdge(_ source: Node, neighbor: Node) {
		let edge = Edge(neighbor: neighbor)
		source.neighbors.append(edge)
	}
}

func depthFirstSearch(_ graph: Graph, source: Node) -> [String] {
	var nodesExplored = [source.label]
  	source.visited = true

  	for edge in source.neighbors {
    	if !edge.neighbor.visited {
      		nodesExplored += depthFirstSearch(graph, source: edge.neighbor)
    	}
  	}
  	
	return nodesExplored
}

let graph = Graph()

let nodeA = graph.addNode("a")
let nodeB = graph.addNode("b")
let nodeC = graph.addNode("c")
let nodeD = graph.addNode("d")
let nodeE = graph.addNode("e")
let nodeF = graph.addNode("f")
let nodeG = graph.addNode("g")
let nodeH = graph.addNode("h")

graph.addEdge(nodeA, neighbor: nodeB)
graph.addEdge(nodeA, neighbor: nodeC)
graph.addEdge(nodeB, neighbor: nodeD)
graph.addEdge(nodeB, neighbor: nodeE)
graph.addEdge(nodeC, neighbor: nodeF)
graph.addEdge(nodeC, neighbor: nodeG)
graph.addEdge(nodeE, neighbor: nodeH)
graph.addEdge(nodeE, neighbor: nodeF)
graph.addEdge(nodeF, neighbor: nodeG)

let nodesExplored = depthFirstSearch(graph, source: nodeA)
print(nodesExplored)