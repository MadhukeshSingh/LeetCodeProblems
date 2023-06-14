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
    int getMinimumDifference(TreeNode* root) {
        TreeNode* curr = root;
        TreeNode* prev = NULL;
        int ans = INT_MAX;
        stack<TreeNode*> st;
        while(curr != NULL || !st.empty()){
            if (curr != NULL){
                st.push(curr);
                curr = curr -> left;
            }
            else{
                curr = st.top();
                st.pop();
                if (prev != NULL)
                    ans = min(ans, curr->val - prev -> val);
            prev = curr;
            curr = curr -> right;
            }
        }
        return ans;
    }
};