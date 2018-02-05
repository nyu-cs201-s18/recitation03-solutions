#include <stdio.h>

void decipher( int * message, int size, char * deciphered_message); 

int main () { 
    

    int size = 4; 
    
    //secret message
    int message[] = {1819043144, 1396908143, 556871730, 0 }; 
    
    //buffer to store the deciphered message 
    char deciphered_message [size * sizeof(int)];
    
    decipher( message, 4, deciphered_message) ;
    
    printf("%s\n", deciphered_message); 

}


void decipher( int * message, int size, char * deciphered_message) { 

    //TODO: implement this method 
    
}
