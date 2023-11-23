#include <iostream>
using namespace std;

struct node {
    int key;
    struct node *left, *right;
};

struct node* newNode(int item)
{
    struct node* temp = new struct node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    return node;
}

struct node* search(struct node* root, int key)
{
    if (root == NULL || root->key == key)
        return root;

    if (root->key < key)
        return search(root->right, key);

    return search(root->left, key);
}


int main()
{
    struct node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
    insert(root, 56);

    int ch = 5;

    while(ch!=0)
    {
        cout<<"********Operations on BST********"<<endl;
        cout<<"Search for the Element"<<endl;
        cout<<"Press 0 to exit"<<endl;

        int key;
        cout<<"Enter the Element to be search >> ";
        cin>>key;

        if (search(root, key) == NULL)
            cout <<" False" << endl;
        else
            cout <<" True" << endl;

    }

    return 0;
    }





