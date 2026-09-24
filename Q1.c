#include <stdio.h>

int main() {

    int membership;
    int total_bill_amount;
    int total_payable_amount;
    int discount;
    int discounted_amount;

    printf("Enter your total Bill: ");
    scanf("%d", &total_bill_amount);

    printf("Enter Your Membership Status (1 for member and 0 for non member): ");
    scanf("%d", &membership);

    switch (membership) {

        case 1:

            printf("You are a member.\n");

            if (total_bill_amount >= 5000) {

                discount = 20;
                discounted_amount = (total_bill_amount * discount) / 100;
                total_payable_amount = total_bill_amount - discounted_amount;

            }
            else {

                discount = 10;
                discounted_amount = (total_bill_amount * discount) / 100;
                total_payable_amount = total_bill_amount - discounted_amount;

            }

            break;

        case 0:

            printf("You are not a member.\n");

            if (total_bill_amount >= 5000) {

                discount = 10;
                discounted_amount = (total_bill_amount * discount) / 100;
                total_payable_amount = total_bill_amount - discounted_amount;

            }
            else {

                discount = 0;
                discounted_amount = 0;
                total_payable_amount = total_bill_amount;

            }

            break;

        default:

            printf("Wrong input");
            return 0;
    }

    printf("\nOriginal Bill: %d", total_bill_amount);
    printf("\nDiscount: %d%%", discount);
    printf("\nDiscount Amount: %d", discounted_amount);
    printf("\nFinal Payable Amount: %d", total_payable_amount);

    return 0;
}

// A restaurant provides discounts based on a customer's bill amount and membership status. The
// program should ask the customer to enter the total bill amount and whether the customer is a member. A
// member is represented by 1 and a non-member by 0.
// For bills of Rs. 5000 or more, members receive a 20% discount, while non-members receive a 10%
// discount. For bills below Rs. 5000, members receive a 10% discount, while non-members receive no
// discount. The program should display the original bill, discount amount, and final payable amount.
// #include <stdio.h>
// int main () {
//     float  discounted_amount  ;
//     int discount ;
//     float total_payable ;
//     int membership ;
//     float  total_amount ;

//     printf("Enter your total Bill: ");
//     scanf("%f", &total_amount);

//     printf("Enter Your Membership Status (1 for member and 0 for non member): ");
//     scanf("%d", &membership);
//     if(total_amount >= 5000){
//             if(membership == 1){
//              discount = ("%d%%" , 20);
//              total_payable = ((total_amount) * (80.0/100.0));
//              discounted_amount =((total_amount) * (20.0/100.0));
            
//             printf(" Total Payable is : %.2f\n" ,total_payable);
//             printf(" discount : %.2d%%\n" ,discount);
//             printf(" discounted amount :%.2f\n" ,discounted_amount);
//         }
//         else if (membership == 0){
//             discount = ("%d%%" , 10);
//              total_payable = ((total_amount) * (90.0/100.0));
//              discounted_amount =((total_amount) * (10.0/100.0));
            
//             printf(" Total Payable is :%.2f\n" ,total_payable);
//             printf(" discount : %.2d%%\n" ,discount);
//             printf(" discounted amount :%.2f\n" ,discounted_amount);
//         }
//     }
//         else {
//             if(membership == 1){
//              discount = ("%d%%" , 10);
//              total_payable = ((total_amount) * (90.0/100.0));
//              discounted_amount =((total_amount) * (10.0/100.0));
//             printf("Total Payable is %.2f\n" ,total_payable);
//             printf("discount :%d%%\n" ,discount);
//             printf(" discounted amount :%.2f\n" ,discounted_amount);
//         }
//         else{
//             printf("No discount\n");
//             discount = 0 ;
//              total_payable = (total_amount) ;
//              discounted_amount = 0 ;
//             printf("Total Payable is %.2f\n" ,total_payable);
//             printf("discount :%d%%\n" ,discount);
//             printf(" discounted amount :%.2f\n" ,discounted_amount);
//         }    
//     }
// }