#pragma once

#include <iostream>
#include <cmath>
#include "qsort.h"
//#include "interp.h"

using namespace std;

#define OSINT int
#define INF 1e36

void make_grid(double *, double ***, double ****, OSINT, OSINT, OSINT);
//void interp_grid(double ****, OSINT, OSINT, OSINT *, 
//				double *, double *, double *, double *, double *, Matrix4f &, Vector4f &, Vector4f &);
void interp_grid(double ****, OSINT, OSINT, OSINT *, 
				double *, double *, double *, double *, double *);
void bicubic_interp(double, double, OSINT *, OSINT *, OSINT *,
                    double *, double *, double *, double *, double *, double *,
                    double ***, double ***, OSINT, OSINT, double *);
void locate(double, double, OSINT *, OSINT *, double ***, OSINT, OSINT);
void derivatives(double, double, OSINT *, OSINT *, double ***, OSINT, OSINT,
                 double *, double *, double *, double *);
void bcucof(OSINT *, double *, double *, double *, double *, double *, double *, double, double, double ***);
void bcuint(double, double, OSINT *, OSINT *, double ***, double **, double *);
OSINT rem_duplicates(double *, OSINT *, OSINT *, OSINT);
