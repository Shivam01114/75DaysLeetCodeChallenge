class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if (root == nullptr) return answer; 
        queue<TreeNode*> q;
        q.push(root);
        while (q.size() != 0) {
            int size = q.size();
            vector<int> list;
            for (int i = 0;i<size;i++) {
                TreeNode* node = q.front(); q.pop();
                list.push_back(node->val);

                if (node->left != nullptr) q.push(node->left);
                if (node->right != nullptr) q.push(node->right);
            }
            answer.push_back(list);
        }
        return answer;
    }
};