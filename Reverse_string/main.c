//
//  main.c
//  Reverse_string
//
//  Created by Yuga Hal on 12/13/15.
//  Copyright © 2015 Yuga Hal. All rights reserved.
//
//This program prints reverced string

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch[] = {"Hello String!"};
    char temp;
    for (int i=0; i< (sizeof(ch)/sizeof(ch[0]))/2; i++){
        temp = ch[i];
        ch[i]= ch[sizeof(ch)/sizeof(ch[0])-1-i];
        ch[sizeof(ch)/sizeof(ch[0])-1-i]= temp;
    }
    for (int i=0; i< sizeof(ch)/sizeof(ch[0]);i++){
        printf("%c", ch[i]);
    }
    printf("\n");
    return 0;
}
