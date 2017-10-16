/*Program umieszcza wpisana liczbe w drzewie bienarnym oraz nastepnie wypisuje na ekran w ktorymwezle drzewa liczba sie znajduje */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int wybor;
int *korzen;

int dane[16];
bool pusty[16];



void dodaj();
void znajdz();



int main()
{

    int i;
    for (i = 0;i<16;i++){
        pusty[i]=true;
    }
    korzen=NULL;

    do {
        printf("1 dodaj liczbe |  2 znajdz liczbe | 3 koniec\n");
        scanf("%d", &wybor);
        switch (wybor){
        case 1 : dodaj(); break;
        case 2 : znajdz(); break;}
    }while(wybor!=3);

}

void dodaj(){

    int liczba;

    printf("podaj liczbe\n");
    scanf("%d", &liczba);

    if (pusty[1]== true)
    {
        korzen=&dane[1];
        *korzen= liczba;
        pusty[1]= false;
    }else{
    bool wolne = false;
    int wezel=1;

    while (wolne==false){
        if (pusty[wezel]==true)
        {
            dane[wezel]=liczba;
            wolne= true;
            pusty[wezel]= false;
        }else if (liczba<dane[wezel]){
             wezel=2*wezel;


        }else if (liczba>=dane[wezel]){
           wezel= 2*wezel +1;
        }
        }}

    }

znajdz(){
    int liczba;
    printf("jaka liczbe znalezc? \n");
    scanf("%d", &liczba);

    bool znalazlem=false;
    int wezel=1;
    while(znalazlem == false){
        if(liczba==dane[wezel]){
            printf("podana liczba jest w wezle nr %d\n", wezel);

            znalazlem = true;

        }else if (liczba>dane[wezel]){
            wezel = 2*wezel+1;
        }else{
            wezel= 2*wezel;
        }
        if (wezel>=15){printf("nieznalziono liczby i chuj\n"); znalazlem = true;}
    }

}


