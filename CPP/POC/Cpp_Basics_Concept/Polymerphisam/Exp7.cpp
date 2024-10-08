#include <stdio.h>

 struct Workout 
{

  virtual void BuildingMuscle() 
    {
     printf("\nGenreliazed Workout Performed.");

    }

};

 struct NormalWorkout  : public Workout 
{

    NormalWorkout() {};
     void BuildingMuscle() 
    {
     printf("\nNormalWorkout  Performed.");

    }
};

 struct Strtching : public Workout 
{

    Strtching() {}

    void BuildingMuscle() 
    {
     printf("\nStrtching Workout Performed.");

    }
};

 struct Calestenic : public Workout 
{

    Calestenic() {}

    void BuildingMuscle() 
    {
     printf("\nCalestenic Workout Performed.");

    }
};

struct  WeightTraining: public Workout 
{

    WeightTraining() {}

    void BuildingMuscle() 
    {           
     printf("\nWeightTraining  Workout Performed.");
    }

    };

int main()
{
    // Array of Workout  pointers
    Workout  *L1[4];

    L1[0] = new WeightTraining();
    L1[1] = new Calestenic();
    L1[2] = new Strtching();
    L1[3] = new NormalWorkout();

    for (int i = 0; i < 4; i++)
    {
        L1[i]->BuildingMuscle();
    }

    // Clean up
    for (int i = 0; i < 4; i++)
    {
        delete L1[i];
    }

    return 0;
}