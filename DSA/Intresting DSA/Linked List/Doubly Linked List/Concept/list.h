#include"node.cpp"


class linkedlist
{
    Node* start;

    public :

    linkedlist(  );
    void setStart(Node*);
    Node* getStart();

    void insertAtPosition(int ele, int pos);
};