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


//Function to construct the BST from its given level order traversal.
Node* constructBst(int arr[], int n)
{
    int i = 0;
    Node *root = new Node(arr[i++]);
    queue<pair<Node*, pair<int, int>>> q;
    q.push({root, {INT_MIN, INT_MAX}});
    while (!q.empty() && i < n) {
        Node *curr = q.front().first;
        int mn = q.front().second.first;
        int mx = q.front().second.second;
        q.pop();
        if (arr[i] > mn && arr[i] < curr->data) {
            curr->left = new Node(arr[i]);
            q.push({curr->left, {mn, curr->data}});
            i++;
        }
        if (arr[i] > curr->data && arr[i] < mx) {
            curr->right = new Node(arr[i]);
            q.push({curr->right, {curr->data, mx}});
            i++;
        }
    }
    return root;
    // Code here
}
