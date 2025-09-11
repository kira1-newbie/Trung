#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_HEIGHT 1000
#define INFINITY (1<<20)
#define GAP 3

// ---------------------- C?U TRÚC CÂY ----------------------
typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

Node* createNode(int data) {
    Node* node = malloc(sizeof(Node));
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

Node* insert(Node* root, int data) {
    if (!root) return createNode(data);
    if (data < root->data) root->left = insert(root->left, data);
    else if (data > root->data) root->right = insert(root->right, data);
    return root;
}

// ---------------------- H? TR? IN CÂY ----------------------
int lprofile[MAX_HEIGHT];
int rprofile[MAX_HEIGHT];
int print_next;

typedef struct asciinode_struct {
    struct asciinode_struct *left, *right;
    int edge_length;
    int height;
    int lablen;
    int parent_dir;  // -1 = left, 0 = root, 1 = right
    char label[11];
} asciinode;

int MIN(int x, int y) { return (x < y) ? x : y; }
int MAX(int x, int y) { return (x > y) ? x : y; }

asciinode* build_ascii_tree_recursive(Node* t) {
    if (!t) return NULL;

    asciinode* node = malloc(sizeof(asciinode));
    node->left = build_ascii_tree_recursive(t->left);
    node->right = build_ascii_tree_recursive(t->right);
    if (node->left) node->left->parent_dir = -1;
    if (node->right) node->right->parent_dir = 1;

    sprintf(node->label, "%d", t->data);
    node->lablen = strlen(node->label);
    return node;
}

asciinode* build_ascii_tree(Node* t) {
    if (!t) return NULL;
    asciinode* node = build_ascii_tree_recursive(t);
    node->parent_dir = 0;
    return node;
}

void free_ascii_tree(asciinode* node) {
    if (!node) return;
    free_ascii_tree(node->left);
    free_ascii_tree(node->right);
    free(node);
}

void compute_lprofile(asciinode* node, int x, int y) {
    if (!node) return;
    int isleft = (node->parent_dir == -1);
    lprofile[y] = MIN(lprofile[y], x - ((node->lablen - isleft)/2));

    if (node->left)
        for (int i = 1; i <= node->edge_length && y + i < MAX_HEIGHT; i++)
            lprofile[y+i] = MIN(lprofile[y+i], x - i);

    compute_lprofile(node->left, x - node->edge_length - 1, y + node->edge_length + 1);
    compute_lprofile(node->right, x + node->edge_length + 1, y + node->edge_length + 1);
}

void compute_rprofile(asciinode* node, int x, int y) {
    if (!node) return;
    int notleft = (node->parent_dir != -1);
    rprofile[y] = MAX(rprofile[y], x + ((node->lablen - notleft)/2));

    if (node->right)
        for (int i = 1; i <= node->edge_length && y + i < MAX_HEIGHT; i++)
            rprofile[y+i] = MAX(rprofile[y+i], x + i);

    compute_rprofile(node->left, x - node->edge_length - 1, y + node->edge_length + 1);
    compute_rprofile(node->right, x + node->edge_length + 1, y + node->edge_length + 1);
}

void compute_edge_lengths(asciinode* node) {
    if (!node) return;

    compute_edge_lengths(node->left);
    compute_edge_lengths(node->right);

    if (!node->left && !node->right) {
        node->edge_length = 0;
    } else {
        int hmin = 0, i, delta = 4;

        if (node->left) {
            for (i = 0; i < node->left->height && i < MAX_HEIGHT; i++) rprofile[i] = -INFINITY;
            compute_rprofile(node->left, 0, 0);
            hmin = node->left->height;
        }

        if (node->right) {
            for (i = 0; i < node->right->height && i < MAX_HEIGHT; i++) lprofile[i] = INFINITY;
            compute_lprofile(node->right, 0, 0);
            hmin = MIN(node->right->height, hmin);
        }

        for (i = 0; i < hmin; i++)
            delta = MAX(delta, GAP + 1 + rprofile[i] - lprofile[i]);

        node->edge_length = ((delta + 1) / 2) - 1;
    }

    int h = 1;
    if (node->left) h = MAX(node->left->height + node->edge_length + 1, h);
    if (node->right) h = MAX(node->right->height + node->edge_length + 1, h);
    node->height = h;
}

void print_level(asciinode* node, int x, int level) {
    if (!node) return;

    int isleft = (node->parent_dir == -1);

    if (level == 0) {
        int i;
        for (i = 0; i < (x - print_next - ((node->lablen - isleft)/2)); i++) printf(" ");
        print_next += i;
        printf("%s", node->label);
        print_next += node->lablen;
    } else if (node->edge_length >= level) {
        if (node->left) {
            for (int i = 0; i < (x - print_next - level); i++) printf(" ");
            print_next += i;
            printf("/");
            print_next++;
        }
        if (node->right) {
            for (int i = 0; i < (x - print_next + level); i++) printf(" ");
            print_next += i;
            printf("\\");
            print_next++;
        }
    } else {
        print_level(node->left, x - node->edge_length - 1, level - node->edge_length - 1);
        print_level(node->right, x + node->edge_length + 1, level - node->edge_length - 1);
    }
}

void print_ascii_tree(Node* t) {
    if (!t) return;
    asciinode* proot = build_ascii_tree(t);
    compute_edge_lengths(proot);

    for (int i = 0; i < proot->height && i < MAX_HEIGHT; i++)
        lprofile[i] = INFINITY;

    compute_lprofile(proot, 0, 0);
    int xmin = 0;
    for (int i = 0; i < proot->height && i < MAX_HEIGHT; i++)
        xmin = MIN(xmin, lprofile[i]);

    for (int i = 0; i < proot->height; i++) {
        print_next = 0;
        print_level(proot, -xmin, i);
        printf("\n");
    }

    free_ascii_tree(proot);
}

// ---------------------- MAIN ----------------------
int main() {
    int values[] = {59, 96, 98, 87, 31, 51, 53, 85, 32};
    int n = sizeof(values)/sizeof(values[0]);

    Node* root = NULL;
    for (int i = 0; i < n; i++)
        root = insert(root, values[i]);

    printf("\nCay nhi phan tim kiem in dang cay do:\n\n");
    print_ascii_tree(root);

    return 0;
}

