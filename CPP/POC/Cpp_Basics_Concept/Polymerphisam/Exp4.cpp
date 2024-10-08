#include <stdio.h>

 struct Nueron 
{

  virtual void Conveymsg() 
    {
         printf("\nGeneral Nueron   Is Roatating ...");

    }

};

 struct JointNueron  : public Nueron 
{

    JointNueron() {}

    void Conveymsg() 
    {
     printf("\nJoint neuron sends a message to muscles ...");

    }
};

 struct MotorNeuron : public Nueron 
{

    MotorNeuron() {}

    void Conveymsg() 
    {
     printf("\nMotor neuron sends a message to muscles ...");

    }
};

 struct InterNueron : public Nueron 
{

    InterNueron() {}

    void Conveymsg() 
    {
     printf("\nInter neuron sends a message  ...");

    }
};

struct  TestNueron: public Nueron 
{

    TestNueron() {}

    void Conveymsg() 
    {           
     printf("\nTest neuron sends a message  ...");
    }

    };

int main()
{
    // Array of Nueron  pointers
    Nueron  *Nuerons[4];

    Nuerons[0] = new TestNueron();
    Nuerons[1] = new MotorNeuron();
    Nuerons[2] = new InterNueron();
    Nuerons[3] = new JointNueron();

    for (int i = 0; i < 4; i++)
    {
        Nuerons[i]->Conveymsg();
    }

    // // Clean up
    // for (int i = 0; i < 4; i++)
    // {
    //     delete Nuerons[i];
    // }

    return 0;
}