#include <iostream>
#include "triangle.h"
#include <math.h>
using namespace std;

int perimeter(const Triangle &t){
    //t.s1=0; //can modify the actual object
    if (t.s1+t.s2<=t.s3 || t.s2+t.s3<=t.s1 || t.s1+t.s3 <= t.s2){
        cout<<"Invalid triangle"<<endl;
        return 0;
    } else {
        return t.s1+t.s2+t.s3;
    }
}

double area(const Triangle &t){
    double s= perimeter(t)/2.0;
     if (t.s1+t.s2<=t.s3 || t.s2+t.s3<=t.s1 || t.s1+t.s3 <= t.s2){
        cout<<"Invalid triangle"<<endl;
        return 0;
     } else {
        return sqrt(s*(s-t.s1)*(s-t.s2)*(s-t.s3));
     }
       
}

void show(const Triangle &t, const char * prefix){
    cout<<prefix<<" : <"
                << t.s1<<","
                << t.s2<<","
                << t.s3 <<">\n";
}