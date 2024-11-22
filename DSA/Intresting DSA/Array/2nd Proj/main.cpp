#include "array.h"

int main()
{

    int val, size, ele, idx;
    cout << "Enter the Size of the Array : "<<endl;
    cin >> size;
    MyArray arr(size);

    int ch;
    do
    {
        //      bool insert(int &);
        // bool remove(int &);
        // bool isFull();
        // bool isEmpty();
        // // void display();

        cout <<"Enter Your Choice"<<endl<<endl;

        cout << " 1   : Insert Element in array " << endl;
        cout << " 2   : Remove elemnt  " << endl;
        cout << " 3   : Diaplay array " << endl;
        cout << " 10  : toExit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout <<"Enter Element to isert in array : "<<endl;
            cin >> ele;
            arr.insert(ele);
            break;

        case 2:
            cout <<"Enter the index of element you want to delete : "<<endl;
            cin >> idx;
            arr.remove(idx);
            break;

        case 3:
            arr.display();
            break;
        }

    } while (ch != 0);

    return 0;
}