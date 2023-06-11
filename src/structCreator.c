#include "../include/structCreator.h"

ball cleanBall(){
    ball cBall;

    cBall.isBall = 0;

    return cBall;
}


ball **genTab(int lenghTab){
    ball **ballTab = (ball **)malloc(lenghTab*(sizeof(ball *)));
    for(int i;i<lenghTab;i++){
        ballTab[i]=(ball *)malloc(lenghTab*(sizeof(ball)));
    }
    return ballTab;
}