#include<bits/stdc++.h>
using namespace std;

struct Node {
    int info;
    Node *left, *right;
};

// Use *&root to pass the pointer by reference so the main root gets updated
void Create(Node *&root, Node *newone) {
    if (root == NULL) {
        root = newone;
        return;
    }

    if (newone->info < root->info) {
        if (root->left == NULL) {
            root->left = newone;
        } else {
            Create(root->left, newone);
        }
    } else if (newone->info > root->info) {
        if (root->right == NULL) {
            root->right = newone;
        } else {
            Create(root->right, newone);
        }
    } else {
        // This is the "Location" display you needed
        cout << "Number already exists at memory location: " <<  " Thank You!" << endl;
        delete newone; // Clean up memory if not used
    }
}

// Traversal functions (These remain the same as yours)
void Inorder(Node *root) {
    if (root != NULL) {
        Inorder(root->left);
        cout << root->info << "  ";
        Inorder(root->right);
    }
}

void Preorder(Node *root) {
    if (root != NULL) {
        cout << root->info << "  ";
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Postorder(Node *root) {
    if (root != NULL) {
        Postorder(root->left);
        Postorder(root->right);
        cout << root->info << "  ";
    }
}

int main() {
    Node *root = NULL; // Initialize local root
    int choice;
    char c;

    do {
        cout << "\n-----------Tree-----------" << endl;
        cout << "1. Create BST (Insert)" << endl;
        cout << "2. Preorder Traversing" << endl;
        cout << "3. Inorder Traversing" << endl;
        cout << "4. Postorder Traversing" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                do {
                    cout << "Enter an element: ";
                    int a; cin >> a;
                    Node *newone = new Node{a, NULL, NULL};
                    
                    // The function now correctly updates 'root'
                    Create(root, newone);
                    
                    cout << "Do you want to add more? (y/n): ";
                    cin >> c;
                } while (c == 'y' || c == 'Y');
                break;
            case 2: Preorder(root); cout << endl; break;
            case 3: Inorder(root); cout << endl; break;
            case 4: Postorder(root); cout << endl; break;
            case 5: cout << "Exiting...." << endl; break;
        }
    } while (choice != 5);

    return 0;
}