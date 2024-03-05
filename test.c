
#include <stdio.h>
int lengthinput(float *value,int preunit);
void lengthoutput(float *value,int postunit);
int weightinput(float *value,int preunit);
void weightoutput(float *value,int postunit);
int timeinput(float *value,int preunit);
void timeoutput(float *value,int postunit);
int speedinput(float *value,int predist,int pretime);
void speedoutput(float *value,int postdist,int posttime);


int main () {
	int num,preunit,postunit;
	float value;
	do{
		printf("Choose the following conversion method, Press anything else if you want to exit:\n1.Distance/Length\n2.Weight\n3.Temperature\n4.Time\n5.Speed\n6.Exit\n");
		scanf("%d",&num);
		if(num<1 || num>6){
		printf("Error, Invalid Input");
		break;}
		switch (num){
			case 1:
			printf("Welcome to Distance/Length converter\nThe units available for conversion are\n(m) Meters,(km) Kilometers,(dm) Decimeter,(cm) Centimeter,(in) Inches,(ft) Feet,(mi) Miles\n------------------------------------------------\n");
			printf("Enter the value you want to convert\n");
			scanf("%f",&value);
			printf("Choose the unit before conversion\n1.(m) Meters\n2.(km) Kilometers\n3.(dm) Decimeter\n4.(cm) Centimeter\n5.(in) Inches\n6.(ft) Feet\n7.(mi) Miles\n");
			scanf("%d",&preunit);
			lengthinput(&value,preunit);
			if (preunit>0 && preunit<8 ) {
			printf("Choose the unit after conversion\n1.(m) Meters\n2.(km) Kilometers\n3.(dm) Decimeter\n4.(cm) Centimeter\n5.(in) Inches\n6.(ft) Feet\n7.(mi) Miles\n");
			scanf("%d",&postunit);
			lengthoutput(&value,postunit);}
			else printf("Not an available conversion\n");
			break;
			
			
			case 2:
			printf("Welcome to Mass converter\nThe units available for conversion are\n(g) Grams,(kg) Kilograms,(mg) Milligrams,(t) Tonnes\n------------------------------------------------\n");
			printf("Enter the value you want to convert\n");
			scanf("%f",&value);
			printf("Choose the unit before conversion\n1.(g) Grams\n2.(kg) Kilograms\n3.(mg) Milligrams\n4.(t) Tonnes\n");
			scanf("%d",&preunit);
			weightinput(&value,preunit);
			if (preunit>0 && preunit<5 ) {
			printf("Choose the unit after conversion\n1.(g) Grams\n2.(kg) Kilograms\n3.(mg) Milligrams\n4.(t) Tonnes\n");
			scanf("%d",&postunit);
			weightoutput(&value,postunit);}
			else printf("Not an available conversion\n");
			break;
			
			
			case 4:
			printf("Welcome to Time converter\nThe units available for conversion are\n(s) Seconds,(m) Minutes,(h) Hours\n------------------------------------------------\n");
			printf("Enter the value you want to convert\n");
			scanf("%f",&value);
			printf("Choose the unit before conversion\n1.(s) Seconds\n2.(m) Minutes\n3.(h) Hours\n");
			scanf("%d",&preunit);
			timeinput(&value,preunit);
			if (preunit>0 && preunit<4 ) {
			printf("Choose the unit after conversion\n1.(s) Seconds\n2.(m) Minutes\n3.(h) Hours\n");
			scanf("%d",&postunit);
			timeoutput(&value,postunit);}
			else printf("Not an available conversion\n");
			break;
		    
			case 5:
			int predist,pretime,postdist,posttime;
			printf("Welcome to speed converter\nThe units available for conversion of time are\n(s) Seconds,(m) Minutes,(h) Hours\n------------------------------------------------\n");
			printf("Welcome to speed converter\nThe units available for conversion of distance are\n(m) Meters,(km) Kilometers,(dm) Decimeter,(cm) Centimeter,(in) Inches,(ft) Feet,(mi) Miles\n------------------------------------------------\n");
			printf("Enter the value you want to convert\n");
			scanf("%f",&value);
            printf("Choose the unit before conversion\n1.(m) Meters\n2.(km) Kilometers\n3.(dm) Decimeter\n4.(cm) Centimeter\n5.(in) Inches\n6.(ft) Feet\n7.(mi) Miles\n");
			scanf("%d",&predist);
			printf("Choose the unit before conversion\n1.(s) Seconds\n2.(m) Minutes\n3.(h) Hours\n");
			scanf("%d",&pretime);
			speedinput(&value,predist,pretime);
			if (predist>0 && predist<8 && pretime>0 && pretime<4 ) {
			printf("Choose the unit after conversion\n1.(s) Seconds\n2.(m) Minutes\n3.(h) Hours\n");
			scanf("%d",&posttime);
			printf("Choose the unit after conversion\n1.(m) Meters\n2.(km) Kilometers\n3.(dm) Decimeter\n4.(cm) Centimeter\n5.(in) Inches\n6.(ft) Feet\n7.(mi) Miles\n");
			scanf("%d",&postdist);
			speedoutput(&value,postdist,posttime);}
			else printf("Not an available conversion\n");
			break;
		
		}
	}while(num!=6);
}
int lengthinput(float *value,int unit){
	//Converting length into meters//
	switch (unit){
		case 1: 
		break;
		case 2: *value=*value*1000;
		break;
		case 3: *value=*value/10;
		break;
		case 4: *value=*value/100;
		break;
		case 5: *value=*value/39.37;
		break;
		case 6: *value=*value/3.281;
		break;
		case 7: *value=*value*1609;
		break; 
}
}
void lengthoutput(float *value,int unit){
	//Converting meters into desired length//
	printf("Your result is:\n");
	switch (unit){
		case 1:
	    printf("%f m\n",*value);
		break;
		case 2: *value=*value/1000;
		printf("%f km\n",*value);
			break;
		case 3: *value=*value*10;
		printf("%f dm\n",*value);
		break;
		case 4: *value=*value*100;
		printf("%f cm\n",*value);
		break;
		case 5: *value=*value*39.37;
		printf("%f in\n",*value);
		break;
		case 6: *value=*value*3.281;
		printf("%f ft\n",*value);
		break;
		case 7: *value=*value/1609;
		printf("%f mi\n",*value);
		break;
		default: printf("Not an available conversion\n"); 
}
}



int weightinput(float *value,int unit){
	//Converting weight into grams//
	switch (unit){
		case 1: 
		break;
		case 2: *value=*value*1000;
	    break;
		case 3: *value=*value/1000;
		break;
		case 4: *value=*value*1000000;
		break;
}
}
void weightoutput(float *value,int unit){
	//Converting grams into desired weight//
	printf("Your result is:\n");
	switch (unit){
		case 1:
	    printf("%f g\n",*value);
		break;
		case 2: *value=*value/1000;
		printf("%f kg\n",*value);
			break;
		case 3: *value=*value*1000;
		printf("%f mg\n",*value);
		break;
		case 4: *value=*value/1000000;
		printf("%f tonnes\n",*value);
		break;
		default: printf("Not an available conversion\n"); 
	}
}

void timeinput(float *value,int unit,int *count){
//Converting time into seconds//
	switch (unit){
		case 1: 
		break;
		case 2: *value=*value*60;
	    break;
		case 3: *value=*value*3600;
		break;
}
}

void timeoutput(float *value,int unit){
	//Converting seconds into desired time//
	printf("Your result is:\n");
	switch (unit){
		case 1:
	    printf("%f s\n",*value);
		break;
		case 2: *value=*value/60;
		printf("%f minutes\n",*value);
		break;
		case 3: *value=*value/3600;
		printf("%f hrs\n",*value);
		break;
		default: printf("Not an available conversion\n"); 
}
}


int speedinput(float *value,int unit,int unit1){
//Converting time into seconds//
	switch (unit1){
		case 1: 
		break;
		case 2: *value=*value/60;
	    break;
		case 3: *value=*value/3600;
		break;
	}

//Converting length into meters//
	switch (unit){
		case 1: 
		break;
		case 2: *value=*value*1000;
		break;
		case 3: *value=*value/10;
		break;
		case 4: *value=*value/100;
		break;
		case 5: *value=*value/39.37;
		break;
		case 6: *value=*value/3.281;
		break;
		case 7: *value=*value*1609;
		break; }
}


void speedoutput(float *value,int unit,int unit1){
//Converting meters into desired length//
	switch (unit){
		case 1:
		break;
		case 2: *value=*value/1000;
		break;
		case 3: *value=*value*10;
		break;
		case 4: *value=*value*100;
		break;
		case 5: *value=*value*39.37;
		break;
		case 6: *value=*value*3.281;
		
		break;
		case 7: *value=*value/1609;
		break;
		default: printf("Not an available conversion\n"); 
}
//Converting seconds into desired time//
	printf("Your result is:\n");
	switch (unit1){
		case 1:
	    printf("%f\n",*value);
		break;
		case 2: *value=*value/60;
		printf("%f\n",*value);
		break;
		case 3: *value=*value/3600;
		printf("%f \n",*value);
		break;
		default: printf("Not an available conversion\n"); 
}}


