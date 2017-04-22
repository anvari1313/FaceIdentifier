#ifndef __LOADING_H_
#define __LOADING_H_
#include "Common.h"
#include "GlobalVars.h"
#include "Database.h"

CvSize getFrameSize();
int prepareHaarCascade();
bool loadDatabase();
#endif