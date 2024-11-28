
#include"node.cpp"


class linkedlist
{
    Node* start;

    public:

    linkedlist();

    void setStart(Node * );
    Node* getStart();

    void Display();
    void insertAtBegin(int );
    void insertAtEnd(int );
};