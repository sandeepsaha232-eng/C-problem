#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int year,intership;
    
    char stream;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%d %c",&year,&stream);
    switch(year){
        case 1: printf("Physics\nChemistry\nMaths"); break;
        case 2:
            if (stream=='C')
            printf("C Programming\nComputer Organization & Architecture\nWeb Development");
            else if (stream=='E')
                printf("Signal Processing\nLogic Design\nNetwork Analysis");
            else if (stream=='M')
                printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");
            break;
            case 3:
            if (stream=='C')
            printf("Object-oriental Programming\nDBMS\nData Structures & Algorithms");
            else if (stream=='E')
                printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers");
            else if (stream=='M')
                printf("Applied Mechanics\nKinematics\nMechatronics");
            break;
            case 4:scanf("%d",&intership);
            
            if (intership==1) printf("Enrolled into Internship Program"); 
            else{
            if (stream=='C')
            printf("Operating Systems\nComputer Networks\nCompiler Design");
            else if (stream=='E')
                printf("VLSI Design\nFiber-optic Communication\nDigital Electronics");
            else if (stream=='M')
                printf("Mechanism of Materials(MOM)\nStrength of Materials(SOM)\nMachine Design");
            }
            break;
    }
    return 0;
}
