#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
kmain()
{
	char exited = '0';

       clearScreen();
       print("Welcome to AwesomeOS operating system\nPlease enter a command\n");
       while (1)
       {
		if(exited != 1)
		{
                	print("\nAWESOMEOS> ");                
		
                	string ch = readStr();
                	if(strEql(ch,"cmd"))
                	{
                        	print("\nYou are already in cmd.\n");
                	}
                	else if(strEql(ch,"clear"))
                	{
                        	clearScreen();
                	}
			else if(strEql(ch, "help"))
			{
				print("\n+------------------+\n");
				print("\n|AwesomeOS Commands|\n");
				print("\n+------------------+\n\n");
				print("cmd\t\tOpens a cmd terminal.\nclear\t\tClears the screen.\nhelp\t\tPrints this help message.\nexit\t\tExits AwesomeOS.");
			}
			else if(strEql(ch, "exit"))
			{
				clearScreen();
				exited = 1;
				print("You have now exited AwesomeOS. Please turn off your computer.\n"); 
			}
                	else
                	{
                	        print("\nBad command!\n");
                	}
                
                	print("\n");
		}    
       }
        
}
