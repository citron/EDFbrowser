/*
***************************************************************************
*
* Author: Teunis van Beelen
*
* Copyright (C) 2010 - 2022 Teunis van Beelen
*
* Email: teuniz@protonmail.com
*
***************************************************************************
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, version 3 of the License.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*
***************************************************************************
*/







#ifndef ravg_filter_INCLUDED
#define ravg_filter_INCLUDED



#include <stdlib.h>
#include <string.h>
#include <math.h>


#ifdef __cplusplus
extern "C" {
#endif



struct ravg_filter_settings{
                       int size;
                       int type;
                       int first_sample;
                       double *buf;
                       double *buf2;
                       int buf_pntr;
                       int buf_pntr2;
                       double mean;
                       double mean2;
                      };



struct ravg_filter_settings * create_ravg_filter(int, int);
void reset_ravg_filter(double, struct ravg_filter_settings *);
double run_ravg_filter(double, struct ravg_filter_settings *);
void free_ravg_filter(struct ravg_filter_settings *);
void ravg_filter_restore_buf(struct ravg_filter_settings *);
void ravg_filter_save_buf(struct ravg_filter_settings *);
double ravg_filter_response(int, int, double);
struct ravg_filter_settings * create_ravg_filter_copy(struct ravg_filter_settings *);


#ifdef __cplusplus
} /* extern "C" */
#endif


#endif


