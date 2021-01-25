#include <stdio.h>
#include <sys/types.h>
#include <time.h>
#include <string.h>
#include <math.h>

//*****************************
//*****************************
//*****************************
//*****************************
//*****************************

int main(int argc, char **argv)
{

	// local variables                                         
    //****************************
    FILE *fp;
    char *file_name = "/data/data/com.termux/files/home/time_control/time_control.txt";
    char timestamp[128];
    time_t rawtime;
    time ( &rawtime ); 
    struct tm timeinfo = *localtime ( &rawtime );
    
    // form timestamp                                                                                      				
    sprintf(timestamp, "%02d:%02d %02d.%02d.%02d", timeinfo.tm_hour, timeinfo.tm_min, timeinfo.tm_mday, timeinfo.tm_mon + 1, timeinfo.tm_year + 1900);             			
    fp = fopen(file_name, "a");                 	
                                                                                                           
    if(fp)                                      	                                                       			
    	fprintf(fp, "%s %s\n", timestamp, "[byt] [byt] [uborka]");   	                                                       			
                                                                                                           
    if(fp)                                      	                                                       			
    {                                           	                                                       			
    	fflush(fp);                         	                                                       			
    	fclose(fp);                         	                                                       			
    }                                           	                                                       			

}// end main

//***************************************************
//***************************************************
//***************************************************
//***************************************************
//***************************************************
//***************************************************
