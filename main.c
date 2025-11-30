#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main() {
    
    //My First Code push on Github !

    //To Check whether a person is eligible for getting Student discount or not.
    //All Kind of Students will be getting 25%,50%,75% OFF for any purchase.
    
    // ------------------------------------------------------------------------------------------------ //
    char designation[10]="";
    float price = 100;
    float total;
    char percent='%';
    bool isSenior = true;

    printf("Orginal Price is $%.2f\n",price);
    printf("Enter you Designation - Student(ST)/Senior(SR)/Both(B):");
    fgets(designation,sizeof(designation),stdin);
    designation[strlen(designation) - 1] = '\0';

    if (strcmp(designation,"ST")==0 || strcmp(designation,"st")==0 || strcmp(designation,"sT")==0 || strcmp(designation,"St")==0){
    
            
    printf("You're a deserving Student & you'll get a 25%c OFF.\n",percent);
    total = price-(price*0.25);
    printf("Your final price will be: $%.2f",total);
    }

    else if (strcmp(designation,"SR")==0 || strcmp(designation,"sr")==0 || strcmp(designation,"sR")==0 || strcmp(designation,"Sr")==0)
    {
    printf("You're a Senior & you'll get a 50%c OFF.\n",percent);
    total = price*0.5 ;
    printf("Your final price will be: $%.2f",total);
    }

    else if (strcmp(designation,"B")==0 || strcmp(designation,"b")==0)
    {
        printf("Amazing Man,You're both of them & you'll get a total 75%c of discount.\n",percent);
        total = price-(price*0.75);
        printf("Your final price will be: $%.2f",total);
    }

    else {
        printf("Oops you've not any special discounts, Still got some great deals.");
    }
    
    return 0;

    //Working
}


