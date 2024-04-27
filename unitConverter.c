#include <stdio.h>
#include <math.h>

float weightConverter(char*, char*, float);
float tempConverter(char*, char*, float);
float currencyConverter(char*, char*, float);



int Main(void){
    float number;
    char convertVariable[20] = "";
    char startingUnit[20];
    char goalUnit[20];

    printf("What do you want to convert? Type in weight, temperature or currency: ");
    scanf("%s\n",tolower(&convertVariable));

    if (convertVariable == "weight")
    {
        printf("Input the unit you want to conver, then your goal unit and lastly the number");
        scanf("%s %s %f", &startingUnit, &goalUnit, &number);
        weightConverter(&startingUnit, &goalUnit, number);
    }
    else if (convertVariable == "temperature")
    {
        printf("Input the unit you want to conver, then your goal unit and lastly the number");
        scanf("%s %s %f", &startingUnit, &goalUnit, &number);
        tempConverter(&startingUnit, &goalUnit, number);
    }
    else if (convertVariable == "currency")
    {
        printf("Input the unit you want to conver, then your goal unit and lastly the number");
        scanf("%s %s %f", &startingUnit, &goalUnit, &number);
        currencyConverter(&startingUnit, &goalUnit, number);
    }
    else{
        return 0;
        //printf("Not a valid input, please input weight, temperatur or currency: ");
    }
    
}

float weightConverter(char* startingUnit, char* goalUnit, float number){}

float tempConverter(char* startingUnit, char* goalUnit, float number){}

float currencyConverter(char* startingUnit, char* goalUnit, float number){}
