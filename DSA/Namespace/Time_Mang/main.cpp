

#include"usa.h"
// #include"india.h"  when we use .h file  we need run it on cmd and we need to be folder that we 
//    created this file sepration vala folder and then we need to write follwing cammands
//    cmd  1. g++ *.cpp -o main //Compile 2./main //Run


#include"india.cpp"  //when we use .cpp then we dont need to follow  above process   


using namespace usa;



int main()
{
     Time t1 (12,6,60);
     t1.display();

    india ::Time t2; // in header we need add india.h for getting Time class Of India's Namespace ;
     t2.display();

     return 0;
}