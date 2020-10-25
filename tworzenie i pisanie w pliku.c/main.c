#include <stdio.h>
#include <stdlib.h>

int main()
{
    char imie[10];
    int wiek;
    char miasto[10];

    printf("Podaj swoje dane:\n");
    printf("Imie:");
    scanf("%s",&imie);
    printf("Wiek:");
    scanf("%d",&wiek);
    printf("Miasto:");
    scanf("%s",&miasto);

    FILE *plik;
    plik = fopen("test.txt","w");
    fprintf(plik,"%s\n",imie);
    fprintf(plik,"%d\n",wiek);
    fprintf(plik,"%s\n",miasto);
    fclose(plik);




    return 0;

}










