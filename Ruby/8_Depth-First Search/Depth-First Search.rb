def dfs(graph, vertex, path = [])
	path.push(vertex)
	graph[vertex].each do |neighbor|
		unless path.include? neighbor
			path = dfs(graph, neighbor, path)
		end
	end
	return path
end

my_graph = {
	1 => [2, 3],
	2 => [4, 5],
	3 => [5], 4 => [6],
	5 => [6], 6 => [7],
	7 => []
}

print dfs(my_graph, 1)