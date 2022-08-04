#include <iostream>
#include <climits>
using namespace std;

class isBSTReturn{
    public:
    bool isBST;
    int minimum;
    int maximum;
};

isBSTReturn isBST2(BinaryTreeNode<int>* root){
    if(root==NULL){
        isBSTReturn output;
        output.isBST=true;
        output.maximum=INT_MIN;
        output.minimum=INT_MAX;
    }

    isBSTReturn left_output= isBST2(root->left);
    isBSTReturn right_output=isBST2(root->right);

    int maximum= max(root->data,max(left_output.maximum,right_output.maximum));
    int minimum = min(root->data,min(left_output.minimum,right_output.minimum));

    bool isBSt= (root->data>left_output.maximum) and (root->data<= right_output.minimum) and isBST2(root->left) and isBST2(root->right);

    isBSTReturn output;
    output.maximum=maximum;
    output.minimum=minimum;
    output.isBST=isBST;

    return output;
}