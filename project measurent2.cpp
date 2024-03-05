#include <stdio.h>
#include <stdlib.h>
FILE *fp,*length,*weight,*temp,*time,*speed;
void lengthinput(double *value,int preunit,int *count);
void lengthoutput(double *value,int postunit);
void weightinput(double *value,int preunit,int *count);
void weightoutput(double *value,int postunit);
void tempinput(double *value,int preunit,int *count);
void tempoutput(double *value,int postunit);
void timeinput(double *value,int preunit,int *count);
void timeoutput(double *value,int postunit);
void speedinput(double *value,int preunit,int *count);
void speedoutput(double *value,int postunit);
int main () {
	int num,preunit,postunit,count=0;
	double value;
	system("Color 7D");
	printf("Welcome to the measurement converter!!\n\n\n");
	fp=fopen("measurementconverter.txt","w+");
	length=fopen("lengthconverter.txt","w+");
	weight=fopen("weightconverter.txt","w+");
	temp=fopen("tempconverter.txt","w+");
	time=fopen("timeconverter.txt","w+");
	speed=fopen("speedconverter.txt","w+");
	do{
		num=0;
		printf("Choose the following conversion method, Press anything else if you want to exit:\n1.Distance/Length\n2.Weight\n3.Temperature\n4.Time\n5.Speed\n6.Exit\n");
		scanf("%d",&num);
		if(num<1 || num>6){
		printf("Error, Invalid Input");
		break;}
		else {
			count++;
		switch (num){
			case 1:
			printf("Welcome to Distance/Length converter\nThe units available for conversion are\n(m) Meters,(km) Kilometers,(dm) Decimeter,(cm) Centimeter,(in) Inches,(ft) Feet,(mi) Miles\n------------------------------------------------\n");
			printf("Enter the value you want to convert\n");
			scanf("%lf",&value);
			printf("Choose the unit before conversion\n1.(m) Meters\n2.(km) Kilometers\n3.(dm) Decimeter\n4.(cm) Centimeter\n5.(in) Inches\n6.(ft) Feet\n7.(mi) Miles\n");
			scanf("%d",&preunit);
			lengthinput(&value,preunit,&count);
			if (preunit>0 && preunit<8 ) {
			printf("Choose the unit after conversion\n1.(m) Meters\n2.(km) Kilometers\n3.(dm) Decimeter\n4.(cm) Centimeter\n5.(in) Inches\n6.(ft) Feet\n7.(mi) Miles\n");
			scanf("%d",&postunit);
			lengthoutput(&value,postunit);}
			else printf("Not an available conversion\n");
			break;
			
			
			case 2:
			printf("Welcome to weight converter\nThe units available for conversion are\n(g) Grams,(kg) Kilograms,(mg) Milligrams,(t) Tonnes,(p) Pounds\n------------------------------------------------\n");
			printf("Enter the value you want to convert\n");
			scanf("%lf",&value);
			printf("Choose the unit before conversion\n1.(g) Grams\n2.(kg) Kilograms\n3.(mg) Milligrams\n4.(t) Tonnes\n5.(p) Pounds\n");
			scanf("%d",&preunit);
			weightinput(&value,preunit,&count);
			if (preunit>0 && preunit<6 ) {
			printf("Choose the unit after conversion\n1.(g) Grams\n2.(kg) Kilograms\n3.(mg) Milligrams\n4.(t) Tonnes\n5.(p) Pounds\n");
			scanf("%d",&postunit);
			weightoutput(&value,postunit);}
			else printf("Not an available conversion\n");
			break;
			
			
			case 3:
			printf("Welcome to Temperature converter\nThe units available for conversion are\n(C) Celcius,(F) Fahrenheit,(K) Kelvin\n------------------------------------------------\n");
			printf("Enter the value you want to convert\n");
			scanf("%lf",&value);
			printf("Choose the unit before conversion\n1.(C) Celcius\n2.(F) Fahrenheit\n3.(K) Kelvin\n");
			scanf("%d",&preunit);
			tempinput(&value,preunit,&count);
			if (preunit>0 && preunit<4 ) {
			printf("Choose the unit after conversion\n1.(C) Celcius\n2.(F) Fahrenheit\n3.(K) Kelvin\n");
			scanf("%d",&postunit);
			tempoutput(&value,postunit);}
			else printf("Not an available conversion\n");
			break;
			
			case 4:
			printf("Welcome to Time converter\nThe units available for conversion are\n(s) Seconds,(m) Minutes,(h) Hours\n------------------------------------------------\n");
			printf("Enter the value you want to convert\n");
			scanf("%lf",&value);
			printf("Choose the unit before conversion\n1.(s) Seconds\n2.(m) Minutes\n3.(h) Hours\n");
			scanf("%d",&preunit);
			timeinput(&value,preunit,&count);
			if (preunit>0 && preunit<4 ) {
			printf("Choose the unit after conversion\n1.(s) Seconds\n2.(m) Minutes\n3.(h) Hours\n");
			scanf("%d",&postunit);
			timeoutput(&value,postunit);}
			else printf("Not an available conversion\n");
			break;
			
			case 5:
			printf("Welcome to speed converter\nThe units available for conversion are\n(km/h) Kilometer/Hour,(m/s) Meters/Seconds,(mi/hour) Miles/Hour,(ft/s) Feet/Seconds\n------------------------------------------------\n");
			printf("Enter the value you want to convert\n");
			scanf("%lf",&value);
			printf("Choose the unit before conversion\n1.(km/h) Kilometer/Hour\n2.(m/s) Meters/Seconds\n3.(mi/hour) Miles/Hour\n4.(ft/s) Feet/Seconds\n");
			scanf("%d",&preunit);
			speedinput(&value,preunit,&count);
			if (preunit>0 && preunit<5 ) {
			printf("Choose the unit after conversion\n1.(km/h) Kilometer/Hour\n2.(m/s) Meters/Seconds\n3.(mi/hour) Miles/Hour\n4.(ft/s) Feet/Seconds\n");
			scanf("%d",&postunit);
			speedoutput(&value,postunit);}
			else printf("Not an available conversion\n");
			break;
		}
		}
	}while(num!=6);
	fclose(fp);
}
void lengthinput(double *value,int unit,int *count){
	//Converting length into meters//
	static int count2=0;
	count2++;
	fprintf(fp,"Measurement #%d of type Length\nThe value before conversion was:\n",*count);
	fprintf(length,"Measurement #%d of type Length\nThe value before conversion was:\n",count2);
	switch (unit){
		case 1: fprintf(fp,"%lf m \n",*value);
		fprintf(length,"%lf m \n",*value);
		break;
		case 2: fprintf(fp,"%lf km \n",*value);
		fprintf(length,"%lf km \n",*value);
		*value=*value*1000;
		
		break;
		case 3: fprintf(fp,"%lf dm \n",*value);
		fprintf(length,"%lf dm \n",*value);
		 *value=*value/10;
		break;
		case 4: fprintf(fp,"%lf cm \n",*value);
		fprintf(length,"%lf dm \n",*value);
		*value=*value/100;
		
		break;
		case 5: fprintf(fp,"%lf in \n",*value);
		fprintf(length,"%lf in \n",*value);
		*value=*value/39.37;
		
		break;
		case 6: fprintf(fp,"%lf ft \n",*value);
		fprintf(length,"%lf ft \n",*value);
		 *value=*value/3.281;
		break;
		case 7: fprintf(fp,"%lf mi \n",*value);
		fprintf(length,"%lf mi \n",*value);
		 *value=*value*1609;
		
		break; 
}
}
void lengthoutput(double *value,int unit){
	//Converting meters into desired length//
	printf("Your result is:\n");
	fprintf(fp,"The value after conversion was:\n ");
	switch (unit){
		case 1:
	    printf("%lf m\n",*value);
	    fprintf(fp,"%lf m \n\n",*value);
	    fprintf(length,"%lf m \n\n",*value);
		break;
		case 2: *value=*value/1000;
		printf("%lf km\n",*value);
		fprintf(fp,"%lf km \n\n",*value);
		fprintf(length,"%lf km \n\n",*value);
			break;
		case 3: *value=*value*10;
		printf("%lf dm\n",*value);
		fprintf(fp,"%lf dm \n\n",*value);
		fprintf(length,"%lf dm \n\n",*value);
		break;
		case 4: *value=*value*100;
		printf("%lf cm\n",*value);
		fprintf(fp,"%lf cm \n\n",*value);
		fprintf(length,"%lf cm \n\n",*value);
		break;
		case 5: *value=*value*39.37;
		printf("%lf in\n",*value);
		fprintf(fp,"%lf in \n\n",*value);
		fprintf(length,"%lf in \n\n",*value);
		break;
		case 6: *value=*value*3.281;
		printf("%lf ft\n",*value);
		fprintf(fp,"%lf ft \n\n",*value);
		fprintf(length,"%lf ft \n\n",*value);
		break;
		case 7: *value=*value/1609;
		printf("%lf mi\n",*value);
		fprintf(fp,"%lf mi \n\n",*value);
		fprintf(length,"%lf mi \n\n",*value);
		break;
		default: printf("Not an available conversion\n"); 
}
}



void weightinput(double *value,int unit,int *count){
	//Converting weight into grams//
	static int count2;
	count2++;
	fprintf(fp,"Measurement #%d of type weight\nThe value before conversion was:\n",*count);
	fprintf(weight,"Measurement #%d of type weight\nThe value before conversion was:\n",count2);
	switch (unit){
		case 1: fprintf(fp,"%lf g \n",*value);
		fprintf(weight,"%lf g \n",*value);
		break;
		case 2: fprintf(fp,"%lf kg \n",*value);
			fprintf(weight,"%lf kg \n",*value);
		 *value=*value*1000;
	    break;
		case 3: fprintf(fp,"%lf mg \n",*value);
			fprintf(weight,"%lf mg \n",*value);
		*value=*value/1000;
		
		break;
		case 4: fprintf(fp,"%lf t \n",*value);
			fprintf(weight,"%lf t \n",*value);
		*value=*value*1000000;
		break;
		case 5: fprintf(fp,"%lf p \n",*value);
			fprintf(weight,"%lf p \n",*value);
		 *value=*value*454;
		break;
}
}
void weightoutput(double *value,int unit){
	//Converting grams into desired weight//
	if(*value<0){
		printf("Warning! Weight can not be negative, but this is your result regardless!\n");
		fprintf(fp,"Warning! Weight can not be negative, but this is your result regardless!\n");
	fprintf(weight,"Warning! Weight can not be negative, but this is your result regardless!\n");
	}
	printf("Your result is:\n");
	fprintf(fp,"The value after conversion was:\n ");
	switch (unit){
		case 1:
	    printf("%lf g\n",*value);
        fprintf(fp,"%lf g \n\n",*value);
        fprintf(weight,"%lf g \n\n",*value);
		break;
		case 2: *value=*value/1000;
		printf("%lf kg\n",*value);
		fprintf(fp,"%lf kg \n\n",*value);
		fprintf(weight,"%lf kg \n\n",*value);
			break;
		case 3: *value=*value*1000;
		printf("%lf mg\n",*value);
		fprintf(fp,"%lf mg \n\n",*value);
		fprintf(weight,"%lf mg \n\n",*value);
		break;
		case 4: *value=*value/1000000;
		printf("%lf t\n",*value);
		fprintf(fp,"%lf t \n\n",*value);
		fprintf(weight,"%lf t \n\n",*value);
		break;
		case 5: *value=*value/454;
		printf("%lf p\n",*value);
		fprintf(fp,"%lf p \n\n",*value);
		fprintf(weight,"%lf p \n\n",*value);
		break;
		default: printf("Not an available conversion\n"); 
	}
}

void tempinput(double *value,int unit,int *count){
	//Converting temp into Celcius//
	static int count2=0;
	count2++;
	fprintf(fp,"Measurement #%d of type temperature\nThe value before conversion was:\n",*count);
	fprintf(temp,"Measurement #%d of type temperature\nThe value before conversion was:\n",count2);
	switch (unit){
		case 1: fprintf(fp,"%lf C \n",*value);
		fprintf(temp,"%lf C \n",*value);
		break;
		case 2: fprintf(fp,"%lf F \n",*value);
		fprintf(temp,"%lf F \n",*value);
		 *value=(*value-32)/1.8;
	    break;
		case 3: fprintf(fp,"%lf K \n",*value);
		fprintf(temp,"%lf K \n",*value);
		 *value=*value-273.150;
		break;
}
}
void tempoutput(double *value,int unit){
	//Converting Celcius into desired temp//
	printf("Your result is:\n");
	fprintf(fp,"The value after conversion was:\n ");
	switch (unit){
		case 1:
	    printf("%lf C\n",*value);
	    fprintf(fp,"%lf C \n\n",*value);
	    fprintf(temp,"%lf C \n\n",*value);
		break;
		case 2: *value=(*value*1.8)+32;
		printf("%lf F\n",*value);
		fprintf(fp,"%lf F \n\n",*value);
		fprintf(temp,"%lf F \n\n",*value);
			break;
		case 3: *value=*value+273.150;
		printf("%lf K\n",*value);
		fprintf(fp,"%lf K \n\n",*value);
		fprintf(temp,"%lf K \n\n",*value);
		break;
		default: printf("Not an available conversion\n"); 
	}
}
void timeinput(double *value,int unit,int *count){
//Converting time into seconds//
static int count2;
fprintf(fp,"Measurement #%d of type time\nThe value before conversion was:\n",*count);
fprintf(time,"Measurement #%d of type time\nThe value before conversion was:\n",count2);
	switch (unit){
		case 1: fprintf(fp,"%lf s \n",*value);
		fprintf(time,"%lf s \n",*value);
		break;
		case 2: fprintf(fp,"%lf minutes \n",*value);
		fprintf(time,"%lf minutes \n",*value);
		*value=*value*60;
	    break;
		case 3: fprintf(fp,"%lf h \n",*value);
		fprintf(time,"%lf h \n",*value);
		*value=*value*3600;
		break;
}
}

void timeoutput(double *value,int unit){
	//Converting seconds into desired time//
	if(*value<0){
		printf("Warning! Time can not be negative, but this is your result regardless!\n");
		fprintf(fp,"Warning! Time can not be negative, but this is your result regardless!\n");
	fprintf(weight,"Warning! Time can not be negative, but this is your result regardless!\n");
	}
	printf("Your result is:\n");
	fprintf(fp,"The value after conversion was:\n ");
	switch (unit){
		case 1:
	    printf("%lf s\n",*value);
	    fprintf(fp,"%lf s \n",*value);
	    fprintf(time,"%lf s \n",*value);
		break;
		case 2: *value=*value/60;
		printf("%lf minutes\n",*value);
		fprintf(fp,"%lf minutes \n",*value);
		fprintf(time,"%lf minutes \n",*value);
		break;
		case 3: *value=*value/3600;
		printf("%lf hrs\n",*value);
		fprintf(fp,"%lf hrs \n",*value);
		fprintf(time,"%lf hrs \n",*value);
		break;
		default: printf("Not an available conversion\n"); 
}
}

void speedinput(double *value,int unit,int *count){
	//Converting speed into km/hour//
	fprintf(fp,"Measurement #%d of type speed\nThe value before conversion was:\n",*count);
	switch (unit){
		case 1: fprintf(fp,"%lf km/h \n",*value);
		fprintf(speed,"%lf km/h \n",*value);
		break;
		case 2: fprintf(fp,"%lf m/s \n",*value);
		fprintf(speed,"%lf m/s \n",*value);
		 *value=*value*3.6;
	    break;
		case 3: fprintf(fp,"%lf mi/h \n",*value);
		fprintf(speed,"%lf mi/h \n",*value);
		*value=*value*1.609;
		break;
		case 4: fprintf(fp,"%lf ft/s\n",*value);
		fprintf(speed,"%lf ft/s \n",*value);
		*value=*value*1.097;
		break;
}
}
void speedoutput(double *value,int unit){
	//Converting km/hour into desired speed//
	printf("Your result is:\n");
	fprintf(fp,"The value after conversion was:\n ");
	switch (unit){
		case 1:
	    printf("%lf km/h\n",*value);
        fprintf(fp,"%lf km/h \n\n",*value);
        fprintf(speed,"%lf km/h \n\n",*value);
		break;
		case 2: *value=*value/3.6;
		printf("%lf m/s\n",*value);
		fprintf(fp,"%lf m/s \n\n",*value);
		fprintf(speed,"%lf m/s \n\n",*value);
			break;
		case 3: *value=*value/1.609;
		printf("%lf mi/h\n",*value);
		fprintf(fp,"%lf mi/h \n\n",*value);
		fprintf(speed,"%lf mi/h \n\n",*value);
		break;
		case 4: *value=*value/1.097;
		printf("%lf ft/s\n",*value);
		fprintf(fp,"%lf ft/s \n\n",*value);
		fprintf(speed,"%lf ft/s \n\n",*value);
		break;
		default: printf("Not an available conversion\n"); 
	}
}


