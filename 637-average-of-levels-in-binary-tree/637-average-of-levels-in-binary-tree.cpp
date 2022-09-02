/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
    queue<TreeNode *>q;
        vector<double>res;
        q.push(root);
        // q.push(0);
        // queue<int>q2;
        // int level=0;
         while(!q.empty()){
             long temp=0;
             int s=q.size();
             for(int i=0;i<s;i++){
              TreeNode * a=q.front();
              q.pop();
            if(a->left!=NULL){ 
             q.push(a->left);
           }
           if(a->right!=NULL)
          {              
            q.push(a->right);       
          }
        temp+=a->val;
        }
        res.push_back((double)temp/s);    
            
      }
        return res;
        
    }
};