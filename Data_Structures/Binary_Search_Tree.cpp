#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};

struct node* root = NULL, *temp, *min, *max;

void inorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

void preorder(struct node* root)
{
    if (root != NULL) {
        printf("%d \n", root->key);
        inorder(root->left);
        inorder(root->right);
    }
}

void postorder(struct node* root)
{
    if (root != NULL) {
        inorder(root->left);
        inorder(root->right);
        printf("%d \n", root->key);
    }
}


struct node* find_minimum(struct node *x)
{
    while(x->left!=NULL)
        x=x->left;
    return x;
}

struct node* find_maximum(struct node *x)
{
    while(x->right!=NULL)
        x=x->right;
    return x;
}

struct node* insert(struct node *x, int z)
{
    temp = (struct node*)malloc(sizeof(struct node));
    temp->key = z;
    temp->left = temp->right = NULL;
    struct node *y=NULL;
    while(x!=NULL)
    {
        y=x;
        if(z < x->key)
            x=x->left;
        else x=x->right;
    }
    if(y==NULL)
        root=temp;
    else if(z<y->key)
        y->left=temp;
    else
        y->right=temp;
}

void search(struct node *x, int z)
{
    while(x!=NULL && z!=x->key)
    {
        if(z<x->key)
            x = x->left;
        else
            x = x->right;
    }
    if(x!=NULL)
        printf("%d exists in BST",z);
    else
        printf("\n Element does not exists in tree");
}

struct node* deletion(struct node *root, int x)
{
    if(root==NULL)
        return NULL;
    if (x>root->key)
        root->right = deletion(root->right, x);
    else if(x<root->key)
        root->left = deletion(root->left, x);
    else
    {
        //No Children
        if(root->left==NULL && root->right==NULL)
        {
            free(root);
            return NULL;
        }

            //One Child
        else if(root->left==NULL || root->right==NULL)
        {
            struct node *temp;
            if(root->left==NULL)
                temp = root->right;
            else
                temp = root->left;
            free(root);
            return temp;
        }

            //Two Children
        else
        {
            struct node *temp = find_minimum(root->right);
            root->key = temp->key;
            root->right = deletion(root->right, temp->key);
        }
    }
    return root;
}

int main()
{
    int ch, val;
    while(ch!=0)
    {
        printf("\n BST Operations");
        printf("\n 1. Insertion");
        printf("\n 2. Inorder");
        printf("\n 3. Minimum");
        printf("\n 4. Searching");
        printf("\n 5. Deletion");
        printf("\n 6. Preorder");
        printf("\n 7. PostOrder");
        printf("\n 8. Maximum");


        printf("\n 0. Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\n Enter the value of a node to insert");
                scanf("%d",&val);
                insert(root,val);
                break;
            case 2: inorder(root);
                break;
            case 3: min = find_minimum(root);
                printf("\n Minimum element is %d", min->key);
                break;
            case 4: printf("\n Enter the element to search");
                scanf("%d",&val);
                search(root,val);
                break;
            case 5: printf("\n Enter the element to delete");
                scanf("%d",&val);
                deletion(root,val);
                break;
            case 6:
                preorder(root);
                break;
            case 7:
                postorder(root);
                break;
            case 8:
                max = find_maximum(root);
                printf("\n Minimum element is %d", max->key);
                break;

            default: printf("\n Wrong choice entered");
        }
    }
    return 0;
}