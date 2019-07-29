/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* reConstructBinaryTree(vector<int> pre,vector<int> vin) {
        if(pre.size()<=0||vin.size()<=0)
            return NULL;
        TreeNode *root=new TreeNode(pre[0]);
        for(int i=0;i<vin.size();i++)
        {
            if(pre[0]==vin[i])
            {
                root->left=reConstructBinaryTree(copy(pre,1,i),copy(vin,0,i-1));
                root->right=reConstructBinaryTree(copy(pre,i+1,pre.size()-1,copy(vin,i=1+1,vin.size()-1));
                                                  break;18            }
            }                                       
            return root;
        }
     vector<int> copy(vector<int>array,int begin,int end)
      {
        vector<int> tmp;
          while(begin<=end)
          {
              tmp.push_back(array[begin++])
          }
          return tmp;
      }                                             
                                                  

    }
};