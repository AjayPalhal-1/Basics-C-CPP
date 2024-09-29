//  respective attributes, including
//  Jersey Number
//   Player Name,
//   Runs
//    Wickets
//    Matches played.



#include <stdio.h>
int menu();

typedef struct Player
{
    int Jersey_No;
    char PlayerName[20];
    int Price;
    int rating;
    int Matches_played;

} Player;

 int NoOfBook = 0;


Player AddPlayer(Player *b, int* size)
{
    for (int i = 0; i < NoOfBook; i++)
    {
        printf("Provide %d Player Id\n", i + 1);
        scanf("%d", &b[i].Jersey_No);

        printf("Provide Player Name\n");
        fflush(stdin);
        gets(b[i].PlayerName);

        printf("Provide Player Price\n");
        scanf("%d", &b[i].Price);

        printf("Provide Player rating\n");
        scanf("%d", &b[i].rating);

        printf("Provide Matches_played by Player ");
          scanf("%d",&b[i].Matches_played);
    }
}

Player Disp(Player *b, int size)
{
    for (int i =NoOfBook; i < size; i++)
    {
        // printf("Provide %d Player Id\n",i);
        printf("Player ID Is : %d\n", b[i].Jersey_No);

        printf("Player Name : %s \n", b[i].PlayerName);

        printf("Player Price : %d\n", b[i].Price);

        printf("Player Rating : %d\n", b[i].rating);

        printf("No Of Played Maches : %d\n", b[i].Matches_played);
    }
}


int menu()
{
    int choice;
    printf("\t\nFor Adding Player Enter 1");
    printf("\t\nFor Display Player Enter 2");
    printf("\t\nFor Updating Player Enter 3");
    printf("\t\nFor Deleting Player Enter 4");
    printf("\t\nFor Searchong Player Enter 5");
    printf("\t\nFor Exit Enter 6\n");
    scanf("%d", &choice);
    return choice;
}


int main()
{

    int size=2 ;
    Player b[size];
    


    int ch;
    do
    {
        ch = menu();
        switch (ch)
        {
        case 1:
            printf(" Enter The Nos Of Player You Want Add \n");
            scanf("%d", &size);
            AddPlayer(b, size);
            printf("\n");
            break;

        case 2:
            Disp(b, size);
            break;
       
        default:
            printf("Invalid choice lalla..");
            break;
        }

    } while (ch != 6);
}
