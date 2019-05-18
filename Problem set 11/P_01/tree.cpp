#include "tree.h"
#include <stdexcept>
#include <iostream>
using namespace std;
tree::tree(){
    root=nullptr;
}
tree::~tree()
{
  destroy_tree();
}
void tree::destroy_tree(node *leaf)
{
  if(leaf!=nullptr)
  {
    destroy_tree(leaf->left);
    destroy_tree(leaf->right);
    delete leaf;
  }
}
void tree::insert(char* key, node *leaf)
{
    if(*key< *(leaf->letra))
      {
        if(leaf->left!=nullptr)
         insert(key, leaf->left);
        else
        {
          leaf->left=new node;
          leaf->left->letra=key;
          leaf->left->left=nullptr;    //Sets the left child of the child node to null
          leaf->left->right=nullptr;   //Sets the right child of the child node to null
        }
      }
      else if(*key>=*(leaf->letra))
      {
        if(leaf->right!=nullptr)
          insert(key, leaf->right);
        else
        {
          leaf->right=new node;
          leaf->right->letra=key;
          leaf->right->left=nullptr;  //Sets the left child of the child node to null
          leaf->right->right=nullptr; //Sets the right child of the child node to null
        }
      }
    }
node *tree::search(char* key, node *leaf)
{
  if(leaf!=nullptr)
  {
    if(*key==*(leaf->letra)){
      throw leaf;}
    if(*key<*(leaf->letra))
       search(key, leaf->left);
    else
      search(key, leaf->right);
  }
  else return 0;
}
void tree::insert(char * key)
{
  if(root!=nullptr)
    insert(key, root);
  else
  {
    root=new node;
    root->letra=key;
    root->left=nullptr;
    root->right=nullptr;
  }
}
void tree::destroy_tree()
{
  destroy_tree(root);
}
node *tree::search(char*  key)
{
  try{

        search(key, root);
    }
    catch (node* q){
        return q;
    }
    return 0;
}
