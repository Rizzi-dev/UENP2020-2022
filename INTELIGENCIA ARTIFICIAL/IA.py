from queue import Queue

graph = { 
    'Oradea': ['Zerind', 'Sibiu'],
    'Zerind': ['Arad', 'Oradea'],
    'Arad': ['Zerind', 'Sibiu', 'Timisoara'],
    'Sibiu': ["Oradea", "Fagaras", "Arad", "Rimnicu_Vilcea"],
    'Fagaras': ["Sibiu", "Bucharest"],
    'Timisoara': ["Arad", "Lugoj"],
    'Rimnicu_Vilcea': ["Sibiu", "Craiova", "Pitesti"],
    'Lugoj': ["Timisoara", "Mehadia"],
    'Pitesti':["Rimnicu_Vilcea", "Bucharest", "Craiova"],
    'Mehadia':["Lugoj", "Dobreta"],
    'Dobreta':["Mehadia", "Craiova"],
    'Craiova':["Dobreta", "Rimnicu_Vilcea", "Pitesti"],
    'Bucharest':["Pitesti", "Fagaras", "Giurgiu", "Urziceni"],
    'Giurgiu':["Bucharest"],
    'Urziceni':["Bucharest", "Hirsova", "Vaslui"],
    'Hirsova':["Urziceni", "Eforie"],
    'Eforie':["Hirsova"],
    'Vaslui':["Urziceni", "Lasi"],
    'Lasi':["Vaslui", "Neamt"],
    'Neamt':["Lasi"]
}

#Variáveis
queue = Queue()
current = {}
next = {}
exit = []
visited = {}


#Setando todos como não visitados
for n1 in graph.keys():
    visited[n1] = False
    next[n1] = None
    current[n1] = -1


#Definindo a variável inicial  
i = 'Mehadia'
visited[i] = True
current[i] = 0
queue.put(i)


#Definindo a variável final         
f = 'Bucharest'
route = []


while not queue.empty():
   u = queue.get()
   exit.append(u)
   

#Percorrendo a lista até o destino
   for f in graph[u]:
       if not visited[f]:
           visited[f] = True
           next[f] = u
           current[f] = current[f] + 1
           queue.put(f)
while f is not None:
    route.append(f)
    f = next[f]

    
#Revertendo a rota, mostrando o caminho de volta
route.reverse()

print (route)