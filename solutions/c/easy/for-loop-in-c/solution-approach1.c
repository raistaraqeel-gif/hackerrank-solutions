// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true
// Problem     For Loop in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-10, 04:36 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>


    


int main() 
{
    // name: mohammed abdul riyan
    
    int a, b;
    scanf("%d\n%d", &a, &b);
  	 char *number[] = {"one", "two", "three", "four", "five", "six", "seven",
     "eight", "nine"};
     
     for(int i = a; i <= b; i++)
     {
        if(i >= 1 && i <= 9)
      {
     printf("%s\n", number[i - 1]);
      }else{
    if (i % 2 ==0)
    {
        printf("even\n");
    }else{
        printf("odd\n");
        
    }
    }
     }

    return 0;
}

