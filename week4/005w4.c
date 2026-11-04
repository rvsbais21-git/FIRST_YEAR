#include <stdio.h>

int calculate_trip_cost(int distance, int age, int luggage, int weekend) {
    // TRAVEL CHARGE
    int c1=0;

    
    if(distance<=50) {
        c1=(5*distance);
    } else if (distance<=150) {
        c1=250+(4*(distance-50));
    } else {
        c1=650+(3*(distance-150));
    }
    

    //AGE DISCOUNT

    int discount;

    if(age<=12) {
        discount=c1*0.5;
    } else if (age<=17) {
        discount=c1*0.2;
    } else if (age<=59) {
        discount=0;
    } else {
        discount=c1*0.3;
    }

    int disfare;

    //discounted fare
    disfare=c1-discount;


    // LUGGAGE CHARGE
    int c2;
    if (luggage<=10) {
        c2=0;
    } else if (luggage<=20) {
        c2=100;
    } else if (luggage<=30) {
        c2=250;
    } else {
        c2=500;
    }
    
    //SURCHARGE
    int surge;
    if(weekend==1) {
        if(distance<=100) {
            surge=50;
        } else {
            surge=100;
        }
    } else {
        surge=0;
    }
    
    int answer;
    answer=disfare+surge+c2;

    if (answer<=100) {
        answer=100;
    }
    return answer;
}

int main() {
    int distance, age, luggage, weekend;
    int travel_cost;

    printf("Enter distance, age, luggage weight, and weekend flag: ");
    scanf("%d %d %d %d", &distance, &age, &luggage, &weekend);

    if (distance>1000 && distance<0) {
        printf("Invalid distance");
        return 0;
    } 
    if (age>100 && age<0) {
        printf("Invalid age;");
        return 0;
    }
    if (luggage>50 && luggage<0) {
        printf("Invalid age;");
        return 0;
    }
    if (weekend>1 && weekend<0) {
        printf("Invalid input for weekend;");
        return 0;
    }

    travel_cost = calculate_trip_cost(distance, age, luggage, weekend);

    printf("Travel Cost: Rs. %d\n", travel_cost);

    return 0;
}