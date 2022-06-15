/*
 * File:   ApComputeMain.c
 * Author: appiah
 * Appiah Number Sequence Storing Program.
 * Several data structures are used array, list, vector, queue, stack and more.
 * Created on 4 January 2020, 02:47
 */

#include ""
#include <stdio.h>
#include <stdlib.h>


//using namespace std;

int enumSize =83;

int* ansi;
long* ansl;
double* ansd;

int main(int argc, char** argv) {
    
   // intialise();
    setIntANS();
    setLongANS();
    setDoubleANS();
   // putc(0, 0);
    return (EXIT_SUCCESS);
}

void initialise(){
    int i=0;
    for(i=0; i<enumSize; i+=1)
    { 
      ansi[i]=0;
      ansd[i]=0;
      ansl[i]=0;
    }
}

// Storing of integers in one-to-one array data structure.

void setIntANS(){
    
    ansi[0]=-2025; ansi[1]=-945; ansi[2]=-665;
    ansi[3]=-504; ansi[4]=-405; ansi[5]=-342; ansi[6]= -297; ansi[7]=-225;
    ansi[8]=-214;
    ansi[9]=0; ansi[10]=1; ansi[11]=3; ansi[12]=4; ansi[13]=5;
    ansi[14]=8; ansi[15]= 9; ansi[16]= 10; ansi[17]= 12; ansi[18]= 15;
    ansi[19]=16; ansi[20]=17; ansi[21]= 18; ansi[22]= 20; ansi[23]= 21;
    ansi[24]=23;
    ansi[25]=24; ansi[26]= 25; ansi[27]=27; ansi[28]=28; ansi[29]=30;
    ansi[30]=31; ansi[31]=32;  ansi[32]=33; ansi[33]= 34; ansi[34]= 35;
    ansi[35]=36; ansi[36]=38; ansi[37]= 39; ansi[38]= 40; ansi[39]= 45;
    ansi[40]=51; ansi[41]= 52; ansi[42]= 54; ansi[43]= 56; ansi[44]=57;
    ansi[45]=59; ansi[46]= 60; ansi[47]= 63; ansi[48]= 65; ansi[49]= 66;
    ansi[50]=67; ansi[51]=72; ansi[52]= 75; ansi[53]= 78; ansi[54]= 81;
    ansi[55]=85; ansi[56]= 89; ansi[57]= 90; ansi[58]=100; ansi[59]= 105;
    ansi[60]=120; ansi[61]= 125; ansi[62]= 135; ansi[63]= 145; ansi[64]= 165;
    ansi[65]=180; ansi[66]= 185; ansi[67]= 218;
    ansi[68]=225; ansi[69]=270; ansi[70]=300;ansi[71]= 315;ansi[72]= 345;
    ansi[73]=360; ansi[74]=405; ansi[75]=505; ansi[76]= 665; ansi[77]= 950;
    ansi[78]=2025;
    
}

int* getIntANS(){
    return ansi;
}


void setLongANS(){
    
}

long* getLongANS(){
    return ansl;
}

void setDoubleANS(){
    // ansd[0]= 1099886703552000;
    // ansd[1]= 131382799891200;
    //  ansd[2]= 3170893824000;
    //  ansd[3]= 38661097149675;
}

double* getDoubleANS(){
    return ansd;
}


int getEnumSize(){
    return enumSize;
}

