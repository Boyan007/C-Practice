#ifndef MYCALC_H_INCLUDED
#define MYCALC_H_INCLUDED

//make the class HEAP_MAX here

struct Node{
    int value;
    Node* left;
    Node* right;
};

class BST{
    Node* root;
    Node* SearchMin(Node* node);
    void Insert(Node* node, int val);
    void Delete(Node* node, int val);
    void makeNode(Node* node, int val);

public:
    BST(){root = nullptr;}
    BST(int data): root(new Node)
        {root->value = data; root->left = nullptr; root->right = nullptr;}

    Node* getRoot() const{return root;}
    Node* getLeft() const{return root->left;}
    Node* getRight() const{return root->right;}

    void Insert(int val);
    void Delete(int val);
    void PrintElements(Node *node);
};

//firstly make FUNCTIONS needed for node; after that make those functions part of a class

void BST::PrintElements(Node *node){
    if(node == nullptr)return;
    std::queue<Node*>q;
    q.push(node);
    while(!q.empty()){
        Node* current(q.front());
        std::cout << current ->value << " ";
        if(current->left != nullptr)q.push(current->left);
        if(current->right != nullptr)q.push(current->right);
        q.pop();
    }
}

void BST::makeNode(Node* node, int val){

    node->value = val;
    node->left = nullptr;
    node->right = nullptr;

}

void BST::Insert(int val){
    if(root == nullptr){
        root = new Node;
        makeNode(root, val);
    }
    else{
        Insert(root, val);
    }
}

void BST::Delete(int val){
    Delete(root, val);
}

void BST::Insert(Node* node, int val){
    if(node->value > val){
        if(node->left == nullptr){
            node->left = new Node;
            makeNode(node->left, val);
        }
        else Insert(node->left, val);
    }

    else if(node->value < val){
        if(node->right == nullptr){
            node->right = new Node;
            makeNode(node->right, val);
        }
        else Insert(node->right, val);
    }
    else return;
}

Node *BST::SearchMin(Node* node){
    if(node->left == nullptr) return node;
    else return SearchMin(node->left);
}

void BST::Delete(Node* node, int val){
    if(node == nullptr) return;

    else if(val < node->value) Delete(node->left, val);
    else if(val > node->value) Delete(node->right, val);

    else{
        if(node->left == nullptr && node->right == nullptr){delete node; node = nullptr;}
        else if(node->left == nullptr){Node* temp(node); node = node->right; delete temp;}
        else if(node->right == nullptr){Node* temp(node); node = node->left; delete temp;}
        else{
            Node* temp = SearchMin(node->right);
            node->value = temp->value;
            Delete(node->right, node->value);
        }
    }
}

class Heap{
    int* root;
    int capacity, number;
public:
    Heap(){root = nullptr;}
    Heap(int SIZE): capacity(SIZE), root(new int[capacity]), number(0){}
    void Insert(int element);
    void writeOut()const;
    void SwitchDown(int index1, int index2);
    void SwitchUp(int index1, int index2);
    void Remove(int element);
    int Find(int element);
};

void Heap::SwitchUp(int index1, int index2){

    auto temp = root[index1];   //index1 child
    root[index1] = root[index2];//index2 parent
    root[index2] = temp;

    if(2*index1+2 > number)return;

    if(root[2*index1+1] < root[2*index1+2])SwitchUp(2*index1+1, index1);
    else SwitchUp(2*index1+2, index1);
}

int Heap::Find(int element){
    for(int i(0); i<number; i++)if(root[i] == element)return i;
    return -1;
}

void Heap::Remove(int element){
    int index(Find(element));
    if(index == -1)return;

    root[index] = root[number-1];
    number--;

    if(2*index+2 > number)return;

    if(root[2*index+1] < root[2*index+2])SwitchUp(2*index+1, index);
    else SwitchUp(2*index+2, index);
}

void Heap::SwitchDown(int index1, int index2){      //(3, 1)
    auto temp = root[index1];   //index1 child
    root[index1] = root[index2];//index2 parent
    root[index2] = temp;

    if(index2 == 0)return;

    if(index2 % 2 == 1 && root[(index2-1)/2] > root[index2])SwitchDown(index2, (index2-1)/2);
    else if(index2 % 2 == 0 && root[(index2-2)/2] > root[index2])SwitchDown(index2, (index2-2)/2);
}

void Heap::writeOut()const{
    for(int i(0); i<number; i++)std::cout << root[i] << " ";
}

void Heap::Insert(int element){
    if(number == capacity)throw std::domain_error("Limit reached");

    if(number == 0) root[number++] = element;

    else if((number%2 == 1 && root[(number-1)/2]<=element) || (number%2 == 0 && root[(number-2)/2]<=element)) root[number++] = element;

    else{
        root[number] = element;
        if(number%2 == 1)SwitchDown(number, (number-1)/2);
        else SwitchDown(number, (number-2)/2);
        number++;
    }
}

#endif // MYCALC_H_INCLUDED
