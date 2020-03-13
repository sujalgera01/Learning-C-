#include<stdio.h>
#include<stdlib.h>
struct BST
{
int key;
struct BST *ptroleftchild;
struct BST * ptrtorightchild;
};
struct BST * maketree(nwkey){
struct BST* prtonwnode;
prtonwnode = (struct BST*)malloc(sizeof(struct BST));
prtonwnode->key = nwkey;
prtonwnode->ptroleftchild = NULL;
prtonwnode->ptrtorightchild = NULL;
return prtonwnode;
}

struct BST* insertionofnode(struct BST* nodeoriginal, int key)
{
if (nodeoriginal == NULL) return maketree(key);
if (key < nodeoriginal->key)
nodeoriginal->ptroleftchild = insertionofnode(nodeoriginal->ptroleftchild, key);
else if (key > nodeoriginal->key)
nodeoriginal->ptrtorightchild = insertionofnode(nodeoriginal->ptrtorightchild, key);
return nodeoriginal;
}
void inordertrav(struct BST* nodeoriginal){if(nodeoriginal == NULL) return;
inordertrav(nodeoriginal->ptroleftchild);
printf("%d ->", nodeoriginal->key);
inordertrav(nodeoriginal->ptrtorightchild);
}
int main(){
struct BST *nodeoriginal = NULL;
nodeoriginal = insertionofnode(nodeoriginal, 8);
insertionofnode(nodeoriginal, 3);
insertionofnode(nodeoriginal, 1);
insertionofnode(nodeoriginal, 6);
insertionofnode(nodeoriginal, 7);
insertionofnode(nodeoriginal, 10);
insertionofnode(nodeoriginal, 14);
insertionofnode(nodeoriginal, 4);
inordertrav(nodeoriginal);
}
