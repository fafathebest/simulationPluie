#ifndef STRUCTCREATOR_H
#define STRUCTCREATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

typedef struct{
    int isBall;
}ball;

typedef struct {
    int y;
    int x;
}coord;


ball cleanBall();

ball **genTab(int lenghTab);

#endif