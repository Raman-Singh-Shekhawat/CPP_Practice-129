/*
146. Code : Max data node: Given a generic tree, find and return the node with maximum data. You need to return the node which is having maximum data.
Return null if tree is empty.
*/

/************************************************************

    Following is the structure for the TreeNode class

    template <typename T>
    class TreeNode {
     public:
        T data;
        vector<TreeNode<T>*> children;

        TreeNode(T data) {
            this->data = data;
        }

        ~TreeNode() {
            for (int i = 0; i < children.size(); i++) {
                delete children[i];
            }
        }
    };

************************************************************/

TreeNode<int> *maxDataNode(TreeNode<int> *root)
{

    if (!root)
    {

        return NULL;
    }

    TreeNode<int> *max1 = root;
    TreeNode<int> *max2;

    for (int i = 0; i < root->children.size(); i++)
    {

        max2 = maxDataNode(root->children[i]);

        if (max2->data > max1->data)
        {

            max1 = max2;
        }
    }

    return max1;
}