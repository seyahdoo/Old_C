#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
 /**
 * @file    alphabetically sort
 * @author  Seyyid ahmed doğan <Seyyidahmed.dogann@gmail.com>
 * @version 1.0
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details at
 * https://www.gnu.org/copyleft/gpl.html
 *
 * @section DESCRIPTION
 *
 * This program sorts N number of randomly generated words alphabetically.
 */


    static char Kelimeler[10][100];
    int N,Short,Medium,Long,i,j,k,Tmp,Length,MinimumPlace;
    unsigned int random_Seed;

    srand(time(NULL));

    scanf("%d",&N);
    Short=rand() % ((N/4)+1);
    Long=rand() % ((N/4)+1);


    for (i=0;i<Short;i++){
        Length=(rand() % 3) + 1;        //KELİME URET
        for (j=0;j<Length;j++){
            Kelimeler[j][i]=(rand() % 26) + 97;
        }
    }
    for (i=Short;i<Short+Long;i++) {
        Length=(rand() % 4) + 7;
        for (j=0;j<Length;j++) {
            Kelimeler[j][i]=(rand() % 26) + 97;
        }
    }
    for (i=Short+Long;i<N;i++) {
        Length=(rand() % 3) + 4;
        for (j=0;j<Length;j++) {
            Kelimeler[j][i]=(rand() % 26) + 97;
        }
    }


    for (i=0;i<N;i++) {             //KELİME SIRALA
        MinimumPlace=i;
        for (k=i+1;k<N;k++) {
            j=0;
ifequal:    if (Kelimeler[j][MinimumPlace] >= Kelimeler[j][k]) {
                if (Kelimeler[j][MinimumPlace] == Kelimeler[j][k]) {
                    j++;
                    goto ifequal;
                }else {
                    MinimumPlace = k;
                }
            }
        }
        for (j=0;j<10;j++) {
            Tmp = Kelimeler[j][MinimumPlace];
            Kelimeler[j][MinimumPlace] = Kelimeler[j][i];
            Kelimeler[j][i] = Tmp;
        }
    }



    for (i=0; i<N;i++) {        //KELIME YAZDIR
        for (j=0;j<10;j++) {
            printf("%c",Kelimeler[j][i]);
        }
        printf("\n");
    }



    return 0;
}


