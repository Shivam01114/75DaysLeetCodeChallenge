class Solution {
public:
    vector<vector<int>> answer;

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> curr;
        backtrack(root, targetSum, curr);
        return answer;
    }

    void backtrack(TreeNode* root, int sum, vector<int>& curr) {
        if (root==nullptr) return;
        curr.push_back(root->val);

        if (root->left == nullptr && root->right==nullptr && sum==root->val){
            answer.push_back(curr);
        }else{
            backtrack(root->left, sum-root->val,curr);
            backtrack(root->right,sum-root->val,curr);
        }
        curr.pop_back();
    }
};