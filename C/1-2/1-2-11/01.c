#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct bstnode
{
    struct bstnode* left;   // 왼쪽 서브트리를 가리키는 포인터
    int key;                // 노드의 키 값
    float score;            // 노드의 평점 값
    struct bstnode* right;  // 오른쪽 서브트리를 가리키는 포인터
} BSTNODE;

int insert_bst(BSTNODE* root, int id, float score);
void scan_bst(BSTNODE* ptr);

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
            insert_bst(tree, sid, grade);
        }
        scanf("%d %f", &sid, &grade);
    }

    scan_bst(tree);  // 트리의 모든 노드를 스캔하여 출력
    return 0;
}

// 이진 탐색 트리에 노드를 삽입하는 함수
int insert_bst(BSTNODE* root, int id, float score)
{
    if (id < root->key)
    {
        if (root->left == NULL)
        {
            // 왼쪽 서브트리가 비어있는 경우, 새로운 노드를 생성하여 연결
            BSTNODE* newNode = (BSTNODE*)malloc(sizeof(BSTNODE));
            newNode->key = id;
            newNode->left = newNode->right = NULL;
            newNode->score = score;
            root->left = newNode;
            return 1;  // 삽입 성공
        }
        else
        {
            // 왼쪽 서브트리가 비어있지 않은 경우, 왼쪽 서브트리에서 재귀적으로 삽입
            return insert_bst(root->left, id, score);
        }
    }
    else if (id > root->key)
    {
        if (root->right == NULL)
        {
            // 오른쪽 서브트리가 비어있는 경우, 새로운 노드를 생성하여 연결
            BSTNODE* newNode = (BSTNODE*)malloc(sizeof(BSTNODE));
            newNode->key = id;
            newNode->left = newNode->right = NULL;
            newNode->score = score;
            root->right = newNode;
            return 1;  // 삽입 성공
        }
        else
        {
            // 오른쪽 서브트리가 비어있지 않은 경우, 오른쪽 서브트리에서 재귀적으로 삽입
            return insert_bst(root->right, id, score);
        }
    }
    else
    {
        // 이미 동일한 키가 있는 경우
        return 0;  // 삽입 실패
    }
}

// 이진 탐색 트리의 노드를 스캔하여 출력하는 함수
void scan_bst(BSTNODE* ptr)
{
    if (ptr)
    {
        scan_bst(ptr->left);                           // 왼쪽 서브트리 스캔
        printf("%d == %.2f\n", ptr->key, ptr->score);  // 노드의 키와 평점 출력
        scan_bst(ptr->right);                          // 오른쪽 서브트리 스캔
    }
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct bstnode
{
    struct bstnode* left;   // 왼쪽 서브트리를 가리키는 포인터
    int key;                // 노드의 키 값
    float score;            // 노드의 평점 값
    struct bstnode* right;  // 오른쪽 서브트리를 가리키는 포인터
} BSTNODE;

int insert_bst(BSTNODE* root, int id, float score);
void scan_bst(BSTNODE* ptr);

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
            insert_bst(tree, sid, grade);
        }
        scanf("%d %f", &sid, &grade);
    }

    scan_bst(tree);  // 트리의 모든 노드를 스캔하여 출력
    return 0;
}

// 이진 탐색 트리에 노드를 삽입하는 함수
int insert_bst(BSTNODE* root, int id, float score)
{
    if (id < root->key)
    {
        if (root->left == NULL)
        {
            // 왼쪽 서브트리가 비어있는 경우, 새로운 노드를 생성하여 연결
            BSTNODE* newNode = (BSTNODE*)malloc(sizeof(BSTNODE));
            newNode->key = id;
            newNode->left = newNode->right = NULL;
            newNode->score = score;
            root->left = newNode;
            return 1;  // 삽입 성공
        }
        else
        {
            // 왼쪽 서브트리가 비어있지 않은 경우, 왼쪽 서브트리에서 재귀적으로 삽입
            return insert_bst(root->left, id, score);
        }
    }
    else if (id > root->key)
    {
        if (root->right == NULL)
        {
            // 오른쪽 서브트리가 비어있는 경우, 새로운 노드를 생성하여 연결
            BSTNODE* newNode = (BSTNODE*)malloc(sizeof(BSTNODE));
            newNode->key = id;
            newNode->left = newNode->right = NULL;
            newNode->score = score;
            root->right = newNode;
            return 1;  // 삽입 성공
        }
        else
        {
            // 오른쪽 서브트리가 비어있지 않은 경우, 오른쪽 서브트리에서 재귀적으로 삽입
            return insert_bst(root->right, id, score);
        }
    }
    else
    {
        // 이미 동일한 키가 있는 경우
        return 0;  // 삽입 실패
    }
}

// 이진 탐색 트리의 노드를 스캔하여 출력하는 함수
void scan_bst(BSTNODE* ptr)
{
    if (ptr)
    {
        scan_bst(ptr->left);                           // 왼쪽 서브트리 스캔
        printf("%d == %.2f\n", ptr->key, ptr->score);  // 노드의 키와 평점 출력
        scan_bst(ptr->right);                          // 오른쪽 서브트리 스캔
    }
}
