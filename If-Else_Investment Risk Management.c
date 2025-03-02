#include <stdio.h>

int main() {
  int age , income ,risk ;
   scanf("%d" ,&age);
   scanf("%d" ,&income);
   scanf("%d" ,&risk);
    if (age < 0 || income < 0 || risk < 1 || risk > 3) {
        printf(" Invalid input.");
        return 0;
    }
   
   if((age>50 &&(income<=75000 || risk!=3))||( age>30 && (income<=30000 && risk<=2))){
     printf("Low Risk Portfolio: Suitable for conservative investments.\n");
   }
   else if(((age>=30 && age<=50) && (income <=75000 && risk <=2))||((age>=30 && age<=50 )&&(income>75000 && risk<=2))){
     printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
   }
   else{
     printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
   }


    
  return 0;
}
