#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct tnode *tree_pointer;

struct tnode
{
	tree_pointer left_child;
	int num;
	int score;
	tree_pointer right_child;
};

// 중위 운행(재귀함수로 작성) 
// 7 4 10 8 2 1 5 3 9 6
void inorder1(tree_pointer ptr)
{
    if (ptr)
    {
        inorder1(ptr->left_child);
        printf("%d", ptr->num);
        inorder1(ptr->right_child);
    }
}

void inorder2(tree_pointer ptr)
{
    if (ptr)
    {
        inorder2(ptr->left_child);
        if (ptr->score >= 800)
        {
            printf("%d    %d\n", ptr->num, ptr->score);
        }
        inorder2(ptr->right_child);
    }
}


// 전위 운행
// 1 2 4 7 8 10 3 5  6 9
void preorder(tree_pointer ptr)
{
	if (ptr)
	{
		printf("%d", ptr->num);
		preorder(ptr->left_child);
		preorder(ptr->right_child);
	}
}

// 후위 운행
// 7 10 8 4 2 5 9 6 3 1
void postorder(tree_pointer ptr)
{
	if (ptr)
	{
		postorder(ptr->left_child);
        postorder(ptr->right_child);
        printf("%d",ptr->num);
	}
}

//전위 운헹
//A B D E G H J C F I K
//중위 운행
//D B G E J H A C I F K
//후위 운행
//D G E J H B I K F C A 

tree_pointer makeRootNode(int fnum, int score, tree_pointer L, tree_pointer R)
{
    tree_pointer ptr = (tree_pointer)malloc(sizeof(struct tnode));
    ptr->num = fnum;
    ptr->score = score;
    ptr->left_child = L;
    ptr->right_child = R;
    return ptr; 
}


void main()
{
    tree_pointer n10 = makeRootNode(10, 700, NULL, NULL);
    tree_pointer n9 = makeRootNode(9, 900, NULL, NULL);
    tree_pointer n8 = makeRootNode(8, 910, n10, NULL);
    tree_pointer n7 = makeRootNode(7, 550, NULL, NULL);
    tree_pointer n6 = makeRootNode(6, 500, n9, NULL);
    tree_pointer n5 = makeRootNode(5, 850, NULL, NULL);
    tree_pointer n4 = makeRootNode(4, 950, n7, n8);
    tree_pointer n3 = makeRootNode(3, 600, n5, n6);
    tree_pointer n2 = makeRootNode(2, 750, n4, NULL);
    tree_pointer n1 = makeRootNode(1, 800, n2, n3);

    printf("Inorder1: ");
    inorder1(n1);
    printf("\n");

    printf("Inorder2: ");
    inorder2(n1);
    printf("\n");

    printf("Preorder: ");
    preorder(n1);
    printf("\n");

    printf("Postorder: ");
    postorder(n1);
    printf("\n");

}



//전위 A B D E F G C H I J K
//중위 D B F E G A H J I K C
//후위 D G F E B J J I K H C A