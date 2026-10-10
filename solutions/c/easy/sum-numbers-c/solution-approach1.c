// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true
// Problem     Sum and Difference of Two Numbers
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-10-10, 02:40 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b; float c, d;
    scanf("%d %d %f %f", &a, &b, &c, &d);
    printf("%d %d\n%.1f %.1f", a + b, a - b, c + d, c - d);
    
    return 0;
}
