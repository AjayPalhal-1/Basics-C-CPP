#include<iostream>
#include<string.h>
using namespace std;


int idx=0;
int size=5;


class Mobile 
{
    int id;
    int warrenty;
    char brand[10]; 
    public:


    Mobile(int id , int warnty, char* brand)
    {
        this->id=id;
        this->warrenty= warnty;
        strcpy(this->brand,brand);

    }
         int getId()
         {
            return this->id;
         }

         int getWarrenty()
         {
            return this->warrenty;

         }

         char* getBrand()
         {
            return this->brand;
         }


    void Display()
    {
        cout<<"Mobile ID : "<<this->getId()<<endl;
        cout<<"Mobile Warrenty :"<<this->getWarrenty()<<" Years"<<endl;
        cout<<"Mobile Brand : "<<this->getBrand()<<endl;
    }


};

void Sort(Mobile* mob)
{
    // mob[0].getId0
     for(int i =0; i<idx-1;i++)
    {
        for(int j=i+1;j<idx-1;j++)
        {
            if(mob[j].getId() < mob[i].getId())
            {
                Mobile temp = mob[i];
                mob[i]= mob[j];
                mob[j]= temp;

            }
        }

        
    }


}

 void binarySearch(Mobile* mob ,int idd)
 {
    Sort( mob);

    
    
 }


int main()
{
    
    Mobile* mob[size];


    mob[0]=new Mobile(101,2,"Iphone");
    mob[1]=new Mobile(102,4,"Oppo");   
    mob[2]=new Mobile(103,5,"SAMSUNG");   
    mob[3]=new Mobile(104,6,"Redmi");   
    mob[4]=new Mobile(105,7,"Vivo");  

    for(int i=0;i<size;i++)
    {
        mob[i]->Display();
        cout<<"\n:::::\n";
    }

   
    
}