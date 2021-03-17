Bai 1
int* getPointerToTen()
{
    int *p;
    p=new int ;
    *p=10;
    return p;

}
Bai 2
double* getPointerToPi()
{
    double *p;
    p=new double ;
    *p=3.14159 ;
    return p;

}
Bai 3
double* getSquare (double number)
{
    double *p;
    p=new double ;
    *p = number*number;
    return p;
}
Bai 7
int* getPointerToArray(int n)
{
    int* p=new int [n];
    for (int i=0;i<n;i++)
    {
       cin>>p[i];
    }
    return p;
}
