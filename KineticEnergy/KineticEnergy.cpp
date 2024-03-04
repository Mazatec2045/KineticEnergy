//Omar Vergara
//03/02/24
//Skill Assignment 3 


#include <iostream>
#include <cmath>
using namespace std; 

//Fuction prototype
double getMass(); 
double getVelocity();
double getEnergy(double, double); 
void displayData(double, double, double); 


int main()
{
    // Variables 
    double mass;
    double velocity;
    double energy;

    // Get Mass
    mass = getMass();

    // Get Velocity 
    velocity = getVelocity();

    // Get Energy
    energy = getEnergy(mass, velocity);

    // Display Data
    displayData(mass, velocity, energy);

    return 0;
}

double getMass()
{
    double mas;  // to hold the Mass
    
    cout << "Enter the Mass: "; 
    cin >> mas; 

    // returns a copy of the value stored in mas 
    return mas; 
}

double getVelocity()
{
    double vel;  

    cout << "Enter the Velocity: "; 
    cin >> vel; 

    return vel; 

}

double getEnergy(double m, double v)
{
    return 0.5 * m * pow(v, 2);
}

void displayData(double m, double v, double e)
{
    cout << "Object Data" << endl; 
    cout << "Mass (kilograms): " << m << endl; 
    cout << "Velocity (meters per second): " << v << endl; 
    cout << "Energy (joules); " << e << endl; 
}
