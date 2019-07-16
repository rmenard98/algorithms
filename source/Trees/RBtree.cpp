#include "BST.cpp"
#include <iostream>

RBTtree::RBTree() { root = nullptr; };
  RBTree::~RBTree(){
      clear(root);
  }

  /** insert(int data)
   * Inserts the given data into the tree.
   * Does nothing if the data is already in the tree.
   */
  void RBTree::insert(int data){
      Node*n = new Node(data, 1);
      if (!n){
        return new Node(data);
      }
        else if (data < n->data){
            n->left = insert(data,1)
        } 
        else if(data > n->data){
            
        }
    
    
    }




  }

  /** height()
   * Determines and returns the height of the tree.
   * Returns -1 if the tree is empty.
   */
  int RBTree::height(){
      return height(root);

  }

  /** clear()
   * Removes every element from the tree.
   */
  void RBTree::clear(){
      clear(root);
  }

  /** preorder()
   * Prints the contents of the tree to the ostream using a pre-order
   * traversal.
   */
  void RBTree::preorder(std::ostream& oss = std::cout){
      BST::preorder;
  }

  /** inorder()
   * Prints the contents of the tree to the ostream using an in-order
   * traversal.
   */
  void RBTree::inorder(std::ostream& oss = std::cout){

  }

  /** postorder()
   * Prints the contents of the tree to the ostream using a post-order
   * traversal.
   */
  void RBTree::postorder(std::ostream& oss = std::cout){

  }

  void RBTree::deleteMax();

  void RBTree::deleteMin();
};