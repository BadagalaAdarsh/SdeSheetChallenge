int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int> distance(n+1, 1e9);
    distance[src] = 0;
    
    for(int i=0; i<n-1; i++) {
        for(auto e : edges) {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            int W = distance[u] == 1e9 ? 1e9 : w + distance[u];
        
            distance[v] = min(distance[v], W);
        }
    }
    
    return distance[dest];
}
