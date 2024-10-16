// 3. Write a function to approve the loan for student based on there percentage and for
// employee based on there annual salary.

// Condition for student:

// Above 80: 2 lakh
// Between 60-80: 1 lakh
// Between 40-50: 50 k
// Below 40: no loan approved

// Condition for employee:

// Above 12 LPA: 7 lakh
// Between 10-12 lpa: 6 lakh
// Between 6-10 lpa: 5 lakh
// Between 4-6 lpa: 4 lakh
// Below 4 lpa: no loan approved


#include<iostream>
using namespace std;

struct loan 
{
    
    loan(){

    }

    
    void approveloan(int percetage)
    {
       if(percetage>=80)
    {  
      cout<< "Your Eligible TO Get 2 Lakh Loan"<< endl;
    }
    

     else if(percetage >= 40 && percetage <= 50)
    {  
            cout<< "Your Eligible TO Get 50k Loan"<< endl;

      
    }

    else if(percetage >= 50 && percetage <= 60)
    {  
            cout<< "Your Eligible TO Get 75k Loan"<< endl;

      
    }

    else if( percetage >60 && percetage < 80  )
    {
            cout<< "Your Eligible TO Get 1 Lakh Loan"<< endl;

    }

     else if(percetage<40)
    {
      cout<< "Your Not Eligible Loan"<< endl;

    }
  }

void approveloan(double salary )
{
  if(salary >= 1200000)
  {
  cout<< "Your Eligible TO Get 7 Lakh Loan"<< endl;

  }
  else if (salary >= 1000000 && salary < 1200000)
  {
      cout<< "Your Eligible TO Get 6 Lakh Loan"<< endl;

  }
else if (salary >= 6000000 && salary < 1000000)
  {
      cout<< "Your Eligible TO Get 5 Lakh Loan"<< endl;

  }

  else if (salary >= 4000000 && salary < 600000)
  {
      cout<< "Your Eligible TO Get 6 Lakh Loan"<< endl;

  }
  else if (salary < 400000)
  {
      cout<< "Your Not Eligible For Getting Any Kind Of  Loan"<< endl;

  }

}
    
    

    
   
};

int main ()
{

    loan l1;


    int percetage ;
    cout<< "Enter Student Percentage : ";   
    cin >> percetage;
    l1.approveloan(percetage);


    double salary  ;
    cout<< "Enter Employee Salary  : ";   
    cin >> salary;
    l1.approveloan(salary);

   
    
   

    return 0;
}