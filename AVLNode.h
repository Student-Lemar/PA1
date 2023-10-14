#include <iostream>

#include <fstream>

#include <string>

#include <vector>

using namespace std;

struct avlnode {
  int node;
  node *nextl, *nextr;
  int height;
};
class Llist{
  private:
    node *head, *tail;
}
  public:
    Llist(){
      head = NULL;
      tail = NULL;
    }
      
