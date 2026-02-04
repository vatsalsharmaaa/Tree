class Solution {
public:
   TreeNode * deleteHelper (TreeNode* root, unordered_set <int> &st, vector<TreeNode *> &result)
    {
        if(root==nullptr) return nullptr;

        root->left= deleteHelper(root->left,st,result);
        root->right= deleteHelper(root->right,st,result);

        if(st.find(root->val)!= st.end()){
            if(root->left != NULL){
                result.push_back(root->left);
            }
             if(root->right != NULL){
                result.push_back(root->right);
            }
            return NULL;
        }
        else{
            return root;
        }
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        vector<TreeNode *> result;

        unordered_set <int> st;
        for(int &nums : to_delete){
            st.insert(nums);
        }
        deleteHelper(root,st , result);

        if(st.find(root->val) == st.end() ){  // case if root delete nhi krna hai original
            result.push_back(root);
        }
        return result;
    }
};