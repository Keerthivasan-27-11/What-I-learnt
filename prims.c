#include <stdio.h>
#define INF 9999999
#define MAX 50
int main() {
 int V;
 printf("Enter number of vertices: ");
 scanf("%d", &V);
 int G[MAX][MAX];
 printf("Enter the adjacency matrix (use 0 if no edge):\n");
 for (int i = 0; i < V; i++) {
 for (int j = 0; j < V; j++) {
 scanf("%d", &G[i][j]);
 }
 }
 int selected[MAX] = {0};
 selected[0] = 1; // Start from vertex 0
 int edgeCount = 0, x, y;
 printf("Edge : Weight\n");
 while (edgeCount < V - 1) {
 int min = INF;
 x = 0;
 y = 0;
 for (int i = 0; i < V; i++) {
 if (selected[i]) {
 for (int j = 0; j < V; j++) {
 if (!selected[j] && G[i][j]) {
 if (G[i][j] < min) {
 min = G[i][j];
 x = i;
 y = j;
 }
 }
 }
 }
 }
 printf("%d - %d : %d\n", x, y, G[x][y]);
 selected[y] = 1;
 edgeCount++;
 }
 return 0;
}
O