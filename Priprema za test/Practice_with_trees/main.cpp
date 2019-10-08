#include <iostream>
#include <queue>
//using namespace std;

struct Node{
    int value;
    Node* left;
    Node* right;
};

Node* newNode(int data)
{
  // Allocate memory for new node
  Node* node(new Node);

  // Assign data to this node
  node->value = data;

  // Initialize left and right children as NULL
  node->left = NULL;
  node->right = NULL;

  return(node);
}

void InsertTree(Node* a, int b){

    if(b < a->value){
        if(a->left == NULL){
            a->left = newNode(b);
            return;
        }
        InsertTree(a->left, b);
    }
    else if(b > a->value){
        if(a->right == NULL){
            a->right = newNode(b);
            return;
        }
        InsertTree(a->right, b);
    }

    else return;
}

void WhereIs(Node* a, int b){
    Node* p(a);
    while(true){
        if(p->value > b){
            if(p->left != NULL){
                p = p->left;
                std::cout << "left-> ";
            }
            else break;
        }
        else if(p->value < b){
            if(p->right != NULL){
                p = p->right;
                std::cout << "right-> ";
            }
            else break;
        }
        else{
            std::cout << b;
            return;
        }
    }
    std::cout << "There is none";
}

int FindHeight(Node* n){
    int left_height(-1), right_height(-1);

    if(n->left == NULL && n->right == NULL){
        if(n->value == 0)return -1;
        if(n->value != 0)return 0;
}

    if(n->left != NULL) left_height = FindHeight(n->left);

    if(n->right != NULL) right_height = FindHeight(n->right);

    //return ((left_height > right_height ? left_height : right_height)+1);
    return std::max(left_height, right_height)+1;
}

int SumOfNodes(Node* n){

    if(n->left == NULL && n->right == NULL)return n->value;

    else if(n->left == NULL && n->right != NULL)return n->value + SumOfNodes(n->right);

    else if(n->left != NULL && n->right == NULL)return n->value + SumOfNodes(n->left);

    return n->value + SumOfNodes(n->left) + SumOfNodes(n->right);
}

void ProcitajPoSlojevima(Node* n){

    if(n == NULL)return;

    std::queue<Node*>q;
    q.push(n);

    while(q.size() != 0){

        std::cout << q.front()->value << " ";

        if(q.front()->left != NULL)q.push(q.front()->left);
        if(q.front()->right != NULL)q.push(q.front()->right);

        q.pop();

    }
}
int main()
{
    Node a{15};

    a.left = newNode(10);
    a.right = newNode(20);

    a.left->left = newNode(8);
    a.left->right = newNode(12);
    a.right->left = newNode(17);
    a.right->right = newNode(25);

    InsertTree(&a, 13);

    //WhereIs(&a, 18);

    ProcitajPoSlojevima(&a);

    //std::cout << SumOfNodes(&a);
    /*a.value = 1;
    b.value = 3;
    c.value = 5;
    a.left = &b;
    a.right = &c;*/

    //std::cout << std::endl << a.left->right->right->value << std::endl;
    return 0;
}
