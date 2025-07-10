#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

char* Date(int nbrJour)
{
	time_t current_time;
    time(&current_time);
    struct tm* time_info;
    time_info = localtime(&current_time);
    printf(" DATE DE PRET : %02d/%02d/%04d\n", (*time_info).tm_mday, (*time_info).tm_mon + 1, (*time_info).tm_year + 1900);
   (*time_info).tm_mday+=nbrJour;
    mktime(time_info);
    char* date=(char*)malloc(11*sizeof(char));
    sprintf(date,"%02d/%02d/%04d",(*time_info).tm_mday, (*time_info).tm_mon + 1, (*time_info).tm_year + 1900);

return date;
}


void clear(){
    system("pause");
    system("cls");
}

void profession(){
    int i;
    printf("\n     |*=========================================================================*|\n");
    for(i=0; i<15; i++){
            printf("     |*\t\t\t\t\t\t\t\t\t\t*|\n");
        if(i==2){
            printf("     |*\t  Quel est votre type de profession s'il vous plait ? \t\t\t*|\n");
            printf("     |*\t\t\t\t\t\t\t\t\t\t*|\n");}
        if(i==6){
            printf("     |*\t\t\t[1]: Un %ctudiant\t\t\t\t\t*|\n",130);
            i++;
            printf("     |*\t\t\t\t\t\t\t\t\t\t*|\n");}
        if(i==7){
            printf("     |*\t\t\t[2]: Un enseignent\t\t\t\t\t*|\n");
            i++;
            printf("     |*\t\t\t\t\t\t\t\t\t\t*|\n");}
        if(i==8){
            printf("     |*\t\t\t[3]: Un vacataire\t\t\t\t\t*|\n");
            i++;
           printf("     |*\t\t\t\t\t\t\t\t\t\t*|\n"); }
        if(i==9){
            printf("     |*\t\t\t[4]: Un fonctionnaire de l'%ccole\t\t\t*|\n",130);
            i++;
            printf("     |*\t\t\t\t\t\t\t\t\t\t*|\n");}
        if(i==10){
            printf("     |*\t\t\t[5]: Le r%csponsable de la bibliot%cque\t\t\t*|\n",130,138);
            i++;
            printf("     |*\t\t\t\t\t\t\t\t\t\t*|\n"); }
    }
    printf("     |*=========================================================================*|\n\n");
}

void espace_lecteur(int n){
    switch (n){
    case 1:
        printf("\n\t\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n");
        printf("\t\t\t\t\t\t\t\t  \2 ESPACE D'ETUDIENT \2\n\n");
        printf("\t\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n\n");
        break;
    case 2:
        printf("\n\t\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n");
        printf("\t\t\t\t\t\t\t\t  \2 ESPACE D'ENSEGNIENT \2\n\n");
        printf("\t\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n\n");
        break;
    case 3:
        printf("\n\t\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n");
        printf("\t\t\t\t\t\t\t\t  \2 ESPACE DU VACATAIRE \2\n\n");
        printf("\t\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n\n");
        break;
    case 4:
        printf("\n\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n");
        printf("\t\t\t\t\t\t      \2 ESPACE DU FONCTIONNAIRE DE L'ECOLE \2\n\n");
        printf("\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n\n");
        break;
    case 5:
        printf("\n\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n");
        printf("\t\t\t\t\t\t      \2 ESPACE DU RESPONSABLE DE LA BIBLIOTHEQUE \2\n\n");
        printf("\t\t\t\t\t\t\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\4\n\n\n");
        break;
    default:
        printf("\n\nVeuillez saisir un choix valide svp\n\n");
        break;
    }
}
void reglement(int n){
    printf("\n\t\t\t\t\tREGLEMENT INTERIEUR DE LA BIBLIOTHEQUE DE L'ENSA-SAFI \n ");
    printf("\t\t\t\t\t..................................................... \n\n ");
    printf("\n*** Il est important que chaque lecteur participe au bon fonctionnement de la biblioth%cque en respectant les r%cgles suivantes :\n",138,138);
    printf("\n Horaire d'ouverture :\n");
    printf("\n\t- Du lundi au Jeudi     :  8h30 %c 12h00 || 14h30 %c 18h00\n\t- Vendredi\t\t:  8h30 %c 11h30 || 15h00 %c 18h00\n ",133,133,133,133);
    printf("_______________________________________________________________________\n");
    printf("\n D%clais de pr%ct d'un ouvrage :\n\n",130,136);
    switch(n){
        case 1 :
            printf(" -----> 5 Jours pour 1 ouvrage \n\n Le renouvelement de pr%ct est p%crmit une seule fois !!!",136,130);
            break;
        case 2 :
            printf(" -----> 15 Jours pour 2 ouvrages \n\n Le renouvelement de pr%ct est p%crmit une seule fois !!!",136,130);
            break;
        case 3 :
            printf(" -----> 10 Jours pour 1 ouvrage \n\n Le renouvelement de pr%ct est p%crmit une seule fois !!!",136,130);
            break;
        case 4 :
            printf(" -----> 5 Jours pour 1 ouvrage \n\n Le renouvelement de pr%ct est p%crmit une seule fois !!!",136,130);
            break;
        default :
            break;
   }
   printf("\n _______________________________________________________________________\n");
   printf("\n Sanctions de retard :\n\n");
   switch(n){
       case 1 :
           printf(" -------Pour un retard qui ne d%cpasse pas un mois : \n\t L'%ctudiant n'aura pas le droit de prendre un ouvrage pendant :\n",130,130);
           printf(" \t\t\4 15 Jours   -------> Le 1 er retard \n \t\t\4 1 mois     -------> Le 2 %cme retard \n \t\t\4 1 semestre -------> Le 3 %cme retard  ",138,138);
           printf("\n\n -------Chaque retard d%cpasse 1 mois entrainera la transmission de la liste des etudiants concern%cs au conseil disciplinaire \1 .",130,130);
           break;
       case 2 :
           printf("\n\t\4\4------- Un rapport semestriel de l'%ctat de pr%ct des ouvrages est transmis %c la direction p%cdagogique pour prendre les mesures n%ccessaires",130,136,133,130,130) ;
           break;
       case 3  :
           printf("\n\t\4\4------- Un rapport semestriel de l'%ctat de pr%ct des ouvrages est transmis %c la direction p%cdagogique pour prendre les mesures n%ccessaires",130,136,133,130,130) ;
           break;
       case 4 :
           printf("\n\t\4\4------- Un rapport semestriel de l'%ctat de pr%ct des ouvrages est transmis %c la direction p%cdagogique pour prendre les mesures n%ccessaires",130,136,133,130,130) ;
           break;
   }
   printf("\n _______________________________________________________________________\n");
   printf("\n -Toute personne ayant perdu ou abim%c un ouvrage est tenu %c le restituer par un exemplaire neuf dans un d%clai d'un mois maximum.",130,133,130);
   printf("\n \t\t---> Pass%c ce d%clai des mesures de sanction seront prise par la direction envers l'usager.",130,130);
   printf("\n\n -Il est %c signaler qu'il n'y a pas de r%cservation ni de double pr%ct d'un ouvrage.",133,130,136);
   printf("\n _______________________________________________________________________\n");
   printf("\n R%cgles de conduite au sein de la biblioth%cque :",138,138);
   printf("\n\n\t\4 Respecter le d%clai de pr%ct.\n\t\4 Avoir un comportement correct au sein de la biblioth%cque.\n\t\4 Preserver une ambiance propice au travail et %c l'%ctude. ",130,136,138,133,130);
   printf("\n\t\4 Le silence doit %ctre respecter , Les t%cl%cphones portables sont interdits.",136,130,130);
   printf("\n\t\4 Ne pas tenter de sortir des documents non enregistr%cs par le responsable de pr%ct.\n",130,136);
   printf("\n\n\t\t\t\t\t\t\t\tLu et approuv%c par le conseil d'%ctablissement le 19/03/2013 ",130,130);
   printf("\n\t\t\t\t\t\t\t\t/////////////////////////////////////////////////////////// \n");
}

typedef struct{
    char nom[50];
    char prenom[50];
    int niveau;
    int filiere;
    int departement;
    char matiere[30];
    char cin[30];
    char annee[13];
}info_lecteur;


void categorie(){
    int i;
    printf("\n\n\t\t\t* * * * * * * LES CATEGORIES * * * * * * * \n\n");
    printf("\t\t\t******** [1]:MATHEMATHEQUE\n\n\t\t\t ******** [2]:INFORMATIQUE\n\n\t\t\t  ******** [3]:AUTOMATIQUE\n\n\t\t\t   ******** [4]:ELECTRONIQUE\n\n\t\t\t    ******** [5]:GENIE INDUSTIEL\n\n\t\t\t     ******** [6]:PHYSIQUE\n\n\t\t\t      ******** [7]:CHIMIE\n\n\t\t\t       ******** [8]:GPMC\n\n\t\t\t        ******** [9]:DIVERS\n\n");
    printf("\t\t\t* * * * * * * * * * * * * * * * * * * * * *\n");
}

void matiers(int choix){
     int choix2 ;
     switch(choix){
case 1:
    printf("\n\n\n\t\t\t\t\t\4 \4 \4 \4 MATHEMATIQUE \4 \4 \4 \4\n\n");
    printf("\t\t\t\t[1]---> ALGEBRE\n\t\t\t\t[2]---> Probabilite Statique\n\t\t\t\t[3]---> CALCUL\n\t\t\t\t[4]---> General\n\t\t\t\t[5]---> Analyse");
    printf("\n\n Tapez votre choix ici s'il vous plait ----> ");
    scanf("%d",&choix2);
    while(choix2<1||choix2>5){
        printf(" Veuillez saisir un choix valide ----> ");
        scanf("%d",&choix2);
    }
    printf("\n");
    clear();
    switch(choix2){
    case 1:
        liste_livre("alg.math.txt");
        break;
    case 2:
        liste_livre("proba.math.txt");
        break;
    case 3:
        liste_livre("calcul.math.txt");
        break;
    case 4:
        liste_livre("general.math.txt");
        break;
    case 5:
        liste_livre("analyse.math.txt");
        break;
    default:
        break;
    }
    break;
case 2:
    printf("\n\n\n\t\t\t\t\t\4 \4 \4 \4 INFORMATIQUE \4 \4 \4 \4\n\n");
    printf("\t\t\t\t[1]---> Systeme d'exploitation-LINUX\n\t\t\t\t[2]---> Base de donnees\n\t\t\t\t[3]---> Architecture de lordinateur \n\t\t\t\t[4]---> SQL\n\t\t\t\t[5]---> ORACLE\n\t\t\t\t[6]---> Informatique General\n\t\t\t\t[7]---> Calculs\n\t\t\t\t[8]---> MATLAB\t\t");
    printf("\n\n Tapez votre choix ici s'il vous plait ----> ");
    scanf("%d",&choix2);
    while(choix2<1||choix2>8){
        printf(" Veuillez saisir un choix valide ----> ");
        scanf("%d",&choix2);
    }
    printf("\n");
    clear();
    switch(choix2){
    case 1:
        liste_livre("Informatique.S.E-LINUX.txt");
        break;
    case 2:
        liste_livre("Informatique.BASE-DE-DONNEES.txt");
        break;
    case 3:
        liste_livre("Informatique.Architecture-de-I_ordinateur.txt");
        break;
    case 4:
        liste_livre("Informatique.SQL.txt");
        break;
    case 5:
        liste_livre("informatique.oracle.txt");
        break;
    case 6:
        liste_livre("informatique.info general.txt");
        break;
    case 7:
        liste_livre("informatique.calculs.txt");
        break;
    case 8:
        liste_livre("informatique.matlab.txt");
        break;
    default:
        break;
    }
    break;
case 3:
    printf("\n");
    clear();
    liste_livre("automatique.txt");
    break;
case 4:
    printf("\n");
    clear();
    liste_livre("electronique.txt");
    break;
case 5:
    printf("\n");
    clear();
    liste_livre("INDUS.txt");
    break;
case 6:
    printf("\n\n\n\t\t\t\t\t\4 \4 \4 \4 PHYSIQUE \4 \4 \4 \4\n\n");
    printf("\t\t\t\t[1]---> Mecanique\n\t\t\t\t[2]---> Thermodynamique\n\t\t\t\t[3]---> Transfers thermique\n\t\t\t\t[4]---> Electromagnetisme\n\t\t\t\t[5]---> Generale\n\t\t\t\t[6]---> Electricite\n\t\t\t\t[7]---> Materiaux\n\t\t\t\t[8]---> Optique\n\t\t\t\t[9]---> Ondes ");
    printf("\n\n Tapez votre choix ici s'il vous plait ----> ");
    scanf("%d",&choix2);
    while(choix2<1||choix2>9){
        printf(" Veuillez saisir un choix valide ----> ");
        scanf("%d",&choix2);
    }
    printf("\n");
    clear();
    switch(choix2){
    case 1:
        liste_livre("phy.mecanique.txt");
        break;
    case 2:
        liste_livre("phy.thermodynamique.txt");
        break;
    case 3:
        liste_livre("phy.transfers-thermique.txt");
        break;
    case 4:
        liste_livre("phy.electroma.txt");
        break;
    case 5:
        liste_livre("phy.generel.txt");
        break;
    case 6:
        liste_livre("phy.electricite.txt");
        break;
    case 7:
        liste_livre("phy.materiaux.txt");
        break;
    case 8:
        liste_livre("phy.optique.txt");
        break;
    case 9:
        liste_livre("phy.Ondes.txt");
        break;
    default:
        break;
    }
    break;
case 7:
    printf("\n");
    clear();
    liste_livre("chimie.txt");
    break;
case 8:
    printf("\n");
    clear();
    liste_livre("GPMC.txt");
    break;
case 9:
    printf("\n\n\n\t\t\t\t\t\4 \4 \4 \4 DIVERS \4 \4 \4 \4\n\n");
    printf("\t\t\t\t[1]---> Encyclopedie\n\t\t\t\t[2]---> Dictionnaire\n\t\t\t\t[3]---> Romans\n\t\t\t\t[4]---> Sociologie\n\t\t\t\t[5]---> Economie\n\t\t\t\t[6]---> Finance & Comptabilite\n\t\t\t\t[7]---> Langues & Communication\n\t\t\t\t[8]---> General");
    printf("\n\n Tapez votre choix ici s'il vous plait ----> ");
    scanf("%d",&choix2);
    while(choix2<1||choix2>8){
        printf(" Veuillez saisir un choix valide ----> ");
        scanf("%d",&choix2);
    }
    printf("\n");
    clear();
    switch(choix2){
    case 1:
        liste_livre("div.ency.txt");
        break;
    case 2:
        liste_livre("div.dictio.txt");
        break;
    case 3:
        liste_livre("div.romans.txt");
        break;
    case 4:
        liste_livre("div.socio.txt");
        break;
    case 5:
        liste_livre("div.economie.txt");
        break;
    case 6:
        liste_livre("div.FC.txt");
        break;
    case 7:
        liste_livre("div.LEC.txt");
        break;
    case 8:
        liste_livre("div.general.txt");
        break;
    default:
        break;
    }
    break;
default:
    break;
}
}

void supprimer_livre(char nomfichier[]){
FILE *fichier=NULL;
FILE *tempfichier=NULL;
char ligne[1000];
char supprimer_code[30];
printf("\n veuillez entrez le code de livre que vous voulez supprimer s'il vous plait\n");
scanf("%s",supprimer_code);
fichier=fopen(nomfichier,"r+");
if(fichier==NULL){
    printf("\n echec d'overture de fichier\n");
    exit(EXIT_FAILURE);
    }
    tempfichier=fopen("temp.txt","w");
if(tempfichier==NULL){
    printf("\n echec d'overture de fichier\n");
    exit(EXIT_FAILURE);
    }
    while(fgets(ligne,1000,fichier)){
        if(strstr(ligne,supprimer_code)!=NULL){
            continue;
        }
        fputs(ligne,tempfichier);
    }
    fclose(fichier);
    fclose(tempfichier);
    remove(nomfichier);
    rename("temp.txt",nomfichier);
    printf("\n\t\t\tSuppression effectu%ce avec succ%cs \1\n",130,130);
}

void fichierajout(char nomfichier[]){
FILE*p1=NULL;
char titre[20],auteur[20],edi[10],code[10];
p1=fopen(nomfichier,"a");
         if(p1==NULL){
            printf("\n Echec d'ouverture!!");
         }

            printf("\n \t\t\4\4 Entrez s'il vous plait les informations de votre nouveau livre : \n ");
            printf("\n \tTitre :");
            scanf("\n%[^\n]",titre);
            printf("\n \tAuteur :");
            scanf("\n%[^\n]",auteur);
            printf("\n \tEdition :");
            scanf("\n%[^\n]",edi);
            printf("\n \tCode :");
            scanf("\n%[^\n]",code);
            fprintf(p1, "\n%s\t\t\t\t\t  %s  \t\t%s \t\t%s",titre,auteur,edi,code);

            printf("\n\t\tAjout du livre effectu%c avec succ%cs \1\n",130,138);

            fclose(p1);
}

void Menu_respo(){
        printf("\n\t\t\t\t\t\t\t\4\4\4\4\4 Gestion des livres et services \4\4\4\4\4\n\n\n");
        printf("\t\t\t\t\t===== [1]: Cherchez vous un livre?\n");
        printf("\t\t\t\t\t===== [2]: Voulez vous voir la liste des livres emprunt%cs?\n",130);
        printf("\t\t\t\t\t===== [3]: Voulez vous ajoutez un livre?\n");
        printf("\t\t\t\t\t===== [4]: Voulez vous supprimer un livre?\n");
        printf("\t\t\t\t\t===== [5]: Quitter\n");
    }

void Souscategorie(int choix){
     switch(choix){
case 1:
    printf("\n\n\n\t\t\t\t\t\4 \4 \4 \4 MATHEMATIQUE \4 \4 \4 \4\n\n");
    printf("\t\t\t\t[1]---> ALGEBRE\n\t\t\t\t[2]---> Probabilite Statique\n\t\t\t\t[3]---> CALCUL\n\t\t\t\t[4]---> General\n\t\t\t\t[5]---> Analyse");
    break;
case 2:
    printf("\n\n\n\t\t\t\t\t\4 \4 \4 \4 INFORMATIQUE \4 \4 \4 \4\n\n");
    printf("\t\t\t\t[1]---> Systeme d'exploitation\n\t\t\t\t[2]---> Base de donnees\n\t\t\t\t[3]---> Architecture de lordinateur \n\t\t\t\t[4]---> SQL\n\t\t\t\t[5]---> ORACLE\n\t\t\t\t[6]---> Informatique General\n\t\t\t\t[7]---> Calculs\n\t\t\t\t[8]---> MATLAB\n\t\t");
    break;
case 6:
    printf("\n\n\n\t\t\t\t\t\4 \4 \4 \4 PHYSIQUE \4 \4 \4 \4\n\n");
    printf("\t\t\t\t[1]---> Mecanique\n\t\t\t\t[2]---> Thermodynamique\n\t\t\t\t[3]---> Transfers Thermique\n\t\t\t\t[4]---> Electromagnetique\n\t\t\t\t[5]---> General\n\t\t\t\t[6]---> Electricite\n\t\t\t\t[7]---> Materiaux\n\t\t\t\t[8]---> Optique\n\t\t\t\t[9]---> Ondes\n\t\t\t\t ");
    break;
case 9:
    printf("\n\n\n\t\t\t\t\t\4 \4 \4 \4 DIVERS \4 \4 \4 \4\n\n");
    printf("\t\t\t\t[1]---> Encyclopedie\n\t\t\t\t[2]---> Dictionnaire \n\t\t\t\t[3]---> Romans\n\t\t\t\t[4]---> Sociologie \n\t\t\t\t[5]---> Economie\n\t\t\t\t[6]---> Finance / Contable\n\t\t\t\t[7]--->Langues et Communication\n\t\t\t\t[8]---> General\n\t\t\t\t");
    break;
}
}



void liste_livre(char fichier[]){
    FILE* p=NULL;
    p=fopen(fichier,"r");
    char contenu[300];
    if(p!=NULL){
        while(!feof(p)){
            fgets(contenu,500,p);
            printf("%s",contenu);
        }
        fclose(p);
    }
    else
    printf("Malheureusement, l'ouverture du fichier a %ct%c %cchou%ce !",130,130,130,130);
 }


int main(){

    int i,n,m,c,d,choix,choix1,choix2,choix3,choix4,drapeau=0;
    info_lecteur informations;
    char code[15],nom[15],prenom[15],livre1[20],chaine1[20],chaine2[20],ligne[200];
    char date[11];
    FILE* F=NULL;
    FILE* p=NULL;
    FILE* f=NULL;

    printf("\n     |*=========================================================================*|\n");
    for(i=0; i<22; i++){
        if(i==10)
            printf("     |*\t\t \3 Biblioth%cque ENSAS vous souhaite la bienvenue \3\t\t*|\n",138);
        if(i==11)
            printf("     |*\t\t\t    Nous somme %c votre service \t\t\t\t*|\n",133);
        printf("     |*\t\t\t\t\t\t\t\t\t\t*|\n");
    }
    printf("     |*=========================================================================*|\n\n");
    clear();

    profession();

    printf("     \t\t\t\tVeuillez choisir un nombre pour r%cpondre : ",130);
    scanf("%d",&n);
    while(n<1 || n>5){
        printf("     \n\t\t\t\tChoisisez un choix valide s'il vous plait : ");
        scanf("%d",&n);}
    printf("\n\n");
    clear();
    espace_lecteur(n);

    if(n==1 || n==2 || n==3 || n==4){

    printf(" Cher lecteur\n\n Si c'%ctait votre premi%cre visite, vous devez d'abord s'inscrire, pour cela merci de tapez 1.\n Si vous %ctes d%cj%c inscrit dans notre biblioth%cque, merci de tapez 2.\n\n",130,138,136,130,133,138);
    printf("  \t\t\tS'il vous plait tapez votre choix ici ----> ");
    scanf("%d",&m);
    while(m!=1 && m!=2){
        printf("  \t\t\tVeuillez s'il vous plait tapez 1 ou 2 ----> ");
        scanf("%d",&m);
    }
    if (m==2){
        printf("\n\n Veuillez entrer les informations suivantes :\n");
        printf("\t ----> NOM : ");
        scanf("%s",&nom);
        printf("\t ----> PRENOM : ");
        scanf("%s",&prenom);
        printf("\n\n");
        printf("\n Voulez-vous un rappel du r%cglement de la biblioth%cque ? Si oui, merci de tapez 1, si non, merci de tapez 0.\n\n",130,138);
        printf("  \t\t\tS'il vous plait tapez votre choix ici ----> ");
        scanf("%d",&c);
        while(c!=1 && c!=0){
            printf("  \t\t\tVeuillez s'il vous plait tapez 1 ou 0 ----> ");
            scanf("%d",&c);
        }
        if(c==1){
            printf("\n Voici donc le r%cglement de la biblioth%cque:\n",130,138);
            reglement(n);
            clear();
            espace_lecteur(n);
        }
        if(c==0)
            printf("\n D'accord, comme vous voulez \1\n\n");
    }

    if (m==1){
        printf("\n\nAvant de s'insrire, lisez attentivement le r%cglement qui suit : \n",130,138);
        clear();
        espace_lecteur(n);
        reglement(n);
        clear();
        espace_lecteur(n);
        printf("\n Si vous acceptez ce qui est dans le r%cglement, veuillez tapez 1 pour continuer, si non veuillez tapez 0 pour quitter.\n",130);
        printf("\n  \t\t\tS'il vous plait tapez votre choix ici ----> ");
        scanf("%d",&d);
        while(d!=1 && d!=0){
            printf("  \t\t\tVeuillez s'il vous plait tapez 1 ou 0 ----> ");
            scanf("%d",&d);
        }
        if(d==1){
            printf("\n\n Maintenant veuillez remplir les champs suivants pour s'inscrire :\n");
            printf("\n\t_____________________________________________________________________________________________________________\n\n");
            printf("\t ----> NOM : ");
            scanf("%s",informations.nom);
            printf("\t ----> PRENOM : ");
            scanf("%s",informations.prenom);
            if(n==1){
                printf("\t ----> NIVEAU [Cycle pr%cparatoire (1), cycle d'ing%cnieur (2)] : ",130,130);
                scanf("%d",&informations.niveau);
                while(informations.niveau != 1 && informations.niveau != 2){
                    printf("\t\tVeuillez choisir 1 ou 2 : ");
                    scanf("%d",&informations.niveau);
                    if(informations.niveau==1 || informations.niveau==2)
                       printf("\n");
                }
                printf("\t ----> FILIERE [GI(1), GTR(2), GINDUS(3), GAERO(4), GPMA(5) ou aucun(6)] : ");
                scanf("%d",&informations.filiere);
                while(informations.filiere>6 || informations.filiere<1){
                    printf("\t\tVeuillez choisir un nombre de 1 %c 6 : ",133);
                    scanf("%d",&informations.filiere);
                    if(informations.filiere>=1 && informations.filiere<=6)
                       printf("\n");
                }
              }
             if(n==2 || n==4){
                 printf("\t ----> DEPARTEMENT [CP(1), INDUS(2), INFO & GTR(3), AUCUN(4)] : ");
                 scanf("%d",&informations.departement);
                 while(informations.departement>4 || informations.departement<1){
                    printf("\t\tVeuillez choisir un nombre de 1 %c 7 : ",133);
                    scanf("%d",&informations.departement);
                    if(informations.departement>=1 && informations.departement<=7)
                       printf("\n");
                 }
               }
             if(n==3){
                 printf("\t ----> MATIERE ENSEIGNEE : ");
                 scanf("%s",informations.matiere);
             }
             printf("\t ----> NUMERO CIN : ");
             scanf("%s",informations.cin);
             printf("\t ----> ANNEE UNIVERSITAIRE (aaaa-aaaa) : ");
             scanf("%s",informations.annee);
             printf("\n\t_____________________________________________________________________________________________________________\n\n\n");
            }
            clear();
            espace_lecteur(n);
            if(n==3){
                printf("\n\t\t\t _________________________");
                printf("\n\t\t\t|                         |");
                printf("\n\t\t\t|   CHARTE DU VACATAIRE   |");
                printf("\n\t\t\t|_________________________|\n\n");
                printf("  Je soussigne : \n\n");
                printf("\t---> Nom :%s\n",informations.nom);
                printf("\t---> Pr%cnom :%s\n",130,informations.prenom);
                printf("\t---> Mati%cre :%s\n",138,informations.matiere);
                printf("\t---> CIN :%s\n",informations.cin);
                printf("\t---> Ann%ce universitaire :%s\n\n",130,informations.annee);
                printf(" Etre en r%cgle avec la biblioth%cque de l'ENSA SAFI: n'ai plus d'ouvrage(s) en ma possession.\n\n\n",138,138);
                printf(" Fait %c Safi, le: \n\n\n",133);
                printf(" Signature et cachet de la biblioth%cque: \n\n\n\n *******************************************************************************************\n\n",138);
                printf("\t\t ATTENTION ! Cette charte obligatoirement vis%ce par la biblioth%cque sera demand%ce lors de votre r%cnum%cration au service Affaires\n\t%cconomique et financi%cre m%cme si vous n'avez jamais emprunt%c de documents,et devra %ctre dat%ce et sign%ce pour la donn%ce au responsable de la biblioth%cque.\n\n\n\n\n",130,138,130,130,130,130,138,136,130,136,130,130,130,138);
            }
            else{

                printf("\n\t\t\t _______________________");
                printf("\n\t\t\t|                       |");
                printf("\n\t\t\t|   CHARTE DU LECTEUR   |");
                printf("\n\t\t\t|_______________________|\n\n");
                printf("  Je soussigne : \n\n");
                if(n==1){
                   printf("\t---> NOM : %s\n",informations.nom);
                   printf("\t---> PRENOM :%s\n",informations.prenom);
                   switch(informations.niveau){
                   case 1:
                       printf("\t---> Niveau : cycle precparatoire\n",130);
                       break;
                   case 2:
                       printf("\t---> Niveau :cycle ingenieurs\n");
                       switch(informations.filiere){
                       case 1:
                           printf("\t---> FILERE :Genie informatique\n",138);
                           break;
                       case 2:
                           printf("\t---> FILERE :Genie r%cseaux et t%cl%ccommunications\n",138,130,130);
                           break;
                       case 3:
                           printf("\t---> FILERE :Genie industriel\n",138);
                           break;
                       case 4:
                           printf("\t---> FILIERE :Genie aeronautique\n",138);
                           break;
                       case 5:
                           printf("\t---> FILERE :Genie de procecdecs et matecriaux avancecs\n",138,130,138,130,138);
                           break;
                       default:
                           printf("");
                           break;
                       }
                    default:
                    printf("");
                    break;
                   }
                   printf("\t---> CIN :%s\n",informations.cin);
                   printf("\t---> Ann%ce universitaire :%s\n",130,informations.annee);
             }
             if(n==2 || n==4){
                   printf("\t---> Nom :%s\n",informations.nom);
                   printf("\t---> Prenom :%s\n",informations.prenom);
                   switch(informations.departement){
                       case 1:
                           printf("\t---> Departement :cycle pr%cparatoire\n",130);
                           break;
                       case 2:
                           printf("\t---> Departement :industriel\n");
                           break;
                       case 3:
                           printf("\t---> Departement :informatique, r%cseau et t%cl%ccommunication\n",130,130,130);
                           break;
                       case 4:
                           printf("");
                           break;
                       default:
                           break;
                    }
                   printf("\t---> CIN :%s\n",informations.cin);
                   printf("\t---> Ann%ce universitaire :%s\n",130,informations.annee);
             }
             if(n==3){
                   printf("\t---> Nom :%s\n",informations.nom);
                   printf("\t---> Pr%cnom :%s\n",130,informations.prenom);
                   printf("\t---> Mati%cre :%s\n",138,informations.matiere);
                   printf("\t---> CIN :%s\n",informations.cin);
                   printf("\t---> Ann%ce universitaire :%s\n",130,informations.annee);
             }
             printf("\n************************\n");
             printf(" Avoir lu et pris conscience du r%cglement inf%crieur de la biblioth%cque de l'ENSA Safi et m'engag%c %c : \n",138,130,138,130,133);
             printf("\n\t- Respecter les d%clai de pr%ct. Tout retard dans la restitution des ouvrages est sanctionn%c par une suspension du pr%ct d'une dur%ce \n\tde 15 jours et 1 mois en cas de r%ccidive.",130,136,130,136,130,130);
             printf("\n\t- Pr%cserver une ambiance propice au travail et %c l'%ctude, le silence doit %ctre respect%c, les t%cl%cphones portables d%csactiv%cs \n\tainsi que toute autre source de nuisance sonore.",130,133,130,136,130,130,130,130,130);
             printf("\n\t- Ne pas utiliser les prises %clectriques pour le rechargement des t%cl%cphones portables.",130,130,130);
             printf("\n\t- Ne pas d%cgrader les ouvrages emprunt%cs: ne pas souligner, ne pas %ccrire ni photocopier les documents de la biblioth%cque.",130,130,130,138);
             printf("\n\t- Ne pas tenter de sortir des documents non enregistr%cs par le responsable de pr%ct.",130,136);
             printf("\n\n ************************\n ATTENTION : toute tentative est s%cv%crement sanctionn%ce et pourrait avoir de graves cons%cquences sur la poursuite de vos %ctudes: \n",130,138,130,130,130);
             printf("\n\t- Ne pas pr%cter ma carte d'%ctudiant et %c signaler imm%cdiatement toute perte. Je suis responsable des ouvrages emprunt%cs avec ma carte.",136,130,133,130,130);
             printf("\n\t- Ne pas fumer et ne pas apporter de boissons ni de nourriture dans la biblioth%cque (pour des raisons d'hygi%cne et de s%ccurit%c, \n\tet pour pr%cserver la qualit%c de l'environnement de travail).",138,138,130,130,130,130);
             printf("\n\n ************************\n N.B :\n\n");
             printf(" Le non respect de ces instructions peut priver temporairement ou d%cfinitivement le lecteur de ses droits de b%cn%cficier des services de la biblioth%cque.",130,130,130,138);
             printf("\n Toute insuite, menace ou mauvais comportement envers le responsable de la biblioth%cque sera signal%c %c la direction de l'Ecole qui prendra les mesures\n de sanction n%ccessaires qui peuvent aller jusqu'au conseil disciplinaire.",138,130,133,130);
             printf("\n\n ************************\n\n\t     CETTE CHARTE DEVRA ETRE DATEE ET SIGNEE ET VOUS DEVEZ LA DONNER AVEC VOTRE CARTE D'ETUDIANT, AU RESPONSABLE DE LA BIBLIOTHEQUE .");
             printf("\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t Date:\n");
             printf("\n\n\t\t\t\t\t\t\t\t\t\t\t\t Signature:\n\n");
            }
        if(d==0){
            printf("\n On est d%csol%c, mais c'est ca le r%cglement de notre biblioth%cque.",130,130,130,138);
            printf("\n");
            printf("\n     *--------------------------------*\n");
            for(i=0; i<2; i++){
                    if(i==1)
                        printf("     *\t\2 MERCI POUR VOTRE VISITE \2   *\n",138);
                    printf("     *\t\t\t\t      *\n");
            }
            printf("     *--------------------------------*\n\n\n\n\n\n");
            exit(0);
        }
    }
    clear();
    espace_lecteur(n);
    }
    printf("\n\n\n");


    if(n==5){

    do{
    Menu_respo();
    printf("\n S'il vous plait taper votre choix ici ----> ");
    scanf("%d",&choix1);
    while(choix1<1||choix1>5){
    printf(" Veuillez s'il vous plait tapez un nombre de 1 %c 5 ----> ",133);
        scanf("%d",&choix1);
        printf("\n\n\n\n\n\n\n");
    }
   switch(choix1){
    case 1:
        clear();
        espace_lecteur(n);
        printf(" Entrer le code de votre livre : ");
        scanf("%s",livre1);
        p=fopen("livre.txt","r");
     if(p==NULL){
        printf("Echec d'ouverture");
     }
    while(!feof(p)){
    fscanf(p,"%s",chaine1);
    if(strcmp(chaine1,livre1)==0){
           drapeau=1;
           break;
           }
     }

    if(drapeau==1){
        printf("\n\n\t\tLe livre que vous cherchez est empreint%c \1\n\n",130);
    }
    else {
       printf("\n\n\t\tLe livre que vous cherchez est dans la biblioth%cque \1\n\n",130);
    }
    fclose(p);

     break;
    case 2:
        clear();
        espace_lecteur(n);
              printf("\n \t La Liste  Des CODES Des Livres Emprunt%cs \n",130);
              p=fopen("livre.txt","r");
          if(p==NULL){
        printf("\n Echec d'ouverture");
          }
          while(!feof(p)){
                fscanf(p,"%s",chaine2);
                printf("\n \4 \t%s\n ",chaine2);
           }

          fclose(p);

            break;
     case 3:
         clear();
         espace_lecteur(n);
         categorie();
         printf("\n S'il vous plait taper votre choix ici ----> ");
         scanf("%d",&choix2);
         if(choix2==1||choix2==2||choix2==6||choix2==9 ){
         Souscategorie(choix2);
         printf("\n S'il vous plait taper votre choix ici ----> ");
         scanf("%d",&choix3);
         }
         clear();
         espace_lecteur(n);

         if(choix2==1){
         switch(choix3){
         case 1 : printf("\n \t\t\t\tALGEBRE \n");
         fichierajout("alg.math.txt");

            break;
            case 2 : printf("\n \t\t\t\tPROBABILITEE \n");
            fichierajout("proba.math.txt");

            break;
            case 3 : printf("\n \t\t\t\tCALCUL \n");
            fichierajout("calcul.math.txt");

            break;
            case 4 : printf("\n \t\t\t\tGENERAL \n");
            fichierajout("general.math.txt");

            break;
            case 5 : printf("\n \t\t\t\tANALYSE \n");
            fichierajout("analyse.math.txt");

            break ;
            default :
                break;

         }
         }
        if(choix2==2){
            switch(choix3){
            case 1 : printf("\n  \t\t\t\tSYSTEME EMPLOI\n ");
           fichierajout("Informatique.S.E-LINUX.txt");
            break;
            case 2 : printf("\n  \t\t\t\tBASE DE DONNEE \n");
            fichierajout("Informatique.BASE-DE-DONNEES.txt");
            break;
            case 3 : printf("\n  \t\t\t\tARCHITECTURE D'ORDINATEUR \n");
            fichierajout("Informatique.Architecture-de-I_ordinateur.txt");
            break;
            case 4 : printf("\n \t\t\t\t SQL \n");
            fichierajout("Informatique.SQL.txt");
            break;
            case  5: printf("\n \t\t\t\t ORACLE\n");
            fichierajout("informatique.oracle.txt");
            break;
            case 6 : printf("\n \t\t\t\t GENERAL\n");
            fichierajout("informatique.info general.txt");
            break;
            case 7 : printf("\n \t\t\t\t CALCUL\n");
            fichierajout("informatique.calculs.txt");
            break;
            case 8 : printf("\n \t\t\t\t MATLAB\n");
            fichierajout("informatique.matlab.txt");
            break;
            default :
                break;
            }
        }
        if(choix2==3){
             printf("\n \t\t\t\t AUTOMATIQUE\n");
            fichierajout("automatique.txt");

        }
        if(choix2==4){
          printf("\n  \t\t\t\tELECTRONIQUE \n");
            fichierajout("electronique.txt");
        }
         if(choix2==5){
             printf("\n  \t\t\t\tGENIE INDUS \n");
            fichierajout("INDUS.txt");
        }
        if(choix2==6){
            switch(choix3){
            case 1 : printf("\n  \t\t\t\tMECANIQUE\n ");
            fichierajout("phy.mecanique.txt");
            break;
            case 2 : printf("\n  \t\t\t\tTHERMODYNAMIQUE \n");
            fichierajout("phy.thermodynamique.txt");
            break;
            case 3 : printf("\n  \t\t\t\tTRANSFERT THERMIQUE\n");
            fichierajout("phy.transfers-thermique.txt");
            break;
            case 4 : printf("\n  \t\t\t\tELECTROMAGNETISME \n");
            fichierajout("phy.electroma.txt");
            break;
            case  5: printf("\n  \t\t\t\tGENERAL \n");
            fichierajout("phy.generel.txt");
            break;
            case 6 : printf("\n  \t\t\t\tELECTRICITE \n");
            fichierajout("phy.electricite.txt");
            break;
            case 7 : printf("\n  \t\t\t\tMATERIAUX\n");
            fichierajout("phy.materiaux.txt");
            break;
            case 8 : printf("\n  \t\t\t\tOPTIQUE\n");
            fichierajout("phy.optique.txt");
            break;
            case 9 : printf("\n  \t\t\t\tONDE \n");
            fichierajout("phy.Ondes.txt");
            break;
            default :
                break;
            }
        }
        if(choix2==7){
             printf("\n  \t\t\t\tCHIMIE\n");
            fichierajout("chimie.txt");

        }
         if(choix2==8){
              printf("\n  \t\t\t\tGPMC \n");
            fichierajout("GPMC.txt");
        }
        if(choix2==9){
            switch(choix3){
            case 1 : printf("\n  \t\t\t\tENCYCLOPEDIE \n");
            fichierajout("div.ency.txt");
            break;
            case 2 : printf("\n  \t\t\t\tDICTIONNAIRE\n");
            fichierajout("div.dictio.txt");
            break;
            case 3 : printf("\n \t\t\t\t ROMANS\n");
            fichierajout("div.romans.txt");
            break;
            case 4 : printf("\n \t\t\t\t SOCIOLOGIE\n");
            fichierajout("div.socio.txt");

            break;
            case 5 : printf("\n  \t\t\t\tECONOMIE\n");
            fichierajout("div.economie.txt");
            break;
            case 6 : printf("\n \t\t\t\t FINANCE ET COMTABILITE\n");
            fichierajout("div.FC.txt");
            break;
            case 7  : printf("\n  \t\t\t\tLANGUE ET COMMUNICATION\n");
            fichierajout("div.LEC.txt");
            break;
            case 8 : printf("\n  \t\t\t\tGENERALES\n");
            fichierajout("div.general.txt");
            break;
            default :
                break;

            }
        }
        break;
            case 4 :
                clear();
                espace_lecteur(n);
         categorie();
         printf("\n S'il vous plait taper votre choix ici ----> ");
         scanf("%d",&choix2);
         if(choix2==1||choix2==2||choix2==6||choix2==9 ){
         Souscategorie(choix2);
         printf("\n S'il vous plait taper votre choix ici ----> ");
         scanf("%d",&choix3);
         }
        if(choix2==1){
         switch(choix3){
         case 1 : printf("\n  \t\t\t\tALGEBRE \n");
         supprimer_livre("alg.math.txt");

            break;
            case 2 : printf("\n  \t\t\t\tPROBABILITEE \n");
          supprimer_livre("proba.math.txt");

            break;
            case 3 : printf("\n  \t\t\t\tCALCUL \n");
           supprimer_livre("calcul.math.txt");

            break;
            case 4 : printf("\n  \t\t\t\tGENERAL \n");
            supprimer_livre("general.math.txt");

            break;
            case 5 : printf("\n  \t\t\t\tANALYSE \n");
           supprimer_livre("analyse.math.txt");

            break ;
            default :
                break;

         }
         }
        if(choix2==2){
            switch(choix3){
            case 1 : printf("\n  \t\t\t\tSYSTEME EMPLOI\n ");
           supprimer_livre("Informatique.S.E-LINUX.txt");
            break;
            case 2 : printf("\n  \t\t\t\tBASE DE DONNEE \n");
           supprimer_livre("Informatique.BASE-DE-DONNEES.txt");
            break;
            case 3 : printf("\n \t\t\t\t ARCHITECTURE D'ORDINATEUR \n");
           supprimer_livre("Informatique.Architecture-de-I_ordinateur.txt");
            break;
            case 4 : printf("\n \t\t\t\t SQL \n");
            supprimer_livre("Informatique.SQL.txt");
            break;
            case  5: printf("\n \t\t\t\t ORACLE\n");
           supprimer_livre("informatique.oracle.txt");
            break;
            case 6 : printf("\n \t\t\t\t GENERAL\n");
           supprimer_livre("informatique.info general.txt");
            break;
            case 7 : printf("\n \t\t\t\t CALCUL\n");
         supprimer_livre("informatique.calculs.txt");
            break;
            case 8 : printf("\n \t\t\t\t MATLAB\n");
            supprimer_livre("informatique.matlab.txt");
            break;
            default :
                break;
            }
        }
        if(choix2==3){
             printf("\n \t\t\t\t AUTOMATIQUE\n");
            supprimer_livre("automatique.txt");

        }
        if(choix2==4){
          printf("\n \t\t\t\t ELECTRONIQUE \n");
           supprimer_livre("electronique.txt");
        }
         if(choix2==5){
             printf("\n \t\t\t\t GENIE INDUS \n");
            supprimer_livre("INDUS.txt");
        }
        if(choix2==6){
            switch(choix3){
            case 1 : printf("\n \t\t\t\t MECANIQUE\n ");
            supprimer_livre("phy.mecanique.txt");
            break;
            case 2 : printf("\n  \t\t\t\tTHERMODYNAMIQUE \n");
            supprimer_livre("phy.thermodynamique.txt");
            break;
            case 3 : printf("\n  \t\t\t\tTRANSFERT THERMIQUE\n");
            supprimer_livre("phy.transfers-thermique.txt");
            break;
            case 4 : printf("\n  \t\t\t\tELECTROMAGNETISME \n");
           supprimer_livre("phy.electroma.txt");
            break;
            case  5: printf("\n  \t\t\t\tGENERAL \n");
            supprimer_livre("phy.generel.txt");
            break;
            case 6 : printf("\n  \t\t\t\tELECTRICITE \n");
            supprimer_livre("phy.electricite.txt");
            break;
            case 7 : printf("\n  \t\t\t\tMATERIAUX\n");
            supprimer_livre("phy.materiaux.txt");
            break;
            case 8 : printf("\n  \t\t\t\tOPTIQUE\n");
            supprimer_livre("phy.optique.txt");
            break;
            case 9 : printf("\n  \t\t\t\tONDE \n");
           supprimer_livre("phy.Ondes.txt");
            break;
            default :
                break;
            }
        }
        if(choix2==7){
             printf("\n  \t\t\t\tCHIMIE\n");
            supprimer_livre("chimie.txt");

        }
         if(choix2==8){
              printf("\n  \t\t\t\tGPMC \n");
           supprimer_livre("GPMC.txt");
        }
        if(choix2==9){
            switch(choix3){
            case 1 : printf("\n \t\t\t\t ENCYCLOPEDIE \n");
           supprimer_livre("div.ency.txt");
            break;
            case 2 : printf("\n  \t\t\t\tDICTIONNAIRE\n");
            supprimer_livre("div.dictio.txt");
            break;
            case 3 : printf("\n  \t\t\t\tROMANS\n");
           supprimer_livre("div.romans.txt");
            break;
            case 4 : printf("\n  \t\t\t\tSOCIOLOGIE\n");
            supprimer_livre("div.socio.txt");

            break;
            case 5 : printf("\n  \t\t\t\tECONOMIE\n");
           supprimer_livre("div.economie.txt");
            break;
            case 6 : printf("\n \t\t\t\t FINANCE ET COMTABILITE\n");
            supprimer_livre("div.FC.txt");
            break;
            case 7  : printf("\n \t\t\t\t LANGUE ET COMMUNICATION\n");
           supprimer_livre("div.LEC.txt");
            break;
            case 8 : printf("\n  \t\t\t\tGENERALES\n");
           supprimer_livre("div.general.txt");
            break;
            default :
                break;

            }
                break;
            default :
                break ;
    }
    }

printf("\n");
clear();
espace_lecteur(n);
}while(choix1!=5);
 if(choix1==5)
    exit(0);

    }


    else{
        printf(" Maintentant veuillez choisir la cat%cgorie du livre que vous voulez emprunt%c : \n",130,130);
        categorie();
        printf("\n\n Tapez votre choix ici s'il vous plait ----> ");
        scanf("%d",&choix);
        while(choix<1||choix>9){
             printf(" Veuillez saisir un choix valide ----> ");
             scanf("%d",&choix);
        }
        matiers(choix);
        printf("\n\n\n\nVeuillez taper le code du livre que vous voulez emprunt%c ----> ",130);
        scanf("%s",&code);
        printf("\n");
        F=fopen("livre.txt","a");
        if(F==NULL){
            printf("\n\n\t\ Echec d'ouverture du fichier !");
        }
        fprintf(F,"%s\n",code);
        clear();
        espace_lecteur(n);
        do{
        printf("\n\nVoulez_vous avoir un clin d'oeil sur les livres valables dans notre biblioth%cque ?\n\n",138);
        printf("\t\t Tapez votre choix ici s'il vous plait: oui(1),non(0) ----> ");
        scanf("%d",&choix4);
        while(choix4!= 1 && choix4!= 0){
             printf(" Veuillez saisir un choix valide ----> ");
             scanf("%d",&choix4);
        }
        if(choix4==1){

            categorie();
            printf("\n\n Tapez votre choix ici s'il vous plait ----> ");
            scanf("%d",&choix);
            while(choix<1||choix>9){
                printf(" Veuillez saisir un choix valide ----> ");
                scanf("%d",&choix);
            }
           matiers(choix);
           printf("\n\n");
           clear();
           espace_lecteur(n);
         }
        }while(choix4!=0);
        if(choix4==0){
            printf("\n D'accord, comme vous voulez \1\n\n Voici donc votre ticket:\n\n");
            if(m==2){
                f=fopen("ticket.txt","w");
                if(f==NULL)
                    printf("\n Ouverture du fichier echou%e !",130);
                fprintf(f,"\n ================= *TICKET DU LECTEUR* ================\n\n");
                fprintf(f,"\t-PRENOM : %s",prenom);
                fprintf(f,"\n\t-NOM : %s",nom);
                fprintf(f,"\n\t-CODE DE LIVRE EMPRUNTE : %s",code);
                switch(n){
                 case 1:
                    fprintf(f,"\n\t-DATE DE DEPOT : %s",Date(5));
                    break;
                 case 2:
                    fprintf(f,"\n\t-DATE DE DEPOT : %s",Date(15));
                    break;
                 case 3:
                    fprintf(f,"\n\t-DATE DE DEPOT : %s",Date(5));
                    break;
                 case 4:
                    fprintf(f,"\n\t-DATE DE DEPOT : %s",Date(10));
                    break;
                 }
                fprintf(f,"\n\n ======================================================\n\n");
                fclose(f);
                printf("\n\n\n\t\t\t\t\2 UNE BIBLIOTHEQUE EST LE CARREFOUR DE TOUS LES REVES DE L'HUMANITE \2\n\n\n");
                f=fopen("ticket.txt","r");
                while(fgets(ligne,sizeof(ligne),f)){
                    printf("%s",ligne);
                }
                fclose("f");
            }
            if(m==1){
                f=fopen("ticket.txt","w");
                if(f==NULL)
                    printf("\n Ouverture du fichier echou%e !",130);
                fprintf(f,"\n ================= *TICKET DU LECTEUR* ================\n\n");
                fprintf(f,"\t-PRENOM : %s",informations.prenom);
                fprintf(f,"\n\t-NOM : %s",informations.nom);
                fprintf(f,"\n\t-CODE DE LIVRE EMPRUNTE : %s",code);
               switch(n){
                 case 1:
                    fprintf(f,"\n\t-DATE DE DEPOT : %s",Date(5));
                    break;
                 case 2:
                    fprintf(f,"\n\t-DATE DE DEPOT : %s",Date(15));
                    break;
                 case 3:
                    fprintf(f,"\n\t-DATE DE DEPOT : %s",Date(5));
                    break;
                 case 4:
                    fprintf(f,"\n\t-DATE DE DEPOT : %s",Date(10));
                    break;
                 }
                fprintf(f,"\n\n ======================================================\n\n");
                fclose(f);
                printf("\n\n\n\t\t\t\tUNE BIBLIOTHEQUE EST LE CARREFOUR DE TOUS LES REVES DE L'HUMANITE \2\n\n\n");
                f=fopen("ticket.txt","r");
                while(fgets(ligne,sizeof(ligne),f)){
                    printf("%s",ligne);
                }
                fclose("f");
            }
          exit(0);
        }
    }
    while(choix4!=1 || choix4!=0);
    printf("\n\n\n\n");

    printf("\n\n Soyez les bienvenus %c notre biblioth%cque et Merci pour votre visite \2\n\n\t\t\t\t A la prochaine \2",133,138);





    return 0;
}
