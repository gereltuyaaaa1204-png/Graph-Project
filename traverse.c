#include <stdio.h>

extern int N;
extern int adj[101][101];
extern int visited[101];

void dfs(int u) {
    visited[u] = 1;
    printf("%d ", u);

    for (int v = 1; v <= N; v++) {
        if (adj[u][v] == 1 && !visited[v]) {
            dfs(v);
        }
    }
}

void doDFS() {
    for (int i = 1; i <= N; i++)
        visited[i] = 0;

    printf("DFS: ");
    dfs(1);
    printf("\n");
}
