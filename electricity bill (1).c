//function to calculate and display the electric bill for a certain customer based on the units consumed
/*
//function to calculate and display the electric bill for a certain customer based on the units consumed
Author:Alvin 
reg no-CT101/G/22739/24
Date:17/10/2024
*/#include <stdio.h>
float calculate_bill(float units_consumed) {
    float charges_per_unit, total_bill, surcharge;

    if (units_consumed <= 199) 
        {charges_per_unit = 1.20;}
        
     else if (units_consumed < 400) 
        {charges_per_unit = 1.50;}
        
     else if (units_consumed < 600) 
        {charges_per_unit = 1.80;}
        
    else {  charges_per_unit = 2.00;}
    

    total_bill = units_consumed * charges_per_unit;

    if (total_bill > 400) 
       { surcharge = 0.15 * total_bill;
        total_bill += surcharge;}

    if (total_bill < 100) 
       { total_bill = 100;}

    return total_bill;
}

int main() {
    char customer_id[20], customer_name[20];
    float units_consumed, total_bill, charges_per_unit;

    printf("Enter Customer ID: ");
    scanf("%c", customer_id);

    printf("Enter Customer Name: ");
    scanf("%c", customer_name);

    printf("Enter Units Consumed: ");
    scanf("%f", &units_consumed);

    total_bill = calculate_bill(units_consumed);

    printf("\nCustomer ID: %s\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("charges per Unit: %.2f\n", charges_per_unit);
    printf("Total Amount to Pay: %.2f\n", total_bill);

    return 0;
    }