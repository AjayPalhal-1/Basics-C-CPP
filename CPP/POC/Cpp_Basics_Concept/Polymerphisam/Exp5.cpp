#include <stdio.h>

 struct Marine_Creature
{

  virtual void toMove() 
    {
         printf("\nGeneral Marine_Creature   Is Roatating ...");

    }

};

 struct SmallFish  : public Marine_Creature
{

    SmallFish() {}

    void toMove() 
    {
     printf("\nSmallFish Is Moving  ...");

    }
};

 struct Dolphin : public Marine_Creature
{

    Dolphin() {}

    void toMove() 
    {
     printf("\nDolphin Is Moving  ...");

    }
};

 struct Crocodile : public Marine_Creature
{

    Crocodile() {}

    void toMove() 
    {
     printf("\nCrocodile Is Moving  ...");

    }
};

struct  Turtle: public Marine_Creature
{

    Turtle() {}

    void toMove() 
    {           
     printf("\nTurtle Is Moving  ...");
    }

    };

int main()
{
    // Array of Marine_Creature:  pointers
    Marine_Creature*  MC1[4];

    MC1[0] = new Turtle();
    MC1[1] = new Crocodile();
    MC1[2] = new Dolphin();
    MC1[3] = new SmallFish();

    for (int i = 0; i < 4; i++)
    {
        MC1[i]->toMove();
    }

    // // Clean up
    // for (int i = 0; i < 4; i++)
    // {
    //     delete MC1[i];
    // }

    return 0;
}