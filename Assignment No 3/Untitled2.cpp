#include <iostream>
using namespace std;

struct Node {
    int item;
    Node* left;
    Node* Right;
};

Node* root = NULL;

Node* createNode(int value) {
    Node* node = new Node();
    node->item = value;
    node->left = NULL;
    node->Right = NULL;
    return node;
}

Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }
    if (value < root->item) {
        root->left = insertNode(root->left, value);
    } else {
        root->Right = insertNode(root->Right, value);
    }
    return root;
}

void preorder(Node* root) {
    if (root == NULL) return;
    cout << root->item << " ";
    preorder(root->left);
    preorder(root->Right);
}

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->item << " ";
    inorder(root->Right);
}

void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->Right);
    cout << root->item << " ";
}

int main() {
    int values[] = {40, 25, 10, 32, 55, 50, 70, 60};
    int n = sizeof(values) / sizeof(values[0]);

    int choice;

    do {
        cout << "\n1 - Insert Nodes";
        cout << "\n2 - Preorder Traversal";
        cout << "\n3 - Inorder Traversal";
        cout << "\n4 - Postorder Traversal";
        cout << "\n5 - Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Inserting...\n";
                for (int i = 0; i < n; i++) {
                    root = insertNode(root, values[i]);
                }
                break;

            case 2:
                cout << "Preorder: ";
                preorder(root);
                cout << endl;
                break;

            case 3:
                cout << "Inorder: ";
                inorder(root);
                cout << endl;
                break;

            case 4:
                cout << "Postorder: ";
                postorder(root);
                cout << endl;
                break;

            case 5:
                cout << "Exiting...\n";
                break;
        }

    } while (choice != 5);

    return 0;
}

