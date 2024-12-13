#include"mystack.cpp"


int main()
{

    MyStack<char> stk (5);
    int ch;char elm;
    cout<<"\nEnter Your Choise \n";
    

    do
    {
        cout<<endl<<":::: Menu ::::"<<endl;
        cout<<"1 : Push Element \n 2 : POP Element \n 3 : IsFull \n 4 : IsEmpty \n 5 : For Peek \n 6 : For Display \n 7 : Exit \n"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"\n Enter Element \n";
            cin>>elm;
            stk.push(elm);                       
            break;

            case 2:
            stk.pop(elm);
            cout<<"\n Pooped Elements \n"<<elm<<endl;                        
            break;

            case 3:
            stk.isEmpty();            
            break;

            case 4:
            stk.isEmpty();            
            break;

            case 5:
            cout<<endl<<stk.peek();            
            break;

            case 6:
            stk.display();            
            break;         
       
        }
    } while (ch!=7);

    
}