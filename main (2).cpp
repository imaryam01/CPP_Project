/******************************************************************************

Car Project:
1) The variables assigned in Constructor are different from the variables declared in public class

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Car 
{
    public:                 //Access Specifier
    
    int number ;                //Attributes or members of the class
    string name;           //Attributes or members of the class
    string color;           //Attributes or members of the class
    string engine;            //Attributes or members of the class
    
   // ~Car();
    void getdes();
    Car(int,string,string,string);
    
    
};
/*
Car :: ~Car()
{
    cout<<"Destructor being executed";
}
*/

 Car :: Car(int number,string name,string color,string engine)
    {
        
        this->number=number;
        this->name=name;
        this->color=color;
        this->engine=engine;
        
    }
void Car :: getdes()
    {
         cout<<" \nNumber:"<<number<<"\nName:"<<name<<"\nColor:"<<color<<"\nEngine:"<<engine<<"\n\n";
    }
   
    
int main()
{
     Car car1 (2550,"Chevrolet","White","Smooth") ;
     car1.getdes();
     
    /* car1.number= 2550;
     car1.name="Chevrolet";
     car1.color="White";            ............these lines are used when there is NO PArameterized COnstructor
     car1.engine="Smooth";
     
     car1.getdes();
     */
     Car  car2(1435,"B.M.W","Black","Fast");
    
     car2.getdes();
    
    return 0;
}





