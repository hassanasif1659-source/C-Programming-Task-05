// Task # 02:
// An online shopping company wants to calculate delivery charges for customer orders. The program should
// ask the customer to enter the shopping amount and delivery distance in kilometers.
// Customers whose shopping amount is Rs. 5000 or more receive free delivery regardless of distance. For
// orders below Rs. 5000, delivery charges depend on distance: orders up to 5 km have a charge of Rs. 150,
// orders from 6 to 10 km have a charge of Rs. 250, orders from 11 to 20 km have a charge of Rs. 400, and
// orders beyond 20 km have a charge of Rs. 600.
// The program should display the shopping amount, delivery charges, and total payable amount. If either
// the shopping amount or delivery distance is zero or negative, the program should display “Invalid Input”.
#include <stdio.h>
int main () {
    int shopping_amount ;
    int delivery_distance ;
    int delivery_charges ;
    int total_payable_amount ;

printf("Enter Shopping Amount:");
scanf("%d" , &shopping_amount);
printf("Enter Delivery Distance:");
scanf("%d" , &delivery_distance);
//     int choice;
//     printf("1. SHopping tange 5001-20,0000\n");
//     printf("2. SHopping tange 0-5000\n");
//     printf("3. SHopping tange 5001-20,0000\n");
//     printf("Enter Shopping range:\n ");
//     scanf("%d", &choice);

//     switch(choice){
//         case 1:

//         printf("1. delivery distance: 0-5\n");
//         printf("2. delivery distance: 6-10\n");
//         printf("3. delivery distance: 11-20\n");
//         printf("4. delivery distance greater than 20\n");

//         switch(choice){
//         printf("Enter Shopping Amount\n");
//         scanf("%d" , &shopping_amount);
//         printf("Enter Delivery  Distance in kilometers\n");
//         scanf("%d" , &delivery_distance);
        
//     }

     if (shopping_amount<0 || delivery_distance<0 ){
        printf("Invalid \n");
     }
    else if (shopping_amount >= 5000 && delivery_distance > 0){
        delivery_charges  = 0 ;
        printf("No Delivery Charges\n");
        printf("Free Delivery\n");
    }
    else if((shopping_amount < 5000) && (delivery_distance>0 && delivery_distance <=5)){
       delivery_charges  = 150 ;
       total_payable_amount = shopping_amount + delivery_charges ;

       printf("Delivery Distance :%d\n" , delivery_distance);
       printf("Delivery Charges:%d\n" , delivery_charges);
       printf("Total Payable Amount: %d\n" , total_payable_amount);
    }

    else if((shopping_amount < 5000) && (delivery_distance >= 6 && delivery_distance <= 10)){
       delivery_charges  = 250 ;
       total_payable_amount = shopping_amount + delivery_charges ;
       printf("Delivery Distance :%d\n" , delivery_distance);
       printf("Delivery Charges:%d\n" , delivery_charges);
       printf("Total Payable Amount: %d\n" , total_payable_amount);
    }
    else if((shopping_amount < 5000) && (delivery_distance >= 11 && delivery_distance <= 20)){
       delivery_charges  = 400 ;
       total_payable_amount = shopping_amount + delivery_charges ;
       printf("Delivery Distance :%d\n" , delivery_distance);
       printf("Delivery Charges:%d\n" , delivery_charges);
       printf("Total Payable Amount: %d\n" , total_payable_amount);
}
else if((shopping_amount < 5000) && (delivery_distance > 20  )){
       delivery_charges  = 600 ;
       total_payable_amount = shopping_amount + delivery_charges ;
       printf("Delivery Distance :%d\n" , delivery_distance);
       printf("Delivery Charges:%d\n" , delivery_charges);
       printf("Total Payable Amount: %d\n" , total_payable_amount);
}
}