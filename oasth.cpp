#include <iostream>

/*
Na zitaw tis ilikies twn epivatwn mexri na mpei ilikia == 0
ilikia<0 ton vrizoume
ilikia < 18 anilikos
ilikia <= 65 enilikos
ilikia > 65 ilikiomenos
posoi enilikoi anilikoi ilikiomenoi mphkan sto leoforeio
mesos oros ilikiwn
an oi iliomenoi plirwnoun 0.7 eisitirio, oi enilikoi plirwnoun 1.20 eisitirio kai oi anilikoi 0 posa lefta evgale to leoforio
na ektipwseis to pososto twn anilikwn enilikwn kai ilikomenwn

*/

int main() {
	
	int age;
	int i=1;
	int count_il=0;
	int count_en=0;
	int count_an=0;
	double mo;
	int sum_ages=0;
	int sum;
	float money=0;
	float pososto_il;
	float pososto_en;
	float pososto_an;
	
	
	do{
		printf("Poso xronwn einai o %ios epivatis; \n",i);
		scanf("%i",&age);
		i++;
		if (age < 0){
			printf("Eisai xazos!\n");
		}
		else if (age < 18){
			if (age!=0){
				printf("Eisai anilikos\n");
				sum_ages = sum_ages+age;
				count_an++;
			}
		}
		else if (age <= 65){
			printf("Eisai enilikos\n");
			count_en++;
			sum_ages = sum_ages+age;
			money += 1.20;
		}
		else{
			printf("Eisai ilikomenos\n");
			count_il++;
			sum_ages = sum_ages+age;
			money += 0.7;
		}		
	}while(age!=0);
	
printf("anilikoi: %d, enilikoi: %d, ilikiomenoi: %d\n\n",count_an,count_en,count_il);	

sum = count_en + count_il + count_an;
mo = (double)sum_ages/sum;
printf("O mo twn ilikiwn einai: %.2f\n\n",mo);

printf("To leoforeio evgale %.2f eurw\n\n",money);

pososto_an = (float)count_an/sum;
pososto_il = (float)count_il/sum;
pososto_en = (float)count_en/sum;

printf("Pososto anilikwn: %.2f%\nPososto enilikwn: %.2f%\nPososto ilikiomenwn: %.2f%",pososto_an,pososto_en,pososto_il);

}
