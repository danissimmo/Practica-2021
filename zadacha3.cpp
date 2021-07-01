#include <iostream>

using namespace std;

struct Node {
    int val;
    Node* next;
};

void initNode(Node* node)
{
    node->val = 0;
    node->next = nullptr;
}

void pushNode(Node* head, Node* node)
{
    if (head == nullptr || node == nullptr)
        return;
    while (head->next != nullptr)
        head = head->next;
    head->next = node;
    node->next = nullptr;
}

void showList(Node* head)
{
    cout << "Show list:\n";
    while (head != nullptr)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

void initList(Node*& head, int size, int val)
{
    if (size <= 0) {
        head = nullptr;
        return;
    }

    head = new Node;
    head->val = val;
    head->next = nullptr;
    for (int i = 1; i < size; ++i) {
        Node* n = new Node;
        n->val = val;
        n->next = head->next;
        head->next = n;
    }
}

int main()
{
    Node *h1, *h2, *h3;
    initList(h1, 0, 2);
    showList(h1);
    initList(h2, 1, 3);
    showList(h2);
    initList(h3, 5, 7);
    showList(h3);

    Node* n = new Node();
    initNode(n);
    
    pushNode(h1, n);
    showList(h1);
    pushNode(h2, n);
    showList(h2);
    pushNode(h3, n);
    showList(h3);
}

