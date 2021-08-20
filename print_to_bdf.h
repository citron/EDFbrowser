/*
***************************************************************************
*
* Author: Teunis van Beelen
*
* Copyright (C) 2008 - 2021 Teunis van Beelen
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




#ifndef PRINT_SCREEN_TO_BDF_H
#define PRINT_SCREEN_TO_BDF_H



#include "qt_headers.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "global.h"
#include "mainwindow.h"
#include "filter.h"
#include "utc_date_time.h"
#include "edf_helper.h"
#include "edf_annot_list.h"
#include "utils.h"

#include "third_party/fidlib/fidlib.h"



class UI_Mainwindow;



void print_screen_to_bdf(UI_Mainwindow *);



#endif // PRINT_SCREEN_TO_BDF_H


