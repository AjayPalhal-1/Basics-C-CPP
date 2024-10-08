//  respective attributes, including
//  Jersey Number
//   Player NoPlayer,
//   Runs
//    Wickets
//    Matches played.


#include<stdlib.h>
#include <stdio.h>
int menu();



typedef struct Player
{
    int Jersey_No;
    char PlayerName[20];
    int Price;
    int rating;
    int Matches_played;
    int runs;

} Player;

 int NoPlayer =0; // Global Declarations
  int Asize=1; // Global Size 




void AddPlayer(Player *b)
{
    for (int i=0;i<Asize;i++)
    {
        printf("\n\nProvide %d Player Id :", i + 1);
        scanf("%d",&b[i].Jersey_No);

        printf("\nProvide Player NoPlayer :");
        // fflush(stdin);
        scanf("%s",b[i].PlayerName);

        printf("\nProvide Player Price :");
        scanf("%d", &b[i].Price);

        printf("\nProvide Player rating :");
        scanf("%d",&b[i].rating);

        printf("\nProvide Matches_played by Player :");
        scanf("%d",&b[i].Matches_played);

        NoPlayer++;
        printf("\nStored Players Are : %d :",NoPlayer);
    }
}

void Disp(Player *b)

{       printf("\nHello\n");

    for (int i=0;i<=NoPlayer;i++)
    {
        // printf("Provide %d Player Id\n",i);
        printf("\n\nPlayer NoPlayer : %s         ", b[i].PlayerName);
        printf("\nPlayer Jersey No. : %d     ", b[i].Jersey_No);
         printf("\nNo Of Played Matches : %d ", b[i].Matches_played);
        printf("\nPlayer Price : %d          ", b[i].Price);
        printf("\nPlayer Rating : %d         ", b[i].rating);
       
    }
}

 Player*  IncMemoary(Player* parr, int Usize)
 {
    Asize =Asize+(NoPlayer-Usize);

    parr = realloc(parr,Asize);
    return parr;
    
 }


int menu()
{
    int choice;
    printf("\t\n\nFor Adding Player Enter    1");
    printf("\t\nFor Display Player Enter   2");
    printf("\t\nFor Updating Player Enter  3");
    printf("\t\nFor Deleting Player Enter  4");
    printf("\t\nFor Searching Player Enter 5");
    printf("\t\nFor Exit Enter             6\n");
    scanf("%d", &choice);
    return choice;
}

void hardcodedPlayers(Player *parr)
{
    
// Player 1
parr[0].runs = 34357;
strcpy(parr[0].NoPlayer, "Sachin Tendulkar");
parr[0].JerseyNo = 10;
parr[0].wickets = 201;
parr[0].MatchesPlayed = 664;

// Player 2
parr[1].runs = 25706;
strcpy(parr[1].NoPlayer, "Virat Kohli");
parr[1].JerseyNo = 18;
parr[1].wickets = 8;
parr[1].MatchesPlayed = 510;

// Player 3
parr[2].runs = 18313;
strcpy(parr[2].NoPlayer, "Rohit Sharma");
parr[2].JerseyNo = 45;
parr[2].wickets = 142;
parr[2].MatchesPlayed = 460;

// Player 4
parr[3].runs = 18633;
strcpy(parr[3].NoPlayer, "MS Dhoni");
parr[3].JerseyNo = 7;
parr[3].wickets = 1;
parr[3].MatchesPlayed = 538;

// Player 5
parr[4].runs = 13398;
strcpy(parr[4].NoPlayer, "Rahul Dravid");
parr[4].JerseyNo = 19;
parr[4].wickets = 4;
parr[4].MatchesPlayed = 509;

// Player 6
parr[5].runs = 11867;
strcpy(parr[5].NoPlayer, "Sunil Gavaskar");
parr[5].JerseyNo = 10;
parr[5].wickets = 1;
parr[5].MatchesPlayed = 233;

// Player 7
parr[6].runs = 10889;
strcpy(parr[6].NoPlayer, "Sourav Ganguly");
parr[6].JerseyNo = 99;
parr[6].wickets = 132;
parr[6].MatchesPlayed = 424;

// Player 8
parr[7].runs = 8273;
strcpy(parr[7].NoPlayer, "Yuvraj Singh");
parr[7].JerseyNo = 12;
parr[7].wickets = 148;
parr[7].MatchesPlayed = 402;

// Player 9
parr[8].runs = 5198;
strcpy(parr[8].NoPlayer, "Virender Sehwag");
parr[8].JerseyNo = 44;
parr[8].wickets = 136;
parr[8].MatchesPlayed = 374;

// Player 10
parr[9].runs = 12367;
strcpy(parr[9].NoPlayer, "Shikhar Dhawan");
parr[9].JerseyNo = 25;
parr[9].wickets = 4;
parr[9].MatchesPlayed = 302;

// Player 11
parr[10].runs = 10625;
strcpy(parr[10].NoPlayer, "Gautam Gambhir");
parr[10].JerseyNo = 5;
parr[10].wickets = 0;
parr[10].MatchesPlayed = 242;

 totalPlayer = 11;
}

int main()
{

   
    Player parr;
    parr  =(Player *)malloc(sizeof(Player)*Asize); // created array on heap mem
      int Usize; 



    int ch;
    do
    {
        ch = menu();
      

        switch (ch)
        {
        case 1:
            printf("Enter The Nos Of Player You Want Add \n");
            scanf("%d",&Usize);


          if(Usize>Asize)
          {
            //   Asize = Usize + Asize;
            //   parr= (int*)malloac(sizeof(Player)*Asize);
           parr[]= IncMemoary( parr, Usize);
          }
    
   
            AddPlayer(parr);
            printf("\n");
            break;

        case 2:
            printf("hi");
            Disp(parr);
            break;
       
        default:
            printf("Invalid choice lalla..");
            break;
        }

    } while (ch != 6);


    
}

//  Player  IncMemoary( int Usize)
//  {
//     Asize = Usize + Asize;

//     int *p = (int*)malloac(sizeof(Player)*Asize);
    
//  }
