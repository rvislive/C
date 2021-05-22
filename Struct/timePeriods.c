// Calculate the difference between two time periods

#include<stdio.h>

typedef struct Time {
    int hours;
    int min;
    int sec;
} time;

void Difference(time *t1, time *t2) {
    time diff, *largest;
    if(t1->hours > t2->hours) {
        diff.sec = t1->sec - t1->sec;
        if(diff.sec > 0) {
            diff.min = t1->min - t2->min;
            if(diff.min > 0) {

            } else {
                
            }
        } else {
            diff.sec => t2->sec - t1->sec;
        }
    } else {

    }
    printf("Time: %d", largest->hours); 
}

int main() {
    time t1, t2, *t1Ptr, *t2Ptr, diff;
    t1Ptr = &t1;
    t2Ptr = &t2;

    printf("Enter First Time (SS:MM:HH)\n");
    scanf("%d", &t1Ptr->sec);
    scanf("%d", &t1Ptr->min);
    scanf("%d", &t1Ptr->hours);

    printf("Enter Secound Time (SS:MM:HH)\n");
    scanf("%d", &t2Ptr->sec);
    scanf("%d", &t2Ptr->min);
    scanf("%d", &t2Ptr->hours);

    Difference(t1Ptr, t2Ptr);

    return 0;
}