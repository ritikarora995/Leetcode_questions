// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

void preorderTraversal(Node* root)
{
	if (!root)return;
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right); 
}

Node* constructBst(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        Node *root = constructBst(arr, n);
        preorderTraversal(root);
        cout<<endl;
    }
	return 0; 
}// } Driver Code Ends


//User function Template for C++



Node *getNode(int data)
{
    // Allocate memory
    Node *newNode =
        (Node *)malloc(sizeof(Node));

    // put in the data
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}
//Function to construct the BST from its given level order traversal.
Node *LevelOrder(Node *root, int data)
{
    if (root == NULL)
    {
        root = getNode(data);
        return root;
    }
    if (data <= root->data)
        root->left = LevelOrder(root->left, data);
    else
        root->right = LevelOrder(root->right, data);
    return root;
}

Node *constructBst(int arr[], int n)

{
    if (n == 0)
        return NULL;
    Node *root = NULL;

    for (int i = 0; i < n; i++)
        root = LevelOrder(root, arr[i]);

    return root;
}
