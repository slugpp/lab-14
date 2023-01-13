#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
 void stat(const double A[],int N,double B[])
 {  int i=0;
    double sum=0,newsum=0;
    double standard,mean2;
    while(i<N)
    {
        sum+=A[i];
        i++;
        newsum+=pow(A[i],2);

    }
    B[0]=sum/N;
    i=0;
    while (i<N)
    {
      standard+=pow(A[i]-B[0],2);
      i++;
    }
    
    standard=standard/N;
    B[1]=sqrt(standard);
    int k=0;
    double Geo=1;
    do
    {
        Geo=Geo*A[k];
        k++;
    } while (k<N);
    B[2]=pow(Geo,(1.0/N));
   double c=0;
   int h=0;
   do
   {
    c+=(1/A[h]);
    h++;
   } while (h<N);
   B[3]=(N/c);
   i=0;
   double max=A[0],min=A[0];
   do
   {
    if(A[i]>max)
    {
        max=A[i];
        B[4]=A[i];
    }
    i++;
   } while (i<N);
   i=0;
   do
   {
    if(A[i]<=min)
    {
        min=A[i];
        B[5]=A[i];
    }
    i++;
   } while (i<N);
   



    
    
 }