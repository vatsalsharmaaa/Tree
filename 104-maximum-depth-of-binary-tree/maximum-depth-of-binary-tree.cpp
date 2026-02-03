// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if (root == nullptr) {
//             return 0;
//         }

//         int lh = 0, rh = 0;

//         if (root->left) {
//             lh = maxDepth(root->left);
//         }
//         if (root->right) {
//             rh = maxDepth(root->right);
//         }

//         return 1 + max(lh, rh);
//     }
// };
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};
