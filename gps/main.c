//
//  main.c
//  gps
//
//  Created by 20161104595 on 17/6/16.
//  Copyright © 2017年 20161104595. All rights reserved.
//

#include <stdio.h>
＃include<string.h>
char GPSDATA[500];
FILE *fp1;
void main()
{
    void rx_gga(int n);
    void rx_rmc(int n);
    FILE *fp;
    int i=0,len;
    if(fp=fopen("c:\\a\\GPSDATAS.TXT","r"))==NULL)
    {
        printf("can not open the file\n");
        exit(0);
    }
    for(;(GPSDATA[i++]=fgetc(fp)))
}
