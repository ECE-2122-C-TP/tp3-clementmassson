#include <stdio.h>

int main() {

   /*
    // Exercice 1
    int a=0, b=0;
    printf("Saisir deux entiers :");
    scanf("%i",&a);
    scanf("%i",&b);
    if (a<b)
        {
        printf("%i \n",b);
        }
    else
        {
        printf("%i \n",a);
        }


    // Exercice 2
    int longueur=0, largeur=0;
    printf("Saisir les dimensions du rectangle:\n");
    printf("Longueur:");
    scanf("%i", &longueur);
    printf("Largeur:");
    scanf("%i", &largeur);
    printf("Le périmètre du rectangle vaut: %i ", (longueur+largeur)*2 );


    // Exercice 3
    int entier=0;
    printf ("Saisir un entier:");
    scanf ("%i", &entier);
    if (entier<10)
        {
        printf ("Le nombre est strictement inférieur à 10");
        }
    else if (entier%3==0)
        {
        printf("Cet entier est un multiple de 3 et il est supérieur ou égal à 10");
   else
        {
        printf("Cet entier n'est pas un multiple de 3");
        }


    // Exercice 4
    int age=0, etud=0;
    printf("Rentrer votre age:");
    scanf("%i", &age);
    if (0<age && age<12)
        {
        printf("tarif enfant (prix=4e)");
        }
    else if (age>=12 && age<17)
        {
        printf("tarif jeune (prix=6e)");
        }
    else if (age>=17 && age<27)
        {
        printf("Etes-vous étudiant ? Si oui rentrer 1 sinon 0");
        scanf("%i", &etud);
        if (etud==1)
            {
            printf("tarif jeune (prix=6e)");
            }
        else
            {
            printf("plein tarif (prix=9e)");
            }
        }
    else if (age>=65)
        {
        printf("tarif senior (prix=6e)");
        }
    else
        {
        printf("plein tarif (prix=9e)");
        }


   // Exercice 5
   int num=0;
   printf("Vous avez le choix parmi les boissons si dessous:\n"
          "> Boissons froides :\n"
          " 1:Coca Cola\n 2:Sprite\n 3:Fanta\n"
          "> Boissons chaudes : \n"
          " 10:Chocolat Chaud\n 11:Café\n"
          "Veuiller rentrer le numéro correspondant à votre boisson : ");
   scanf("%i", &num);
   if (num==1)
        {
        printf("Vous avez choisi un Coca Cola");
        }
   else if (num==2)
        {
        printf("Vous avez choisi un Sprite");
        }
   else if (num==3)
        {
        printf("Vous avez choisi un Fanta");
        }
   else if (num==10)
        {
        printf("Vous avez choisi un Chocolat chaud");
        }
   else if (num==11)
        {
        printf("Vous avez choisi un Café");
        }
   else
        {
        printf("Le numéro ne correspond à aucune boisson");
        }

    // OU
    int num=0;
    printf("Selectionner votre boisson :");
    scanf("%d",&num);
    switch(num)
    {
        case 1 :
        {
            printf("Vous avez choisi un Coca Cola");
            break;
        }
        case 2 :
        {
            printf("Vous avez choisi un Sprite");
            break;
        }
        case 3 :
        {
            printf("Vous avez choisi un Fanta");
            break;
        }
        case 10 :
        {
            printf("Vous avez choisi un Chocolat chaud");
            break;
        }
        case 11 :
        {
            printf("Vous avez choisi un Café");
            break;
        }
        default :
        {
            printf("Le numéro ne correspond à aucune boisson");
            break;


   // Exerice 6
   float a=0, b=0, c=0;
   do
        {
        printf("Saisir la 1ere note:");
        scanf("%f", &a);
        if (!(a>=0 && a<=20))
            {
            printf("la note n'est pas conforme\n");
            }
        }
   while (!(a>=0 && a<=20));
   do
        {
        printf("Saisir la 2eme note:");
        scanf("%f", &b);
        if (!(b>=0 && b<=20))
            {
            printf("la note n'est pas conforme\n");
            }
        }
   while (!(b>=0 && b<=20));
   do
        {
        printf("Saisir la 3eme note:");
        scanf("%f", &c);
        if (!(a>=0 && a<=20))
            {
            printf("la note n'est pas conforme\n");
            }
        }
        while (!(c>=0 && c<=20));
    printf("la moyenne est égale à %f", (a+b+c)/3);


    // Exerice 7
    int nbclasse=0, nbeleve=0, nbelevetot=0, i=0;
    printf("Rentrer le nombre de classes:");
    scanf("%i",&nbclasse);
    for (i=1; i<1+nbclasse; i++)
    {
        printf("Rentrer le nombre d'élèves dans la classe numéro %i :",i);
        scanf("%i",&nbeleve);
        nbelevetot+=nbeleve;
    }
    printf("Le nombre total d'élèves est %i",nbelevetot);


    // Exerice 8
    int entier=0;
    printf("Renter un nombre entier :");
    scanf("%i",&entier);
    while(entier % 2 != 0 || entier % 7 != 0)
    {
        printf("Renter un nombre entier :");
        scanf("%i",&entier);
    }
    printf("Ce nombre est à la fois un multiple de 2 et de 7.");


    // Exerice 9
    int nbpierre=0, i=0, somme=0;
    printf("Rentrer le nombre de pierres disponibles :");
    scanf("%i",&nbpierre);
    while (nbpierre>=somme)
    {
        i=i+1;
        somme=(i*(i+1)*(2*i+1))/6;
    }
    printf("Le nombre d'étages possibles est %i",i-1);


    // Exerice 10
    float somme=0, note=0, compteur=0, moyenne=0;
    printf("Rentrer une note:");
    scanf("%f",&note);
    if (note<0)
    {
        printf("Pas de note rentrée");
    }
    else
    {
        while (note >= 0)
        {
            somme = somme + note;
            printf("Rentrer une note:");
            scanf("%f",&note);
            compteur++;
        }
        moyenne=somme/compteur;
        printf("Votre moyenne est %f",moyenne);


    }
   return 0;
    }