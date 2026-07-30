class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return find(root->left,root->right);
        
    }
    bool find(TreeNode* root1,TreeNode* root2){
        if(root1==nullptr && root2 == nullptr) return true;
        if(root1==nullptr || root2 == nullptr) return false;
        if(root1->val != root2->val)return false;
        bool f = find(root1->left,root2->right);
        bool s = find(root1->right,root2->left);
        return f && s;
    }
};