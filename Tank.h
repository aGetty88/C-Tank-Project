/*
    Tank.h
    Alan Getty
    CIS 150
    2019-12-07
    
    Header file for tank class.
*/

#ifndef _TANK_H_ //The header file must include header guards to avoid problems if the header file is included twice
#define _TANK_H_

class Tank {
private:
    int Id; //A private integer variable for the ID.
    float speed; //A private float variable for the speed
    int ammo; //A private integer variable for the ammo
public:
    int getId() const; 
    float getSpeed() const;
    int getAmmo() const;
    Tank();
    Tank(int Id, float sp, int am);
    void setId(int id);
    void setSpeed(float sp);
    void setAmmo(int am);
    void increaseSpeed();
    void decreaseSpeed();
    void fire();
    void reload();
};
#endif
