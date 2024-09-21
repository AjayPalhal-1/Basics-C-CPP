#include <stdio.h>
#include <string.h>

// struct mngfDate
// {
//     // int date ;
//     // int Month ;
//     // int Year ;

//     // char Date[20];
// };

// struct expDate
// {
//     // int Date ;
//     // int month ;
//     // int year ;
//     // char Date1[20];
// };

struct Product // P should be Capital
{   
    char productName[400];
    int productId;
    int productPrice;
    char mnfgDate[20];
    char expDate1[20];
   
};

int main()
{
    struct Product p1 ,p2 ;


    printf("Enter Product 1  Name  : \n");
    scanf("%s", &p1.productName);

    printf("Enter Product 1 ID : \n");
    scanf("%d", &p1.productId);

    printf("Enter Product 1 Price : \n");
    scanf("%d", &p1.productPrice);

    printf("Enter Manf Date of Product 1 DD/MM/YYYY   : \n");
    scanf("%s", &p1.mnfgDate);

    printf("Enter Exp Date Of Product 1  DD/MM/YYYY   : \n");
    scanf("%s", &p1.expDate1);

    //   p1.mnfgDate[0]= "01/01/2024" ;
    //   p1.expDate1[0]= "01/01/2025";

    printf("Product Name  : %s \n", p1.productName);
    printf("Product ID  : %d \n", p1.productId);
    printf("Product Price : %d \n", p1.productPrice);
    printf("Product Manf Date  : %s \n", p1.mnfgDate);
    printf("Product Expiary Date   : %s \n", p1.expDate1);
 
}