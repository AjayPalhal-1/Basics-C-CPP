#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int totalPlayer = 0;
int Asize = 11;
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
     for (int i = totalPlayer; i <totalPlayer+n; i++)
        {
            printf("\nEnter Name of Player: ");
            scanf("%s",parr[i].name);
            printf("\nEnter Jersey number of Player: ");
            scanf("%d", &parr[i].JerseyNo);
            printf("\nEnter total runs of Player: ");
            scanf("%d", &parr[i].runs);
            printf("\nEnter wickets of Players: ");
            scanf("%d", &parr[i].wickets);
            printf("\nEnter total MatchesPlayed by Players: ");
            scanf("%d", &parr[i].MatchesPlayed);
        }
        totalPlayer = totalPlayer + n;

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
    printf("\nEnter Player Jersey number to remove: ");
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
    printf("Player Deleted\n");
}
void updatePlayer(Player *parr)
{
    int jer;
    printf("\nEnter Player Jersey number to update: ");
    scanf("%d", &jer);
    for (int i = 0; i < Asize; i++)
    {
        if (jer == parr[i].JerseyNo)
        {
            int ch;
            printf("\n1. Update runs.\n2. Update wickets.\n3. Update MatchesPlayed.\nEnter Choice: ");
            scanf("%d", &ch);
            if (ch == 1)
            {
                printf("\nEnter updated runs of Player: ");
                scanf("%d", &parr[i].runs);
            }
            else if (ch == 2)
            {
                printf("\nEnter updated wickets of Player: ");
                scanf("%d", &parr[i].wickets);
            }
            else if (ch == 3)
            {
                printf("\nEnter updated total MatchesPlayed of Player: ");
                scanf("%d", &parr[i].MatchesPlayed);
            }
            else
                printf("Invalid Choice\n");
        }
    }
}
void displaySortPlayerbyruns(Player *p)
{
    for (int i = 0; i < totalPlayer; i++)
    {
        printf("Player Name: %s\n", p[i].name);
        printf("Jersey Number: %d\n", p[i].JerseyNo);
        printf("Total Runs: %d\n", p[i].runs);
        printf("Total Wickets: %d\n", p[i].wickets);
        printf("Total MatchesPlayed: %d\n", p[i].MatchesPlayed);
        printf("\n");
    }
}
void displayTopPlayer(Player *p, int i)
{
    if (i > 0)
    {
        for (int j = 0; j < 3; j++, i--)
        {
            printf("Player Name: %s\n", p[i].name);
            printf("Jersey Number: %d\n", p[i].JerseyNo);
            printf("Total Runs: %d\n", p[i].runs);
            printf("Total Wickets: %d\n", p[i].wickets);
            printf("Total MatchesPlayed: %d\n", p[i].MatchesPlayed);
            printf("\n");
        }
    }
    else
    {
        for (int j = 0; j < 3; j++, i++)
        {
            printf("Player Name: %s\n", p[i].name);
            printf("Jersey Number: %d\n", p[i].JerseyNo);
            printf("Total Runs: %d\n", p[i].runs);
            printf("Total Wickets: %d\n", p[i].wickets);
            printf("Total MatchesPlayed: %d\n", p[i].MatchesPlayed);
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
    printf("\n3. All sorted players by runs.\nEnter Choice: ");
    scanf("%d", &run);
    if (run == 1)
    {
        printf("This Top 3 Player have maximum runs\n");
        displayTopPlayer(runs, Asize - 1);
    }
    else if (run == 2)
    {
        printf("This Bottom 3 Player have minimum runs\n");
        displayTopPlayer(runs, 0);
    }
    else if(run == 3)
    {
        displaySortPlayerbyruns(runs);
    }
    else
    {
        printf("Invalid Choice\n");
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
    printf("\n2. Bottom 3 Player with minimum wicket.");
    printf("\n3. All sorted players by wickets.\nEnter Choice: ");
    scanf("%d", &wicket);
    if (wicket == 1)
    {
        printf("This Top 3 Player have maximum wickets\n");
        displayTopPlayer(wick, Asize - 1);
    }
    else if (wicket == 2)
    {
        printf("This Bottom 3 Player have minimum wickets\n");
        displayTopPlayer(wick, 0);
    }
    else if(wicket == 3)
    {
        displaySortPlayerbyruns(wick);
    }
    else
    {
        printf("Invalid Choice\n");
    }
}
void displaySortPlayer(Player *parr)
{
    int res;
    printf("\n1. Players having maximum and minimum runs.");
    printf("\n2. Players having maximum and minimum wickets.\nEnter your choice: ");
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
        printf("Invalid Choice\n");
    }
}
void displayOnePlayer(Player* parr, int i)
{
    printf("Player Name: %s\n", parr[i].name);
    printf("Jersey Number: %d\n", parr[i].JerseyNo);
    printf("Total Runs: %d\n", parr[i].runs);
    printf("Total Wickets: %d\n", parr[i].wickets);
    printf("Total MatchesPlayed: %d\n", parr[i].MatchesPlayed);
    printf("\n");
}
void searchByName(Player *parr)
{
    char name[20];
    printf("\nEnter Name of Player: ");
    scanf("%s", name);
    for (int i = 0; i < Asize; i++)
    {
        if (strcmp(name, parr[i].name) == 0)
        {
            displayOnePlayer(parr, i);
            return;
        }
    }
    printf("Player not Found\n");
}
void searchByJerseyNo(Player *parr)
{
    int JerseyNo;
    printf("\nEnter Player Jersey number: ");
    scanf("%d", &JerseyNo);
    for (int i = 0; i < Asize; i++)
    {
        if (parr[i].JerseyNo == JerseyNo)
        {
            displayOnePlayer(parr, i);
            return;
        }
    }
    printf("Player not Found\n");
}
void searchPlayer(Player *parr)
{
    int ch;
    printf("\n1. Search by Player Name.");
    printf("\n2. Search by Jersey number.\nEnter Choice: ");
    scanf("%d", &ch);
    if (ch == 1)
    {
        searchByName(parr);
    }
    else if (ch == 2)
    {
        searchByJerseyNo(parr);
    }
    else
    {
        printf("Invalid Choice\n");
    }
}
int main()
{
    Player *parr = (Player*) malloc(Asize * sizeof(Player));
    int ch;
    do
    {
        printf("\nMenu\n");
        printf("1. Add Player\n");
        printf("2. Remove Player\n");
        printf("3. Update Player\n");
        printf("4. Display Player\n");
        printf("5. Display Sorted Player\n");
        printf("6. Search Player\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            addPlayer(parr);
            break;
        case 2:
            removePlayer(parr);
            break;
        case 3:
            updatePlayer(parr);
            break;
        case 4:
            displayPlayer(parr);
            break;
        case 5:
            displaySortPlayer(parr);
            break;
        case 6:
            searchPlayer(parr);
            break;
        case 7:
            break;
        default:
            printf("Invalid Choice\n");
        }
    } while (ch != 7);
    free(parr);
    return 0;
}
