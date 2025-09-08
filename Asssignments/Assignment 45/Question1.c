//write a program to calculate the difference between two time periods.
#include<stdio.h>
#include<string.h>
struct Time
{
    int hr,min,sec;
};
int isGreater(struct Time t1,struct Time t2)
{
    if(t1.hr>t2.hr)
        return 1;
    else if(t1.hr<t2.hr)
        return 0;
    else if(t1.min>t2.min)
        return 1;
    else if(t1.min<t2.min)
        return 0;
    else if(t1.sec>t2.sec)
        return 1;
    else 
        return 0; 
}
struct Time difference(struct Time t1,struct Time t2)
{
    struct Time t3;
    if(isGreater(t1,t2))
    {
        if(t1.sec<t2.sec){
            t1.sec+=60;
            if(t1.min>0)
                t1.min-=1;
            else{
                t1.min+=60;
                t1.hr-=1;
            }
        }
        t3.sec=t1.sec-t2.sec;
        if(t1.min<t2.min)
        {
            t1.min+=60;
            t1.hr-=1;
        }
        t3.min=t1.min-t2.min;
        t3.hr=t1.hr-t2.hr;
    }
    else
    {
        if(t2.sec<t1.sec){
            t2.sec+=60;
            if(t2.min>0)
                t2.min-=1;
            else{
                t2.min+=60;
                t2.hr-=1;
            }
        }
        t3.sec=t2.sec-t1.sec;
        if(t2.min<t1.min)
        {
            t2.min+=60;
            t2.hr-=1;
        }
        t3.min=t2.min-t1.min;
        t3.hr=t2.hr-t1.hr;
    }
    return t3;
}
void f1()
{
    struct Time t1={3,25,40},t2={4,10,30};
    struct Time t3;
    t3=difference(t1,t2);
    printf("%d:%d:%d",t3.hr,t3.min,t3.sec);
}