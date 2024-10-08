#include <stdio.h>
#include <string.h>
#include <stdlib.h>
static int totalPlayer = 0;
static int Asize = 50;
typedef struct PlayerManegment
{   
    int JerseyNo;
    int runs;
    int wickets;
    int MatchesPlayed;
    char name[20];

} Player;
void addPlayer(Player *parr)
{
   
    int n;
    printf("\nEnter how many Player's details want to add : ");
    scanf("%d", &n);

    if ((Asize - totalPlayer) < n)
    {
        Asize = Asize + (n - (Asize - totalPlayer));
        parr= (Player*)realloc(parr, Asize *(sizeof(Player)));
    }
     for (int i = 0; i < n; i++,totalPlayer++)
        {
            printf("\nEnter Name of Player                  :");
            fflush(stdin);
            scanf("%s",parr[totalPlayer].name);
            printf("\nEnter Jersey number of Player         :");
            fflush(stdin);
            scanf("%d", &parr[totalPlayer].JerseyNo);
            printf("\nEnter total runs of Player            :");
            scanf("%d", &parr[totalPlayer].runs);
            printf("\nEnter wickets of Players              :");
            scanf("%d", &parr[totalPlayer].wickets);
            printf("\nEnter total MatchesPlayed palyed by Players :");
            scanf("%d", &parr[totalPlayer].MatchesPlayed);
        }
        // totalPlayer=totalPlayer+n;

}
void displayPlayer(Player *parr)
{
    printf("\nAvailable Player is : %d \n",totalPlayer);
    for (int i = 0; i < totalPlayer; i++)
    {
        printf("Player Name: %s\n", parr[i].name);
        printf("Jersey Number: %d\n", parr[i].JerseyNo);
        printf("Total Runs: %d\n", parr[i].runs);
        printf("Total Wickets: %d\n", parr[i].wickets);
        printf("Total MatchesPlayed: %d\n", parr[i].MatchesPlayed);
        printf("\n");
    }
}

void removePlayer(Player *parr)
{
    int jer;
    printf("\nEnter Player Jersey number to remove : ");
    scanf("%d", &jer);
    for (int i = 0; i < Asize; i++)
    {
        if (jer == parr[i].JerseyNo)
        {
            for (i; i < Asize; i++)
            {
                parr[i] = parr[i + 1];
            }
            Asize = Asize - 1;
            totalPlayer = totalPlayer - 1;
        }
        
    }
           printf("\n---------------------------------------Player Deleted----------------------------------------\n");
}
void updatePlayer(Player *parr)
{
    int jer;
    printf("\nEnter Player Jersey number to update : ");
    scanf("%d", &jer);
    for (int i = 0; i < Asize; i++)
    {
        if (jer == parr[i].JerseyNo)
        {
            int ch;
            printf("\n1. Update runs.\n2. Update wickets.\n3. Update MatchesPlayed.\nEnetr Choice : ");
            scanf("%d", &ch);
            if (ch == 1)
            {
                printf("\nEnter updated runs of Player :");
                scanf("%d", &parr[i].runs);
            }
            else if (ch == 2)
            {
                printf("\nEnter updated wickets of Player :");
                scanf("%d", &parr[i].wickets);
            }
            else if (ch == 3)
            {
                printf("\nEnter updated total MatchesPlayed of Player :");
                scanf("%d", &parr[i].MatchesPlayed);
            }
            else
                 printf("\n---------------------------------------Invalid Choice-------------------------------------------\n");
        }
    }
}
void displaySortPlayerbyruns(Player *p)
{
    printf("\nPlayer Details\n\n");
    for (int i = 0; i < totalPlayer; i++)
    {
        printf("Player Name: %s\n", p[i].name);
        printf("Jersey Number: %d\n", p[i].JerseyNo);
        printf("Total Runs: %d\n", p[i].runs);
        printf("Total Wickets: %d\n", p[i].wickets);
        printf("Total Matches Played: %d\n", p[i].MatchesPlayed);
        printf("\n");
    }
}

void displayTopPlayer(Player *p, int i)
{
    if (i > 0)
    {
        printf("\nPlayer Details\n\n");
        for (int j = 0; j < 3; j++, i--)
        {
            printf("Player Name: %s\n", p[i].name);
            printf("Jersey Number: %d\n", p[i].JerseyNo);
            printf("Total Runs: %d\n", p[i].runs);
            printf("Total Wickets: %d\n", p[i].wickets);
            printf("Total Matches Played: %d\n", p[i].MatchesPlayed);
            printf("\n");
        }
    }
    else
    {
        printf("\nPlayer Details\n\n");
        for (int j = 0; j < 3; j++, i++)
        {
            printf("Player Name: %s\n", p[i].name);
            printf("Jersey Number: %d\n", p[i].JerseyNo);
            printf("Total Runs: %d\n", p[i].runs);
            printf("Total Wickets: %d\n", p[i].wickets);
            printf("Total Matches Played: %d\n", p[i].MatchesPlayed);
            printf("\n");
        }
    }
}


void sortPlayerbyRuns(Player *parr)
{
    Player runs[Asize];
    for (int i = 0; i < Asize; i++)
    {
        runs[i] = parr[i];
    }
    for (int i = 0; i < Asize; i++)
    {
        for (int j = i + 1; j < Asize; j++)
        {
            if (runs[i].runs > runs[j].runs)
            {
                Player temp;
                temp = runs[i];
                runs[i] = runs[j];
                runs[j] = temp;
            }
        }
    }
    int run;
    printf("\n1. Top 3 Player with maximum runs.");
    printf("\n2. Bottom 3 Player with minimum runs.");
    printf("\n3. All sorted players by runs.\nEnter Choice : ");
    scanf("%d", &run);
    if (run == 1)
    {
        printf("\n---------------------------This Top 3 Player have maximum runs--------------------------------\n");
        displayTopPlayer(runs, Asize - 1);
    }
    else if (run == 2)
    {
        printf("\n--------------------------This Bottom 3 Player have minimum runs------------------------------\n");
        displayTopPlayer(runs, 0);
    }
    else if(run==3)
    {
        displaySortPlayerbyruns(runs);
    }else
    {
        printf("\n---------------------------------------Invalid Choice-------------------------------------------\n");
    }
}
void sortPlayerbyWicket(Player *parr)
{
    Player wick[Asize];
    for (int i = 0; i < Asize; i++)
    {
        wick[i] = parr[i];
    }
    for (int i = 0; i < Asize; i++)
    {
        for (int j = i + 1; j < Asize; j++)
        {
            if (wick[i].wickets > wick[j].wickets)
            {
                Player temp;
                temp = wick[i];
                wick[i] = wick[j];
                wick[j] = temp;
            }
        }
    }
    int wicket;
    printf("\n1. Top 3 Player with maximum wicket.");
    printf("\n2. Bottom 3 Player with minimum wicket.\n");
    printf("\n3. All sorted players by wickets.\nEnter Choice : ");
    scanf("%d", &wicket);
    if (wicket == 1)
    {
        printf("\n---------------------------This Top 3 Player have maximum wickets-----------------------------\n");
        displayTopPlayer(wick, Asize - 1);
    }
    else if (wicket == 2)
    {
        printf("\n-------------------------This Bottom 3 Player have minimum wickets----------------------------\n");
        displayTopPlayer(wick, 0);
    }
    else if(wicket==3)
    {
        displaySortPlayerbyruns(wick);
    }
    else
    {
        printf("---------------------------------------Invalid Choice-------------------------------------------\n");
    }
}
void displaySortPlayer(Player *parr)
{
    int res;
    printf("\n1. Players having maximum and minimum runs.");
    printf("\n2. Players having maximum and minimum wickets.\nEnter your choice : ");
    scanf("%d", &res);
    if (res == 1)
    {
        sortPlayerbyRuns(parr);
    }
    else if (res == 2)
    {
        sortPlayerbyWicket(parr);
    }
    else
    {
        printf("---------------------------------------Invalid Choice-------------------------------------------\n");
    }
}
void displayOnePlayer(Player* parr,int i)
{
        printf("\n                                         Player Details                                          \n\n");
        printf("------------------------------------------------------------------------------------------------\n");
        printf("| %-20s | %-15s | %-15s | %-15s | %-15s |\n", 
           "Player Name", "Jersey Number", "Total Runs", "Total Wickets", "Total MatchesPlayed");
        printf("------------------------------------------------------------------------------------------------\n");
        printf("| %-20s | %-15d | %-15d | %-15d | %-15d |\n", 
               parr[i].name, parr[i].JerseyNo, parr[i].runs, parr[i].wickets, parr[i].MatchesPlayed);
        printf("------------------------------------------------------------------------------------------------\n");

}
void searchByName(Player *parr)
{
    char name[20];
    printf("\nEnter Name of Player : ");
    scanf("%s", name);
    for (int i = 0; i < Asize; i++)
    {
        if (strcmp(name, parr[i].name) == 0)
            displayOnePlayer(parr, i);
    }
}
void searchByJerNo(Player *parr)
{
    int jer;
    printf("\nEnter Player Jersey number : ");
    scanf("%d", &jer);
    for (int i = 0; i < Asize; i++)
    {
        if (jer == parr[i].JerseyNo)
            displayOnePlayer(parr, i);
    }
}
void searchPlayer(Player *parr)
{
    int ser;
    printf("\nHow would you like to search Player you have 2 options given below.");
    printf("\n1.Search by Player's Jersey number.");
    printf("\n2.Search by Player's Name.\nEnter your choice : ");
    scanf("%d", &ser);
    if (ser == 1)
    {
        searchByJerNo(parr);
    }
    else if (ser == 2)
    {
        searchByName(parr);
    }
    else
    {
        printf("---------------------------------------Invalid Choice-------------------------------------------\n");
    }
}
int menu()
{
    int choice;
    printf("\nEnter choice : \n1. Add Player.\n2. Remove Player.");
    printf("\n3. Display sorted Players.\n4. Update Player details.");
    printf("\n5. Search Player.\n6. Display all Players.");
    printf("\n7. Exit.");
    scanf("%d", &choice);
    return choice;
    
}
void hardcodedPlayers(Player *parr)
{
    
// Player 1
parr[0].runs = 34357;
strcpy(parr[0].name, "Sachin Tendulkar");
parr[0].JerseyNo = 10;
parr[0].wickets = 201;
parr[0].MatchesPlayed = 664;

// Player 2
parr[1].runs = 25706;
strcpy(parr[1].name, "Virat Kohli");
parr[1].JerseyNo = 18;
parr[1].wickets = 8;
parr[1].MatchesPlayed = 510;

// Player 3
parr[2].runs = 18313;
strcpy(parr[2].name, "Rohit Sharma");
parr[2].JerseyNo = 45;
parr[2].wickets = 142;
parr[2].MatchesPlayed = 460;

// Player 4
parr[3].runs = 18633;
strcpy(parr[3].name, "MS Dhoni");
parr[3].JerseyNo = 7;
parr[3].wickets = 1;
parr[3].MatchesPlayed = 538;

// Player 5
parr[4].runs = 13398;
strcpy(parr[4].name, "Rahul Dravid");
parr[4].JerseyNo = 19;
parr[4].wickets = 4;
parr[4].MatchesPlayed = 509;

// Player 6
parr[5].runs = 11867;
strcpy(parr[5].name, "Sunil Gavaskar");
parr[5].JerseyNo = 10;
parr[5].wickets = 1;
parr[5].MatchesPlayed = 233;

// Player 7
parr[6].runs = 10889;
strcpy(parr[6].name, "Sourav Ganguly");
parr[6].JerseyNo = 99;
parr[6].wickets = 132;
parr[6].MatchesPlayed = 424;

// Player 8
parr[7].runs = 8273;
strcpy(parr[7].name, "Yuvraj Singh");
parr[7].JerseyNo = 12;
parr[7].wickets = 148;
parr[7].MatchesPlayed = 402;

// Player 9
parr[8].runs = 5198;
strcpy(parr[8].name, "Virender Sehwag");
parr[8].JerseyNo = 44;
parr[8].wickets = 136;
parr[8].MatchesPlayed = 374;

// Player 10
parr[9].runs = 12367;
strcpy(parr[9].name, "Shikhar Dhawan");
parr[9].JerseyNo = 25;
parr[9].wickets = 4;
parr[9].MatchesPlayed = 302;

// Player 11
parr[10].runs = 10625;
strcpy(parr[10].name, "Gautam Gambhir");
parr[10].JerseyNo = 5;
parr[10].wickets = 0;
parr[10].MatchesPlayed = 242;

 totalPlayer = 11;
}


int main()
{
    
    Player *parr = (Player *)malloc(sizeof(Player) * Asize);
    hardcodedPlayers(parr);
    int ch;
    do
    {
        ch=menu();
    switch (ch)
    {
    case 1:
        addPlayer(parr);
        break;
    case 2:
        removePlayer(parr);
        break;
    case 3:
        searchPlayer(parr);
        break;
    case 4:
        updatePlayer(parr);
        break;
    case 5:
        displaySortPlayer(parr);
        break;
    case 6:
        displayPlayer(parr);
        break;
    default:
        break;
    }
    } while (ch!=7);
}