#ifndef TREE_H
#define TREE_H

struct node
{
  const char * letra;
  node *left;
  node *right;
};

class tree
{
    public:
        tree();
        ~tree();

        void insert(char * key);
        node *search(char * key);
        void destroy_tree();

    private:
        void destroy_tree(node *leaf);
        void insert(char* key, node *leaf);
        node *search(char* key, node *leaf);

        node *root;
};

#endif // TREE_H
