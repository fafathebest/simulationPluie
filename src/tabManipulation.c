#include "../include/tabManipulation.h"

int usleep(__useconds_t usec);

void initTab(ball ** ballTab,int lenghTab){
    for(int y=0;y<lenghTab;y++){
        for(int x=0;x<lenghTab;x++){
            ballTab[y][x]=cleanBall();
            if (rand()%lenghTab<=sqrt(lenghTab/2)){
                ballTab[y][x].isBall = 1;
            }
            else{
                ballTab[y][x].isBall = 0;
            }
        }
    }
}

void printTab(ball ** ballTab,int lenghTab){
    for(int y=0;y<lenghTab;y++){
        for(int x=0;x<lenghTab;x++){
            if (ballTab[y][x].isBall==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int verrifyPlacementTab(ball ** ballTab,int lenghTab,coord currentCase,int advancement){
    if (ballTab[currentCase.y+1][currentCase.x].isBall==0){
        return currentCase.x;
    }
    else{
        advancement = -advancement + (-1)*(advancement%2==1)+(1)*(advancement%2==0);
        currentCase.x += advancement;
        if (currentCase.x<0||currentCase.x>lenghTab){
            return -1;
        }
        return verrifyPlacementTab(ballTab,lenghTab,currentCase,advancement);
    }
}

void interationTab(ball ** ballTab,int lenghTab){
    coord currentCase;
    int placement = 0 ;
    for(int y=lenghTab-2;y>=0;y--){
        currentCase.y=y;
        for(int x=0;x<lenghTab;x++){
            currentCase.x=x;
            if(ballTab[y][x].isBall==1){
                if(ballTab[y+1][x].isBall==0){
                    ballTab[y+1][x]=ballTab[y][x];
                    ballTab[y][x]=cleanBall();
                }
                else{
                    placement = verrifyPlacementTab(ballTab,lenghTab,currentCase,0);
                    if (placement!=-1){
                        ballTab[y+1][placement]=ballTab[y][x];
                        ballTab[y][x]=cleanBall();
                    }
                }
                
            }
        }
    }

}