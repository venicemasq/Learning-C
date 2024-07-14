struct stats {
    int points;
    int games;
};

#include <stdio.h>

#define nPLayers 5

int main(void){
    struct stats players[nPLayers];

    for(int i = 0; i < nPLayers; i++){
        printf("Enter Player %d's point total: ", i + 1);
        scanf("%d", &players[i].points);
        printf("Enter Player %d's game total: ", i + 1);
        scanf("%d", &players[i].games);
    }

    printf("\n\n");

    for(int i = 0; i < nPLayers; i++){
        printf("Player %d's scoring average was %.2f ppg.\n", i + 1, (float)players[i].points / players[i].games);
    }

    return 0;

}

