/*
    TestTank.cpp
    Alan Getty
    CIS 150
    2019-12-07
    
    This program tests out the Tank class.
*/

#include <iomanip>
#include <iostream>
#include "Tank.h"
using namespace std;

void displayTank(Tank& tank);

int main() {
    Tank tank1;
    Tank tank2(120, 100, -30);
    Tank tank3(3, 35.5f, 37);
    
    cout << "Initial setup:\n";
    displayTank(tank1);
    displayTank(tank2);
    displayTank(tank3);
    
    tank1.setId(1);
    tank1.setSpeed(2.0f);
    tank1.setAmmo(3);
    tank2.setId(2);
    tank2.fire();
    tank2.increaseSpeed();
    tank3.increaseSpeed();
    tank3.reload();
    cout << "After changes:\n";
    displayTank(tank1);
    displayTank(tank2);
    displayTank(tank3);
    
    tank1.setId(788);
    tank1.setSpeed(2000.0f);
    tank1.setAmmo(300);
    tank3.increaseSpeed();
    tank3.increaseSpeed();
    cout << "After more changes:\n";
    displayTank(tank1);
    displayTank(tank2);
    displayTank(tank3);
    return 0;
}

void displayTank(Tank& tank) {
    cout << "Tank: " << setw(2) << tank.getId()
         << ", Speed: " << fixed << showpoint
         << setprecision(1) << setw(4) << tank.getSpeed()
         << ", Ammo: " << setw(2) << tank.getAmmo()
         << endl;
}
