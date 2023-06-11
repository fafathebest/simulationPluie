#ifndef TABMANIPULATION_H
#define TABMANIPULATION_H

#include "./structCreator.h"

int usleep(__useconds_t usec);

void initTab(ball ** ballTab,int lenghTab);

void printTab(ball ** ballTab,int lenghTab);

int verrifyPlacementTab(ball ** ballTab,int lenghTab,coord currentCase,int advancement);

void interationTab(ball ** ballTab,int lenghTab);

#endif