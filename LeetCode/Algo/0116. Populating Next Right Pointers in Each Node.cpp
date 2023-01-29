class Solution {
public:
    void helper(Node* root){
        while(root != nullptr){
            Node* childDummy = new Node();
            Node* childDummyPtr = childDummy;
            while(root != nullptr){
                if(root->left != nullptr){
                    childDummyPtr->next = root->left;
                    childDummyPtr = childDummyPtr->next;
                }
                if(root->right){
                    childDummyPtr->next = root->right;
                    childDummyPtr = childDummyPtr->next;
                }
                root = root->next;
            }
            root = childDummy->next;
            delete(childDummy);
        }
    }
    Node* connect(Node* root) {
        helper(root);
        return root;
    }
};