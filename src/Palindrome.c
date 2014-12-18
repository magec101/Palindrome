#include <stdio.h>
#include <string.h>
#include <ctype.h>

char palindromeMain(int argc, const char** argv)
{
	
	int iStrlen;
	char acString[50];
	int iIndex;

    if (argc < 2)
	    	scanf("%s", acString);
    else
	    	strcpy(acString, argv[1]);
	    	
    iStrlen = strlen(acString);
    
    for(iIndex=0; iIndex < iStrlen/2; iIndex++)
    {
		if (acString[iIndex] != acString[iStrlen - iIndex - 1])
				return 'N';
    }
	return 'Y';
}


#ifndef __CXX_TEST_MAIN__

int main(int argc, const char** argv){
    char result;
    result = palindromeMain(argc, argv);
    printf ("%c", toupper(result));
    return 0;
}

#endif