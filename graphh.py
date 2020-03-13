class WeightedDiGraph:
    def __init__(self):
        self.g = {}

    def add_node(self, node):
        if node in self.g:
            raise ValueError("Node already in graph")

        self.g[node] = []

    def add_edge(self, src, dest, dist, time):
        if src not in self.g:
            raise ValueError("Source node not in graph")
        if dest not in self.g:
            raise ValueError("Destination node not in graph")

        nexts = self.g[src]
        if dest in nexts:
            return

        nexts.append((dest, dist, time))

    def traverse_graph(self, start):

        q = [start]
        visited = []

        while q:
            current = q.pop(0)

            if current in visited:
                continue

            print(current)

            visited.append(current)

            next_nodes = self.g[current]

            for n in next_nodes:
                q.append(n[0])

    def find_shortest_dijkstra(self, src, dest):
        to_visit = list( self.g.keys() )

        # print("To visit: " + str(to_visit))

        inf = float('inf')
        dists = { node: inf for node in to_visit }
        dists[src] = 0
        # print("All distances" + str(dists))


        best_paths = {}
        best_paths[(src, src)] = [src]

        while to_visit:
            # print('--')

            current = min(to_visit, key=lambda node: dists[node])
            # print("Current: " + current)

            if dists[current] == inf:
                break

            nexts = self.g[current]
            unvisited_neighbors = []
            for n in nexts:
                if n[0] in to_visit:
                    unvisited_neighbors.append(n)

            # print("Unvisited neighbors of " + current + ": " + str(unvisited_neighbors))

            for n in unvisited_neighbors:
                label = n[0]
                dist_to = n[1]
                time_to = n[2]

                old_distance = dists[label]
                new_distance = dists[current] + dist_to

                if new_distance < old_distance:
                    # print("\nFound new best path ...")
                    dists[label] = new_distance


                    path_to_current = best_paths[(src, current)][:]
                    best_paths[(src, label)] = path_to_current
                    best_paths[(src, label)].append(label)
                    # print("Previous best path to current: ", best_paths[(src, current)])
                    # print("Best path to:", label, ": ", best_paths[(src, label)])


            # print("All distances" + str(dists))

            to_visit.remove(current)

        return best_paths[(src, dest)], dists[dest]


g = WeightedDiGraph()

nodes = ["Islamabad", "Peshawar", "Gujranwala", "Lahore", "Faisalabad", "Multan", "Sukkur", "Hyderabad" ,"Karachi" ,"Bannu" ,"Quetta", "Mianwali"]

for n in nodes:
    g.add_node(n)

edges = [
    ("Islamabad", "Peshawar" ,180 ,140),
    ("Peshawar", "Gujranwala" ,390 ,360),
    ("Gujranwala", "Lahore" ,96 ,130),
    ("Gujranwala", "Faisalabad", 174, 200),
    ("Lahore", "Multan", 345, 260),
    ("Faisalabad", "Multan", 240, 200),
    ("Multan", "Sukkur", 440, 400),
    ("Sukkur", "Hyderabad", 330, 290),
    ("Hyderabad", "Karachi", 162, 160),
    ("Peshawar", "Bannu", 198, 240),
    ("Bannu", "Quetta", 683, 660),
    ("Quetta", "Sukkur", 390, 320),
    ("Peshawar", "Mianwali", 240, 290),
    ("Mianwali", "Multan", 299, 320),
    ("Islamabad", "Gujranwala", 220, 230),
    ("Islamabad", "Lahore", 375, 260),
]

for e in edges:
    g.add_edge(e[0], e[1], e[2], e[3])

print(g.find_shortest_dijkstra("Peshawar", "Karachi"))
