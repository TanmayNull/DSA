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
int ans=0;
    pair<int,int> findavg(TreeNode* node)
    {
        if(node==NULL)
        return {0,0};
        pair<int,int>leftsum=findavg(node->left);
        pair<int,int>rightsum=findavg(node->right);
        int sum=node->val+leftsum.first+rightsum.first;
        int count=leftsum.second+rightsum.second+1;
        int average=sum/count;
        if(average==node->val)
        ans++;
        return {sum,count};
    }
    int averageOfSubtree(TreeNode* root) {
     findavg(root);
    return ans;
    }
};