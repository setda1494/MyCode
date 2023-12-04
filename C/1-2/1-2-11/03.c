#include <stdio.h>
#include <stdlib.h>

typedef struct bstnode
{
    struct bstnode* left;   // 왼쪽 서브트리를 가리키는 포인터
    int key;                // 노드의 키 값
    float score;            // 노드의 평점 값
    struct bstnode* right;  // 오른쪽 서브트리를 가리키는 포인터
} BSTNODE;

int insert_bst(BSTNODE** root, int id, float score);
void scan_bst(BSTNODE* ptr);
void scan_bst_desc(BSTNODE* ptr);
BSTNODE* delete_bst(BSTNODE* root, int key);
BSTNODE* find_minimum(BSTNODE* node);

int main()
{
    BSTNODE* tree = NULL;  // 이진 탐색 트리의 루트 노드를 가리키는 포인터
    int sid;               // 아이디
    float grade;           // 평균 평점

    printf("트리에 저장할 아이디와 평균 평점을 입력하세요.\n");
    printf("입력을 마치려면 0 0을 입력하세요.\n");

    scanf("%d %f", &sid, &grade);

    while (sid != 0)
    {
        if (!tree)
        {
            // 트리가 비어있는 경우, 새로운 노드를 생성하여 트리의 루트로 지정
            tree = (BSTNODE*)malloc(sizeof(BSTNODE));
            tree->key = sid;
            tree->left = tree->right = NULL;
            tree->score = grade;
        }
        else
        {
            // 트리에 이미 노드가 있는 경우, insert_bst 함수를 호출하여 노드를 삽입
            insert_bst(&tree, sid, grade);
        }
        scanf("%d %f", &sid, &grade);
    }

    printf("노드를 내림차순으로 스캔하여 출력합니다.\n");
    scan_bst_desc(tree);  // 트리의 모든 노드를 내림차순으로 스캔하여 출력

    int deleteKey;
    printf("삭제할 노드의 키 값을 입력하세요: ");
    scanf("%d", &deleteKey);

    tree = delete_bst(tree, deleteKey); // 노드 삭제

    printf("노드를 내림차순으로 스캔하여 출력합니다.\n");
    scan_bst_desc(tree);  // 삭제 후 트리의 모든 노드를 내림차순으로 스캔하여 출력

    return 0;
}

// 이진 탐색 트리에 노드를 삽입하는 함수
int insert_bst(BSTNODE** root, int id, float score)
{
    if (*root == NULL)
    {
        // 트리가 비어있는 경우, 새로운 노드를 생성하여 트리의 루트로 지정
        BSTNODE* newNode = (BSTNODE*)malloc(sizeof(BSTNODE));
        newNode->key = id;
        newNode->left = newNode->right = NULL;
        newNode->score = score;
        *root = newNode;
        return 1;  // 삽입 성공
    }
    else if (id < (*root)->key)
    {
        // 왼쪽 서브트리로 이동하여 재귀적으로 삽입
        return insert_bst(&((*root)->left), id, score);
    }
    else if (id > (*root)->key)
    {
        // 오른쪽 서브트리로 이동하여 재귀적으로 삽입
        return insert_bst(&((*root)->right), id, score);
    }
    else
    {
        // 이미 동일한 키가 있는 경우
        return 0;  // 삽입 실패
    }
}

// 이진 탐색 트리의 노드를 스캔하여 출력하는 함수 (오름차순)
void scan_bst(BSTNODE* ptr)
{
    if (ptr)
    {
        scan_bst(ptr->left);                           // 왼쪽 서브트리 스캔
        printf("%d == %.2f\n", ptr->key, ptr->score);  // 노드의 키와 평점 출력
        scan_bst(ptr->right);                          // 오른쪽 서브트리 스캔
    }
}

// 이진 탐색 트리의 노드를 내림차순으로 스캔하여 출력하는 함수
void scan_bst_desc(BSTNODE* ptr)
{
    if (ptr)
    {
        scan_bst_desc(ptr->right);                          // 오른쪽 서브트리 스캔
        printf("%d == %.2f\n", ptr->key, ptr->score);  // 노드의 키와 평점 출력
        scan_bst_desc(ptr->left);                           // 왼쪽 서브트리 스캔
    }
}

// 이진 탐색 트리에서 노드를 삭제하는 함수
BSTNODE* delete_bst(BSTNODE* root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->key)
        root->left = delete_bst(root->left, key);
    else if (key > root->key)
        root->right = delete_bst(root->right, key);
    else
    {
        // 삭제할 노드의 자식이 없거나 한 개인 경우
        if (root->left == NULL)
        {
            BSTNODE* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            BSTNODE* temp = root->left;
            free(root);
            return temp;
        }

        // 삭제할 노드의 자식이 두 개인 경우
        BSTNODE* temp = find_minimum(root->right); // 오른쪽 서브트리에서 가장 작은 값을 찾음
        root->key = temp->key;
        root->score = temp->score;
        root->right = delete_bst(root->right, temp->key); // 가장 작은 값을 삭제
    }
    return root;
}

// 이진 탐색 트리에서 가장 작은 값을 찾는 함수
BSTNODE* find_minimum(BSTNODE* node)
{
    BSTNODE* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}


