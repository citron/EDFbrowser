/*
***************************************************************************
*
* Author: Teunis van Beelen
*
* Copyright (C) 2013 - 2021 Teunis van Beelen
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


#ifndef UI_MANSCAN2EDFFORM_H
#define UI_MANSCAN2EDFFORM_H


#include "qt_headers.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "global.h"
#include "mainwindow.h"
#include "utils.h"
#include "edflib.h"
#include "utc_date_time.h"


class UI_Mainwindow;


class UI_MANSCAN2EDFwindow : public QObject
{
  Q_OBJECT

public:
  UI_MANSCAN2EDFwindow(QWidget *parent, char *recent_dir=NULL, char *save_dir=NULL);

  UI_Mainwindow *mainwindow;

private:


QPushButton  *pushButton1,
             *pushButton2;

QTextEdit    *textEdit1;

QDialog      *myobjectDialog;

char  *recent_opendir,
      *recent_savedir;


int get_worddatafile(struct segment_prop_struct *, int, FILE *);
int get_channel_gain(struct segment_prop_struct *, int, FILE *);
int get_start_date(struct segment_prop_struct *, int, FILE *);
int get_sample_rate(struct segment_prop_struct *, int, FILE *);
int get_filter_settings(struct segment_prop_struct *, int, FILE *);
int get_recorder_version(struct segment_prop_struct *, int, FILE *);
int get_starttime_offset(struct segment_prop_struct *, int, FILE *);
int get_events(struct segment_prop_struct *, int, FILE *);
int get_number_of_segments(FILE *);
char * fgetline(char *, int, FILE *);
long long get_long_time(const char *);



private slots:

void SelectFileButton();

};




#endif


