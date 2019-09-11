#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

struct node{
    int elem;
    
    node *prev;
    node *next;
};

class linkedList{
  private: 
    node *f;
    node *l;

  public:
    linkedList(){
      f = NULL;
      l = NULL;
    }

    void push_front(int elem){
      node *n = new node();
      n->elem = elem;
      n->next = f;
      n->prev = NULL;
      f = n;      
      if(l == NULL){
        l = n;
      }
    }

    void push_back(int elem){
      node *n = new node();
      n->elem = elem;
      n->next = NULL;
      if(f == NULL){
        f = n;
        l = n;
      }
      else{
        l->next = n;
        n->prev = l;
        l = n;        
      }
    }

    node last(){
      return *l;
    }

    void resize(int q){
      for(int i = 1; i <= q; i++){
        push_back(i);
      }
    }

    void remove(linkedList n){      
      node *a = n.f;
      node *aux = a;
      while(aux->next != NULL){
        a = aux;
        aux = a->next;
        delete a;
      }
    }
};

#endif // LINKED_LIST_H_INCLUDED

#include <iostream>
#include <vector>