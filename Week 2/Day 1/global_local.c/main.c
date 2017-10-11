#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int speed_of_sound = 340; //  [m/s]

int give_me_distance(int time);

float give_me_distance_in_km(int time);


//as you can see local variable values can use the same name
//like time and distance and have a different values
//think about the given functions as well, are we using them correctly?

int main()
{
    int time = 5;

    printf("The distance between me and a lightning if it reaches me in\n%d seconds is %d meters.\n", time, give_me_distance(time));

    printf("The distance between me and a lightning if it reaches me in\n%d seconds is %.2f kilometers.\n", time, give_me_distance_in_km(time));

	return 0;

}

int give_me_distance(int time){

    return time * speed_of_sound;
}



    //calculate the distance between you and a lighting
    //the sound of it reaches you in 5 seconds
    //distance = time * speed_of_sound

    //int time = 5; // [s]
    //int distance;

    //as you can see the time and the distance is a local variable, we can only
    //access them in this function (with these values), but the speed_of_sound is a global variable
    //we can use it without any declaration


float give_me_distance_in_km(int time)
{
    //calculate the distance again but this time the result
    //this time the sound reaches you in 50 seconds
    //should be in kilometers

    float divider = 1000;
//    int time = 50; // [s]
    int distance;

    //here we have a third local variable called divider
    return (float) time * speed_of_sound / divider;
}
