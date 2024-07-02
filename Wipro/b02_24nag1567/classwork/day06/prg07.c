/*
recurrsive function:
 function calling itself

 ex:
    func()
    {
        func(); // recurrsive function
    }

*/

#include <stdio.h>
/*
fact(5)
5*4*3*2*1*1=120
fact(n)
fact(n)*fact(n-1)
*/


int fact(int);

int main()
{
    int result=0;
    result = fact(5);
    printf("\nresult = %d",result);
    printf("\n\n");
    return 0;
}

int fact(int n)
{
    int res=0;
    if(n<=0)
        return 1;
    res = n * fact(n-1);
    return res;
}

/*
1. call //different sf are created
n = 5
res = 5 * fact(5-1) //res = 5*24=120
retrun 120 // 120 will be return to line no 27

2. call
n = 4
res = 4 * fact(4-1) // res = 4*6
return 24 // 24 will be returned to line no 45 

3. call
n = 3
res = 3 * fact(3-1) // res = 3 * 2
return 6 // will be returned to line no 50

4. call
n = 2
res = 2 * fact(2-1) // res = 2 * 1
return 2 // will be returened to line no 55

5. call
n = 1
res = 1 * fact(1-1) // res = 1 * 1
retrun 1  //it will goto line no 60

6. call
n=0
if (n<=0)
    return 1 //gets exeuted and will goto line no 64


*/