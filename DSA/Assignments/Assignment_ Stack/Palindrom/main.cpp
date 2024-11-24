#include"ispal.cpp"

int main()
{

    MystringStack stk (10);
    
    char str[20] , ch ;
    cout<<"\nEnter Your string \n";
    cin>>str;

    for(int i=0; str[i]!='\0';i++)
    {
      stk.push(str[i]);        
    }

    stk.display();    

     for(int i=0; str[i]!='\0';i++)
    {
        stk.pop(ch);

         if(ch!= str[i])
         {
         cout<<"\n String is Not Palindrom \n"; 
         return 0;
         }
         
    }
    cout<<"\nString Is Palindrom\n";

     

   

    //  for(int i=0; i<10;i++)
    //  {
    //     if()
    //  }



   
    


    
}

