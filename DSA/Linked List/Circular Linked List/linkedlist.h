#include"node.cpp"


class linkedlist
{
private:
     Node* last;
public:

    linkedlist();
    linkedlist( Node*);

    void setLast(Node*);
    Node* getLast();


    void insertAtBegin(int );
    void insertAtEnd(int);
    void Display();
};

