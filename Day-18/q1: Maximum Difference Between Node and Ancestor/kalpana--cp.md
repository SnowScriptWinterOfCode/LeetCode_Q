class solution {
public:
     int maxDifference = 0;

    void findMaxAncestorDifference(TreeNode* currentNode, int minValue, int maxValue) {
        if (currentNode) {
            minValue = std::min(minValue, currentNode->val);
            maxValue = std::max(maxValue, currentNode->val);
            maxDifference = std::max(maxDifference, maxValue - minValue);

            findMaxAncestorDifference(currentNode->left, minValue, maxValue);
            findMaxAncestorDifference(currentNode->right, minValue, maxValue);
        }
    }

    int maxAncestorDiff(TreeNode* root) {
        findMaxAncestorDifference(root, root->val, root->val);
        return maxDifference;
    }
};