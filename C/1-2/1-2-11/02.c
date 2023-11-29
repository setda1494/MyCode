#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node* left;
    struct Node* right;
};

void inorderTraversal(struct Node* node) {
    if (node == NULL)
        return;
    
    inorderTraversal(node->left);
    printf("%d ", node->key);
    inorderTraversal(node->right);
}

void asort(struct Node* root) {
    inorderTraversal(root);
}

int main() {
    // 이진 트리 구축 예시
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));
    root->key = 4;

    struct Node* node1 = (struct Node*)malloc(sizeof(struct Node));
    node1->key = 2;

    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));
    node2->key = 6;

    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));
    node3->key = 1;

    struct Node* node4 = (struct Node*)malloc(sizeof(struct Node));
    node4->key = 3;

    root->left = node1;
    root->right = node2;
    node1->left = node3;
    node1->right = node4;
    node2->left = NULL;
    node2->right = NULL;
    node3->left = NULL;
    node3->right = NULL;
    node4->left = NULL;
    node4->right = NULL;

    // asort 함수 호출
    asort(root);

    return 0;
}
