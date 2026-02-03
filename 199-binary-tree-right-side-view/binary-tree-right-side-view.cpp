// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> result;
//         if (root == nullptr)
//             return result;
//         queue<TreeNode*> q;
//         q.push(root);

//         while (!q.empty()) {
//             int size = q.size();
//             TreeNode* temp = NULL;
//             while (size--) {
//                 temp = q.front();
//                 q.pop();
//                 if (temp->left != nullptr)
//                     q.push(temp->left);
//                 if (temp->right != nullptr)
//                     q.push(temp->right);
//             }
//             result.push_back(temp->val);
//         }
//         return result;
//     }
// };























class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
      if(root==NULL) return {};
      queue<TreeNode *>q;
      q.push(root);
      vector<int>ans;

      while(!q.empty()){
        int n=q.size();
         TreeNode *temp;
        while(n){
          temp= q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
            n--;
        }
        ans.push_back(temp->val);
        
      }
        return ans;
    }
};