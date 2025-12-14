#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<windows.h>
int main(){
    int format;
    printf("Digital Clock\n1. 24 Hour Format\n2. 12 Hour Format\nEnter time Format: ");
    scanf("%d",&format);
    char buffer[50];
    time_t raw_time;
    struct tm *current_time;
    while(1){
        #ifdef _WIN32
            system("cls");
        #else 
            system("clear");
        #endif
        time(&raw_time);
        current_time = localtime(&raw_time);
        if(format == 1){
            strftime(buffer, 50, "%H:%M:%S\n%A, %d %B", current_time); 
            printf("\nTime is: %s", buffer);
        }
        else{
            strftime(buffer, 50, "%I:%M:%S %p\n%A, %d %B", current_time);
            printf("\nTime is: %s", buffer);
        }
        sleep(1);
    }
    return 0;
}