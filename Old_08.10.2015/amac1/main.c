#include <stdio.h>
#include <stdlib.h>

int main()
{
 /**
 * @file
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
 * Sıralılık durumunu kontrol eden bir c programıdır
 */

    int N,i;
    char artar = 1, azalir = 1;
    int Dizi[100];

    do {
        printf("Islenecek dizinin eleman sayisi:");
        scanf("%d", &N);
        } while (N<1) ;
    for (i = 0; i < N; i++) {
        printf("Dizinin %d'inci elemani:",i+1);
        scanf("%d", &Dizi[i]); }

    printf("\n");
    i=0;
    while (  (i < (N-1) ) && ( (artar==1) || (azalir==1) ) ) { //düzensiz olduðunu saptayana kadar dön (veya dizi bitene kadar).
        if ( Dizi[i] > Dizi[i+1] ){   //Dizinin bir önceki elemaný sonrakinden büyükse dizi artmýyordur.
            artar = 0;    }
        else {
            if( Dizi[i] < Dizi[i+1] ) { //Dizinin bir önceki elemaný sonrakinden küçükse dizi azalmýyordur.
                azalir = 0; }   }
            i++; }

    if (artar == 1) {
        printf("Dizi Artandir"); }
    else {
        if (azalir==1){
            printf("Dizi Azalandir"); }
        else{
            printf("Sirali Degil"); }  }

return 0;
}
