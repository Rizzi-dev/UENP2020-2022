graph = {
    'Oradea' : ['Zerind', 'Sibiu'],
    'Zerind' : ['Oradea', 'Arad'],
    'Arad' : ['Zerind', 'Sibiu', 'Timisoara'],
    'Timisoara' : ['Arad', 'Lugoj'],
    'Lugoj' : ['Timisoara', 'Mehadia'],
    'Mehadia' : ['Lugoj', 'Dobreta'],
    'Dobreta' : ['Mehadia', 'Craiova'],
    'Sibiu' : ['Oradea', 'Arad', 'RimnicuVilcea', 'Fagaras'],
    'Fagaras' : ['Sibiu', 'Bucharest'],
    'RimnicuVilcea' : ['Sibiu', 'Craiova', 'Pitesti'],
    'Craiova' : ['Dobreta', 'RimnicuVilcea', 'Pitesti'],
    'Pitesti' : ['RimnicuVilcea', 'Craiova', 'Bucharest'],
    'Bucharest' : ['Fagaras', 'Pitesti', 'Giurgiu', 'Urziceni'],
    'Giurgiu' : ['Bucharest'],
    'Urziceni' : ['Bucharest', 'Vaslui', 'Hirsova'],
    'Hirsova' : ['Urziceni', 'Eforie'],
    'Eforie' : ['Hirsova'],
    'Vaslui' : ['Urziceni', 'Iasi'],
    'Iasi' : ['Vaslui', 'Neamt'],
    'Neamt' : ['Iasi'],
}
 
visited = set()
 
#Função DFS
def dfs(visited, graph, node, target_node):  
    if node not in visited:
        print(node)
        if node == target_node:
            exit() 
        visited.add(node)
        for neighbour in graph[node]:
            dfs(visited, graph, neighbour, target_node)

 
     
 
print("Algoritmo DeepSearch")
dfs(visited, graph, "Fagaras", "Neamt")

