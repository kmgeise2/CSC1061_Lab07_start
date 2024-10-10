#ifndef BSTCHECKER_H
#define BSTCHECKER_H

// TODO: Include any needed header files
#include "BSTNode.h"

class BSTChecker {
public:
    // TODO: Add any desired utility functions

    // CheckBSTValidty() determines if the tree is a valid BST. If so, nullptr
    // is returned. If not, the first (in preorder traversal) node in violation
    // of BST requirements is returned. Such a node will be one of the following:
    // - A node in the left subtree of an ancestor with a lesser or equal key
    // - A node in the right subtree of an ancestor with a greater or equal key
    // - A node that is encountered more than once during traversal
    static BSTNode* CheckBSTValidity(BSTNode* rootNode) {
        // TODO: Type your code here (remove placeholer line below)
        return rootNode;
    }
};

#endif
