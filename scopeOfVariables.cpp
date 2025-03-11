

// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Created on: Sep 2025
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableX = 20;

void localVariable() {
    // this shows what happens with local variables
    int variableX = 5;
    int variableY = 25;
    int variableZ;

    variableX = variableX + 2;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables
    int variableY = 25;
    int variableZ;

    variableX = variableX + 2;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX
              << " + " << variableY << " = " << variableZ << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    std::cout << "\nDone. " << std::endl;
}
