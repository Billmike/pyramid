#include <stdio.h>

/**
 * @author: https://twitter.com/isocroft
 * @license: MIT
 *
 */

int main() {
    
   char block = '#';
   char block_line[7];
   int pyramid_height = sizeof(block_line);
   int increment = sizeof(block);
   int step = 0;
   
   for(; step < pyramid_height; step+=increment){
       block_line[step] = block;
       printf("%s\n", block_line);
   } 
   
   /*
        The `getchar()` call is to block the console process/thread from getting
        terminated (when the console window disappears from sight) quickly
         
        press the `Enter` key to close the console window
   */
   getchar();
    
   /* exit with no worries :) */ 
   return 0;
}
