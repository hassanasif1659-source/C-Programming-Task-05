// A food delivery application wants to develop a basic food selection program for its customers. The program
// should display the following food categories and ask the customer to enter a choice:
// 1. Fast Food
// 2. Pakistani Food
// 3. Drinks
// The program should perform the following actions based on the customer's choice:
// 1. Fast Food: Display the following menu:

// 1. Burger
// 2. Pizza
// 3. Fries

// Ask the customer to enter an item number and display the selected food item in the format "You
// selected: [Item]".
// 2. Pakistani Food: Display the following menu:

// 1. Biryani
// 2. Karahi
// 3. Nihari

// Ask the customer to enter an item number and display the selected food item in the format "You
// selected: [Item]".
// 3. Drinks: Display the following menu:

// 1. Coke
// 2. Pepsi
// 3. Juice

// Ask the customer to enter an item number and display the selected drink in the format "You
// selected: [Item]".
// If the customer enters a category number other than 1, 2, or 3, display "Invalid Category Choice".
// If the customer enters an item number other than 1, 2, or 3, display "Invalid Item Choice".

#include <stdio.h>
int main (){
    int choice ;
    int item ;
      printf("1.Fast Food\n 2.Pakistani Food\n 3. Drinks\n");
      scanf("%d" , &choice);

        switch(choice){
            case 1 :
            printf(".Fast Food: \n press 1 for Burger \n 2 for Pizza \n 3 for Fries \n");
            scanf("%d" , &item);
        switch(item){
            case 1 :
            printf("You selected Burger\n");
            break;
            case 2 :
            printf("You selected Pizza\n");
            break;
            case 3 :
            printf("You selected Fries\n");
            break;
            default:
            printf("Invalid Item Choice");
        }
        break ;
        case 2 :
        printf("Pakistani Food: \n 1 for Biryani \n 2 for Karahi \n 3 for Nihari \n");
        scanf("%d" , &item);
        switch(item){
            case 1 :
            printf("You selected Biryani\n");
            break;
            case 2 :
            printf("You selected Karahi\n");
            break;
            case 3 :
            printf("You selected Nihari\n");
            break;
            default:
            printf("Invalid Item Choice");
        }
        break;
    case 3:
    printf("Drinks : \n 1 for Coke \n 2 for Pepsi \n 3 for Juice \n");
        scanf("%d" , &item);
        switch(item){
            case 1 :
            printf("You selected Coke\n");
            break;
            case 2 :
            printf("You selected Pepsi\n");
            break;
            case 3 :
            printf("You selected Juice\n");
            break;
            default:
            printf("Invalid Item Choice");
        }
        break ; 
        default :
        printf("Invalid Category Choice");
    }
}