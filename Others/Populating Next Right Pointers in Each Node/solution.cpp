Node* connect(Node* root) {
    
    if (root == NULL) return NULL;

    Node* leftMost = root;
    while (leftMost->left != NULL) {
        Node* current = leftMost;
        while (current != NULL) {
            current->left->next = current->right;
            if (current->next != NULL) {
                current->right->next = current->next->left;
            }
            current = current->next;
        }
        leftMost = leftMost->left;
    }
    return root;
}
