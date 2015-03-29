#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "h2.h"
#include <cstdlib>
#include <math.h>

using namespace std;

BMI::BMI(){int height=0, weight=0;}
void BMI::getBMI(){
    ifstream inFile("file.in",ios::in);
    ofstream outFile("file.out",ios::out);
    if(!inFile&&!outFile){
        cerr<<"Failed Opening"<<endl;
        exit(1);
    }
    while(inFile>>height>>weight){
        if(height==0||weight==0)
            break;
        outFile<<setw(5)<<setBMI(height,weight)<<" "<<BMICat(setBMI(height,weight))<<endl;
    }
}

float BMI::setBMI(int height, int weight){
    float BMITemp=(float)weight/pow((float)height/100,2);
    BMITemp=floor(BMITemp*100+.5)/100;
    return BMITemp;
}

string BMI::BMICat(float setBMI){
    if(setBMI<16)
        return "Severely Underweight";
    else if(setBMI<18.5)
        return "Underweight";
    else if(setBMI<24)
        return "Normal";
    else if(setBMI<30)
        return "Overweight";
    else if (setBMI<35)
        return "Obese Class I(Moderately Obese)";
    return "Obese Class II(Severely Obese)";
}


