// 10 Product (id, name, quantity, price)


#include<stdio.h>
#include<string.h>



struct Product 
{
    int id;
    char name[10];
    int quantity ;
    int price;

    Product()
    {
        printf("Default Constructor Called\n");
        this->id=0;
        strcpy(this->name,"NOT_GIVEN");
        this->price=0;
        this->quantity=0;

    }

    Product(int id , char* nav , int price , int quant)
    {
        printf("Parameterized  Constructor Called\n");
        this->id=id;
        strcpy(this->name,nav);
        this->price=price;
        this->quantity=quant;

    }

    void setId(int id)
    {
        this->id=id;
    }

      void setName(char* nav)
    {
        strcpy(this->name,nav);
    }
      void setPrice(int price)
    {
        this->price=price;
    }

      void setQuantity(int quant)
    {
        this->quantity=quant;
    }

    int getId()
    {
       return this->id;
    }


    char* getName()
    {
       return this->name;
    }


    int getPrice()
    {
       return this->price;
    }

    int getQuantity()
    {
        return this->quantity;
    }
void disp()
{
    printf("Output Using Display\n");
    printf("prouduct Id : %d\n",this->id);
    printf("prouduct Name : %s\n",this->name);
    printf("prouduct Price : %d\n",this->price);
    printf("prouduct Quantity : %d\n",this->quantity);



}






};

int main()
{
    Product P1,P2(102,"MAZ_PRODUCT",10000,10);



    int id, price, quant;
    char nav[10];

    printf("\n\n\n:::: Now Taking Setters Input For P1 :::: \n");
    printf("Enter The Id : ");
    scanf("%d",&id);
     printf("Enter The Price: ");
    scanf("%d",&price);
     printf("Enter The Prouduct Name : ");
    scanf("%s",nav);
      printf("Enter The Quantity: ");
    scanf("%d",&quant);


   P1.setId(id);
   P1.setName(nav);
   P1.setPrice(price);
   P1.setQuantity(quant);

    printf("Output Using Getter Of Object P1\n");
    printf("prouduct Id : %d\n",P1.getId());
    printf("prouduct Name : %s\n",P1.getName());
    printf("prouduct Price : %d\n",P1.getPrice());
    printf("prouduct Quantity : %d\n\n\n",P1.getQuantity());

    P2.disp();
}