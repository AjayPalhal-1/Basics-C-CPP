
#include"linkedlist.cpp"



int main ()
{
    linkedlist ls;
    


    int ch ,ele;
    
  
     do
     {
         cout << "\n\nEnter Your Choices:\n"
             << "1. Insert At Beginning\n"
             << "2. Insert At End\n"
             << "3. Insert At Position\n"
             << "4. Delete At Beginning Vala Node \n"
             << "5. Delete At End Vala Node \n"
             << "6. Delete At Position \n"
             << "7. Display\n"
             << "8. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
         cout<<"\nEnter Element :";
         cin>>ele;
         ls.insertAtBegin(ele);
            break;


        case 2:
         cout<<"\nEnter Element :";
         cin>>ele;
         ls.insertAtEnd(ele);
            break;

        case 3:
        int pos;
        cout<<"\nEnter Position :";
         cin>>pos;
         cout<<"\nEnter Element :";
         cin>>ele;
         ls.insertAtPosition(ele , pos);
            break;
        
        case 4 :
        ls.deleteAtBegin();
         break;

         case 5:
         ls.deleteAtEnd();
         break;

         case 6:
         cout<<"\nEnter Position :";
         cin>>pos;
         cout<<"\nEnter Element :";
         ls.deleteAtPosition(pos);
         break;


        case 7:
        ls.Display();
            break;

        case 8:
         cout << "Exiting the program. Goodbye!\n";     
            break;
        
        }
     } while (ch!=8);
     

}