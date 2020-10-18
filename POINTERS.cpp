/*
***********************************************************

Topic   : Program to demonstrate POINTERS in cpp.
Author  : Chpaone09®
Date    : Oct 18, 2020

************************************************************
*/

#include <iostream>
using namespace std;

int main(){
    int a = 25;
    int *p;
    p = &a;
    cout<<"\n\n\t Value of Variable a >> "<< a;
    cout<<"\n\n\t Value at address p is pinted to >> "<< *p;
    cout<<"\n\n\t address of variable pointed by p >>"<< p;
    cout<<"\n\n\t address of a >> "<< &a;
    return 0;
    
}
