class Solution{
    public:
        bool isSymmetric(TreeNode* root) {
            return isMirror(root, root);
        }

    public:
        bool isMirror(TreeNode* t1, TreeNode* t2) {
            if (t1 == nullptr and t2 == nullptr) return true;
            if (t1 == nullptr or t2 == nullptr) return false;
            return (t1->val == t2->val)
                and isMirror(t1->right, t2->left)
                and isMirror(t1->left, t2->right);
        }
};