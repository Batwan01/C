#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int employee;
    struct Node* next;
} Node;

typedef struct Graph {
    int numVertices;
    Node** adjLists;
    int* inDegree;
} Graph;

Graph* createGraph(int numVertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numVertices = numVertices;
    graph->adjLists = (Node**)malloc((numVertices + 1) * sizeof(Node*));
    graph->inDegree = (int*)malloc((numVertices + 1) * sizeof(int));

    for (int i = 0; i <= numVertices; i++) {
        graph->adjLists[i] = NULL;
        graph->inDegree[i] = 0;
    }

    return graph;
}

void addEdge(Graph* graph, int src, int dest) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->employee = dest;
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    graph->inDegree[dest]++;
}

void findMaxEmployeesToFire(Graph* graph, int numVertices) {
    int* order = (int*)malloc((numVertices) * sizeof(int));
    int total_time = 0;
    int max_employees_to_fire = 0;
    int* inDegree = graph->inDegree;

    // Find the lowest-level employees
    int* lowest_level = (int*)malloc((numVertices) * sizeof(int));
    int front = 0;
    int rear = 0;
    for (int i = 1; i <= numVertices; i++) {
        if (inDegree[i] == 0) {
            lowest_level[rear++] = i;
            order[total_time++] = i;
        }
    }

    // Perform topological sorting
    while (front < rear) {
        int employee = lowest_level[front++];
        Node* temp = graph->adjLists[employee];
        while (temp != NULL) {
            int subordinate = temp->employee;
            inDegree[subordinate]--;
            if (inDegree[subordinate] == 0) {
                lowest_level[rear++] = subordinate;
                order[total_time++] = subordinate;
            }
            temp = temp->next;
        }
    }

    // Find the maximum number of employees to fire
    for (int i = total_time - 1; i >= 0; i--) {
        int employee = order[i];
        order[i] = 0;
        inDegree[employee]--;

        // Calculate the new total time
        int new_total_time = total_time - 1;
        for (int j = 1; j <= numVertices; j++) {
            if (order[j] != 0 && inDegree[j] == 0) {
                new_total_time++;
            }
        }

        if (new_total_time <= total_time) {
            max_employees_to_fire = (total_time - new_total_time) > max_employees_to_fire ? (total_time - new_total_time) : max_employees_to_fire;
        }
        else {
            break;
        }
    }

    printf("%d\n", total_time);
    printf("%d\n", max_employees_to_fire);

    free(order);
    free(lowest_level);
}

void freeGraph(Graph* graph) {
    for (int i = 0; i <= graph->numVertices; i++) {
        Node* temp = graph->adjLists[i];
        while (temp != NULL) {
            Node* prev = temp;
            temp = temp->next;
            free(prev);
        }
    }
    free(graph->adjLists);
    free(graph->inDegree);
    free(graph);
}

int main() {
    int N;
    scanf("%d", &N);

    Graph* graph = createGraph(N);

    for (int i = 1; i <= N; i++) {
        int supervisor;
        scanf("%d", &supervisor);
        addEdge(graph, supervisor, i);
    }

    findMaxEmployeesToFire(graph, N);

    freeGraph(graph);

    return 0;
}
