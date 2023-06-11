#include "../include/tabManipulation.h"

int main(){

    srand(time(NULL));

    int lenghTab;
    printf("Witch lengh do you want : ");
    scanf("%d",&lenghTab);

    ball **ballTab = genTab(lenghTab);

    initTab(ballTab,lenghTab);

    printTab(ballTab,lenghTab);   

    for (int updates = 0 ; updates<lenghTab ; updates++) {
        
        printf("\e[1;1H\e[2J");

        interationTab(ballTab,lenghTab);
        printTab(ballTab,lenghTab);

        usleep(250*1000);
    }

}