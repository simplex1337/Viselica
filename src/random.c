#include "bstree.h"
#include <time.h>
#include <sys/time.h>
#include <stdio.h>

struct bstree *bstree_create(char *key, int value)
{
    struct bstree *node;
    node = malloc(sizeof(*node));
    if (node != NULL) {
	node->key = key;
	node->value = value;
	node->left = NULL;
	node->right = NULL;
    }
    return node;
}

void bstree_add(struct bstree *tree, char *key, int value)
{
    struct bstree *parent, *node;
    if (tree == NULL)
        return;
    while (tree != NULL) {
	parent = tree;
	if (key < tree->key)
	    tree = tree->left;
	else if (key > tree->key)
	    tree = tree->right;
	else
	    return;
    }
    node = bstree_create(key, value);
    if (key < parent->key)
	parent->left = node;
    else
	parent->right = node;
}

struct bstree *bstree_lookup(struct bstree *tree, char *key)
{
    while (tree != NULL) {
	if (key == tree->key) {
	    return tree;
	} else if (key < tree->key) {
	    tree = tree->left;
	} else {
	    tree = tree->right;
	}
    }
    return tree;
}

struct bstree *bstree_min(struct bstree *tree)
{
    if (tree == NULL)
	return NULL;
    while (tree->left != NULL)
	tree = tree->left;
    return tree;
}

struct bstree *bstree_max(struct bstree *tree) {
    if (tree == NULL)
	return NULL;
    while (tree->right != NULL)
	tree = tree->right;
    return tree;
}


int getrand(int min, int max)
{
    srand(time(NULL));
    return (double)rand() / (RAND_MAX + 1.0) * (max - min) + min;
}


int main()
{
    FILE *data = fopen("dic.txt", "r");
    char word[6][6];
    int i;
    for (i = 0; i < 6; i++)
        fscanf(data, "%s\n", word[i]);
    struct bstree *tree;
    tree = bstree_create(word[0], 0);  
   // for (i = 2; i <= 6; i++) {
        bstree_add(tree, word[1], 6);
        //if (i % 2 == 0) {
            char *w = word[getrand(1, 6)];
            printf("%s\n", w);
         //   struct bstree *node = bstree_lookup(tree, w);
        //    printf("%s\n", node->key);
       // }
   // }
    return 0;
} 
