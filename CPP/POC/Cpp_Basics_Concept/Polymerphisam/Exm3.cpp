#include <stdio.h>

 struct Planet
{

  virtual void toRotate() 
    {
         printf("\nGeneral Planet  Is Roatating ...");

    }

};

 struct Sun : public Planet
{

    Sun() {}

    void toRotate() 
    {
     printf("\nSun Is Roatating ...");

    }
};

 struct Shani : public Planet
{

    Shani() {}

    void toRotate() 
    {
     printf("\nShanai Is Roatating ...");

    }
};

 struct Guru : public Planet
{

    Guru() {}

    void toRotate() 
    {
     printf("\nGuru Is Roatating ...");

    }
};

struct  Managal: public Planet
{

    Managal() {}

    void toRotate() 
    {           
     printf("\nManagal Is Roatating ...");
    }

    };

int main()
{
    // Array of Planet pointers
    Planet *Planets[4];

    Planets[0] = new Sun();
    Planets[1] = new Shani();
    Planets[2] = new Guru();
    Planets[3] = new Managal();

    for (int i = 0; i < 4; i++)
    {
        Planets[i]->toRotate();
    }

    // // Clean up
    // for (int i = 0; i < 4; i++)
    // {
    //     delete Planets[i];
    // }

    return 0;
}