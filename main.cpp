// code source: https://www.codesdope.com/blog/article/c-linked-lists-in-c-singly-linked-list/
//ADVANTAGES/DISADVANTAGES LINKED LIST: 
//the advantages Dynamic Size: Linked lists can grow or shrink in size during runtime, making them very flexible. Elements can be easily added or removed without the need to allocate or deallocate memory in advance.
//the disadvantage Random Access: Unlike arrays, linked lists don't support constant-time random access to elements. To access an element, you must traverse the list from the beginning, which can be slow for large lists.
// code currently still unsuccessful

#include <iostream>

#include <fstream>

#include <string>

using namespace std;

struct node
{
    int data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    game()
    {
        string command;
        string dis;
        FILE file = fopen("command.csv", "r");
        
        
        
        int Displaychoice;
        vector<string> choices = {"1. Game Rules", "2. Play Game", "3. Load Previous Game", "4. Add Command", "5. Remove Command", "6. Exit"};
        cout << "Please select a number option below:" << endl;

        for (int i = 0; i < choices.size(); i++){
            cout << choices[i] << endl;
        }
        cin >> (Displaychoice);

        if (Displaychoice == 1){
            cout << "When the game starts it will display the description for the command and you the player\n will have to type the answer/command and if you get it correct you will recieve a point \nif you get it wrong you will lose a point" << endl;
            return game();
        }
        else if(Displaychoice == 2){
            while (tmp!=NULL){
                
                tmp=tmp->next;
            }
        }
        else if(Displaychoice == 3){
        }
        else if(Displaychoice == 4){
        }
        else if(Displaychoice == 5){
        }
        else if(Displaychoice == 6){
        }
    }    
};

int main()
{
    linked_list a;
    a.add_node(1);
    a.add_node(2);
    return 0;
}
