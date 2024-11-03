// 2. Implement an object-oriented system to showcase inheritance in a geometric shapes
// application. Begin by creating a base class Shape with a common attribute area.
// Include essential methods such as a constructor, a member function to calculate the
// area, and another member function to display the shape's information.
// Derive three classes from the base class Shape: Triangle, Circle, and Rectangle.
// Each derived class should have its own set of attributes (height and base for
// Triangle, radius for Circle, length and width for Rectangle) and methods. The
// derived classes must inherit the area attribute and methods from the base class.

#include<iostream>
using namespace std;


class Shape
{
    private:
    int Area;

     public :

// Defoult  Constructor: Initializes the attributes as 0.
     Shape()
     {
        this->Area=0;
     }

    //  Constructor: Initializes the attributes.

    Shape(int a)
     {
        this->Area=a;
     }

    //  CalculateArea: Calculates and sets the area based on the shape.
    virtual void CalculateArea()
    {
        cout<<"Area Of Shape : "<<this->Area<<endl;
    }

    // Display: Displays the shape's information, including the calculated area.
    void Display()
    {
        cout <<"Area From Base Class : "<<this->Area<<endl;
    }


};

class Trangle : public Shape
{ 
    private:
    int height ;
    int base ;

    public:
// Defoult  Constructor: Initializes the attributes as 0 Of Trangle .

    Trangle():Shape()
    {
        this->base=0;
        this->height=0;

    }

    //   Constructor: Initializes the attributes as 0. oF trangle 

    Trangle(int h, int b , int area):Shape(area)
    {
        this->base=b;
        this->height=h;
    }

    // CalculateArea: method to calculate the area of the triangle.

    void CalculateArea()
    {
        cout<<"Area Of Trangel : "<< (0.5)* this->base * this->height<<endl;
    }

// Display: Overrides the base class method to display triangle-specific information.
 void Display()
 {
    cout<<"Height OF Trangle : "<<this->height<<endl;
    cout<<"Base OF Trangle   : "<<this->base<<endl<<endl;
        Shape::Display();




 }

};


class Circle:Shape
{
    private:
    int radius ;

    public:

    Circle():Shape()
    {
        radius=0;
    }

    Circle(int r ,int area):Shape(area)
    {
        radius=r;
    }

    // CalculateArea: method to calculate the area of the Circle.

    void CalculateArea()
    {
        cout<<"Area Of Circle  : "<< 3.14 * this->radius*this->radius <<endl;
    }

    // Display: Overrides the base class method to display triangle-specific information.
   void Display()
  {
    cout<<"Radius OF Circle : "<<this->radius <<endl;
        Shape::Display();

    
   }



};

class Reactangle : public Shape
{
    int lenth ;
    int width;

    public :

    Reactangle():Shape()
    {
        lenth=0;
        width=0;
    }

    Reactangle(int w , int l , int area ):Shape(area)
    {
          lenth=l;
          width=w;
    }

    // CalculateArea: method to calculate the area of the Reactangle.

    void CalculateArea()
    {
        cout<<"Area Of Reactangle  : "<<this->lenth * this->width <<endl;
    }

    // Display: Overrides the base class method to display triangle-specific information.
   void Display()
  {
    cout<<"width OF Reactangle : "<<this->width <<endl;
    cout<<"lenth OF Reactangle : "<<this->lenth <<endl;
        Shape::Display();


    
   }



};





int main()
{
    Shape S(100);
    cout << "Shape  Information:" << endl;
    S.Display();
    S.CalculateArea();

    cout<<endl;

    Trangle T(200, 400,400);
    cout << "Trangle  Information:" << endl;
    T.Display();
    T.CalculateArea();

    cout<<endl;

    Circle C1(10,30);
    cout << "Circle  Information:" << endl;
    C1.CalculateArea();
    C1.Display();

    cout<<endl;

    Reactangle R1(100, 200,200); 
    cout << "Reactangle  Information:" << endl;
    R1.CalculateArea();
    R1.Display();

    cout<<endl<<endl<<endl;


}