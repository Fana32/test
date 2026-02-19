#include <stdio.h>
int main(){
     float PI,BMI,taille,poids;
     char sexe;
 printf("Saisir votre taille, poids,et sexe");
scanf("%f %f %c",&taille,&poids,&sexe);
if(sexe=='M'){
    PI=(taille-100)-(taille-150)/4;
    printf("le poids ideal:%f",PI);
}
 else{
      PI=(taille-100)-(taille-120)/4;
      printf("le poids ideal:%f",PI);
 }
 BMI= poids/(taille*taille);
 if(BMI<=27){
    printf("Normale");
 } else
 if (BMI>27 && BMI<32){
    printf("obese");
 }
 else{
    printf("Malade");
    }
return 0;
}
