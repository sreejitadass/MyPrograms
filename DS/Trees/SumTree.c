#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createTree()
{
    int x;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data(-1 for no node): ");
    scanf("%d", &x);
    if (x == -1)
        return 0;
    else
    {
        newnode->data = x;
        printf("Left child of %d: ", x);
        newnode->left = createTree();
        printf("Right child of %d: ", x);
        newnode->right = createTree();

        return newnode;
    }
}

int sum(struct node *root)
{
    if (root == NULL)
        return 0;
    return sum(root->left) + root->data + sum(root->right);
}

int isSumTree(struct node *root)
{
    int leftsum, rightsum;

    leftsum = sum(root->left);
    rightsum = sum(root->right);

    if (root->data == leftsum + rightsum)
        return 1;
    return 0;
}

int main()
{
    struct node *root = NULL;
    root = createTree();

    if (isSumTree(root))
        printf("\nThe tree is a sum tree\n");
    else
        printf("\nThe tree is not a sum tree\n");
    return 0;
}
