#include <stdio.h>

 struct Storage
{

  virtual void toStore() 
    {
     printf("\nData Stored On Genral Storage  .");

    }

};

 struct Memory : public Storage
{

    Memory() {}

    void toStore() 
    {
     printf("\nData Storedf In Memory  .");

    }
};

 struct DVD : public Storage
{

    DVD() {}

    void toStore() 
    {
     printf("\nData Storedf In DVD .");

    }
};

 struct SSD : public Storage
{

    SSD() {}

    void toStore() 
    {
     printf("\nData Storedf In SSD .");

    }
};

struct  PD: public Storage
{

    PD() {}

    void toStore() 
    {           
     printf("\nData Storedf In PD .");
    }

    };

int main()
{
    // Array of Storage pointers
    Storage *S1[4];

    S1[0] = new Memory();
    S1[1] = new DVD();
    S1[2] = new SSD();
    S1[3] = new PD();

    for (int i = 0; i < 4; i++)
    {
        S1[i]->toStore();
    }

    // // Clean up
    // for (int i = 0; i < 4; i++)
    // {
    //     delete S1[i];
    // }

    return 0;
}