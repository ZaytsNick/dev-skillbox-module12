#include <iostream>
#include <cassert>
using namespace std;
float travelTime(float distance, float speed)
{
    float time;
    time=distance/speed;
    assert(time>0);
    return time;
}
int main()
{
    float distance,  speed;
    cout<<"Enter distance: ";
    cin>>distance;
    assert(distance>0);
    cout<<"Enter speed: ";
    cin>>speed;
    assert(speed>0);
   
    cout<<"Time travel: "<< travelTime(distance, speed);;
}