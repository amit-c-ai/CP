class Solution {
public:
    Node* connect(Node* root) {
        if(!root || (!root->left && !root->right)){
            return root;
        }
        queue<Node*> q;
        q.push(root);
        int level=0, count=0;
        while(!q.empty()){
            Node *temp = q.front(); q.pop();
            count++;
            if(count == pow(2, level)){
                temp->next = NULL;
                level++;
                count=0;
            }
            else{
                temp->next = q.front();
            }
            if(temp->left){ q.push(temp->left); }
            if(temp->right){ q.push(temp->right); }
        }
        return root;
    }
}
