#include "System.h"

int main() {
    int i=0;
    int ii=0;
    Console_BackgroundColor(Yellow);
    Console_ForegroundColor(Black);
    Console_Clear();
    for(i=0;i<10;i++){
        ii=Random_Next(50)+1;
        Console_WriteLine(ToString(ii));    
    }
        
    return 0;
}