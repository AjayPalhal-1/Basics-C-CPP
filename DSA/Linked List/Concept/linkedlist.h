
#include"node.cpp"


class linkedlist
{
    Node* start;

    public:

    linkedlist();

    void setStart(Node * start);
    Node* getStart();

    void Display();
    void insertAtBegin(int ele);
};