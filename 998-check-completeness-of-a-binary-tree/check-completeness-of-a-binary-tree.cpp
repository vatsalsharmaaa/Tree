
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        bool past=false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode *node=q.front();
            q.pop();
            if(node==NULL){
                past=true;
            }
            else{
                if(past==true){
                    return false;
                }
                q.push(node->left);
                q.push(node->right);
            }

        }
        return true;
    }
};