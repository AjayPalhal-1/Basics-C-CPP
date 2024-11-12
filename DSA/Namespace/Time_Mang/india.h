#include<iostream>


 namespace india 
{
    class Time 
    {
        int hr; 
        int min;
        int sec;


        public:

        Time();// default cons 
        Time (int , int  , int ); // param const    
        void display();
    };

}