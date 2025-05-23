//bmi
#include<iostream>
using namespace std; 

int main()
{
    cout<<"Enter your weight in Kg"<<endl; 
    float weight_in_kg = 0;
    cin>>weight_in_kg;

    cout<<"Enter your height in meters"<<endl; 
    float height_in_meters = 0;
    cin>> height_in_meters;

    float bmi = weight_in_kg / (height_in_meters * height_in_meters);

    cout<<"BMI VALUES" <<endl; 

    if (bmi < 18.5)
    {
        cout<<"You are underweight";
    }

    if(bmi >18.5 && bmi < 24.9)
    {
        cout<<"You are normal weight";
    }

    if(bmi > 25 && bmi < 29.9)
    {
        cout<<"You are overweight";
    }

    if(bmi >= 30)
    {
        cout<<"You are obese";
    }


}