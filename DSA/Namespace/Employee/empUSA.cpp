#include"empUSA.h"

namespace usa
{

 Employee:: Employee()
{ 
    id=0;
    sal=0;
    strcpy(this->name,"NOT_GIVEN");
}

Employee :: Employee(int  id , int sal , char* nav)
{
    this->id=id;
    this->sal=sal;
    strcpy(this->name,nav);

}
void Employee :: display()
{
    cout<<endl<<"USA Employee ";
    cout<<"Employee ID     : "<<this->id<<endl;
    cout<<"Employee Salary :  "<<this->sal<<endl;
    cout<<"Employee Name   : "<<this->name<<endl;

}

    
   


}

