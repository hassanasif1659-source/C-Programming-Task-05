// Task # 03:
// A bank wants to develop a basic ATM program for its customers. The ATM starts with an initial
// balance of Rs. 50,000.
// The program should display the following menu and ask the customer to enter a choice:
// 1. Check Balance
// 2. Deposit Money
// 3. Withdraw Money
// 4. Exit
// The program should perform the following actions based on the customer's choice:
// 1. Check Balance: Display the customer's current account balance.
// 2. Deposit Money: Ask the customer to enter the amount they want to deposit. Add this amount
// to the current balance and display the updated balance.

// 3. Withdraw Money: Ask the customer to enter the amount they want to withdraw. If the withdrawal
// amount is less than or equal to the current balance, subtract it from the balance and display
// the remaining balance. If the withdrawal amount is greater than the current balance,
// display "Insufficient Balance".
// 4. Exit: Display "Thank you for using the ATM".
// If the customer enters any number other than 1, 2, 3, or 4, display "Invalid Option".
// Write a C program to implement this ATM system with if-else/else-if and switch case..
#include <stdio.h>

int main () {
    int current_balance = 50000 ;
    int choice;
    int deposit_money ;
    int total_balance ;
    int withdraw_money ;
    printf(" 1. Check Balance \n 2. Deposit Money \n 3.Withdraw Money \n 4.Exit \n");
    scanf("%d" , &choice);
    switch (choice){
    case 1 :
      printf(" Your current balance : %d\n" , current_balance);
      break;
    case 2:
    printf("Enter Deposit Money:");
    scanf("%d" ,&deposit_money);
    if(deposit_money<0){
        printf("Must Be Positive\n");
    }
    else{
    total_balance = deposit_money + current_balance ;
    current_balance = total_balance ;
    printf(" Your current balance after deposit is : %d\n" , current_balance );
    }
    break ;
    case 3:
    printf("Enter Withdraw Money:");
    scanf("%d" ,&withdraw_money);
    if(withdraw_money < 0){
        printf("Must be Positive\n");
    }
    else if(withdraw_money > current_balance){
        printf("Insufficient Balance\n");
    }
    else{
        total_balance = current_balance - withdraw_money ;
        current_balance = total_balance ;
    printf("  Your current balance after withdraw is : %d\n" ,  current_balance);
    }
    break ;
    case 4 :
    printf("Thank You for using the ATM \n");
    break ;
    default:
    printf("Invalid Option \n");
}
}
