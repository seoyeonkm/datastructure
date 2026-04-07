#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

int main(void)
{
    Node *node1 = (Node *)malloc(sizeof(Node));
    Node *node2 = (Node *)malloc(sizeof(Node));

    node1->data = 10;
    node2->data = 20;

    node1->next = node2;
    node2->next = NULL;

    printf("첫 번째 노드 데이터: %d\n", node1->data);
    printf("두 번째 노드 데이터: %d\n", node1->next->data);

    free(node2);
    free(node1);

    return 0;
}
