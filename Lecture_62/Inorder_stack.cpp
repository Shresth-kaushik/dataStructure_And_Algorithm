
// //  Function to traverse the binary tree without recursion
// //    and without stack 





    //  INORDER

// void MorrisTraversal(node* root)
// {
//     struct tNode *current, *pre;
 
//     if (root == NULL)
//         return;
 
//     current = root;
//     while (current != NULL) {
 
//         if (current->left == NULL) {
//             cout << current->data << " ";
//             current = current->right;
//         }
//         else {
 
//             //  Find the inorder predecessor of current 

//             pre = current->left;
//             while (pre->right != NULL
//                    && pre->right != current)
//                 pre = pre->right;
 
//              Make current as the right child of its
//                inorder predecessor 


//             if (pre->right == NULL) {
//                 pre->right = current;
//                 current = current->left;
//             }
 
//             /* Revert the changes made in the 'if' part to
//                restore the original tree i.e., fix the right
//                child of predecessor */


//             else {
//                 pre->right = NULL;
//                 cout << current->data << " ";
//                 current = current->right;
//             } /* End of if condition pre->right == NULL */
//         } /* End of if condition current->left == NULL*/
//     } /* End of while */
// }
 

// */







// ------------------->>> INORDER USING THE STACKS <<<<------------


// void inOrder(struct Node *root)
// {
//     stack<Node *> s;
//     Node *curr = root;
 
//     while (curr != NULL || s.empty() == false)
//     {
//         /* Reach the left most Node of the
//            curr Node */
//         while (curr !=  NULL)
//         {
//             /* place pointer to a tree node on
//                the stack before traversing
//               the node's left subtree */
//             s.push(curr);
//             curr = curr->left;
//         }
 
//         /* Current must be NULL at this point */
//         curr = s.top();
//         s.pop();
 
//         cout << curr->data << " ";
 
//         /* we have visited the node and its
//            left subtree.  Now, it's right
//            subtree's turn */
//         curr = curr->right;
 
//     } /* end of while */
// } 