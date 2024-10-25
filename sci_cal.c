#include <stdio.h>
#include <math.h>
#define PI 3.141592654

long long answer = 0;
double k = 0, result = 0;

int menu()
{
    int num;
    printf("\n*************************************");
    printf("\nMenu:");
    printf("\n1. Calculate");
    printf("\n2. Statistics");
    printf("\n3. Equation");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");

    scanf("%d", &num);
    return num;
}

void addition()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result += a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter number 1: ");
        scanf("%lf", &a);
        printf("\nEnter number 2: ");
        scanf("%lf", &b);

        result = a + b;
        printf("\nResult = %lf", result);
    }
}

void subtraction()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result -= a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter number 1: ");
        scanf("%lf", &a);
        printf("\nEnter number 2: ");
        scanf("%lf", &b);
        result = a - b;
        printf("\nResult = %lf", result);
    }
}

void multiplication()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result *= a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter number 1: ");
        scanf("%lf", &a);
        printf("\nEnter number 2: ");
        scanf("%lf", &b);
        result = a * b;
        printf("\nResult = %lf",result);
    }
}

void division()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        if(a!=0)
        {
        result /= a;
        printf("\nResult = %lf", result);
        }
        else
        {
        printf("Math Error\n");
        }
    }
    else
    {
        printf("\nEnter number 1: ");
        scanf("%lf", &a);
        printf("\nEnter number 2: ");
        scanf("%lf", &b);
        if (b!=0)
        {
        result = a / b;
        printf("\nResult = %lf", result);
        }
        else
        {
        printf("Math Error\n");
        }
    }
}

void mod()
{
    long long a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lld", &a);
        answer %= a;
        printf("\nResult = %lld",answer);
    }
    else
    {
        printf("\nEnter number 1: ");
        scanf("%lld", &a);
        printf("\nEnter number 2: ");
        scanf("%lld", &b);
        answer = a % b;
        printf("\nResult = %lld", answer);
    }
}

void factorial()
{
    long long n, f, i;
    printf("\nEnter a number: ");
    scanf("%lld", &n);
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    answer = f;
    printf("\nResult = %lld", answer);

}

long long factorialReturn(long long n)
{
    long long f, i;
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    return f;
}

void sine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = sin(a);
    printf("\nResult = %lf", result);
}

void cosine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = cos(a);
    printf("\nResult = %lf", result);
}

void tangent()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = tan(a);
    printf("\nResult = %lf", result);
}

void logBasee()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = log(a);
    printf("\nResult = %lf", result);
    }
}

void logBase10()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = log10(a);
    printf("\nResult = %lf", result);
    }
}

void eToPowerX()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    result = exp(a);
    printf("\nResult = %lf", result);
}

void squareRoot()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    if (n<0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = sqrt(n);
    printf("\nResult = %lf", result);
    }
}

void cubeRoot()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    result = cbrt(n);
    printf("\nResult = %lf", result);
}

void power()
{
    double base, expo;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &expo);
    result = pow(base, expo);
    printf("%.1lf^%.1lf = %.2lf", base, expo, result);
}

void sineInverse()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("Not in Range");
    }
    else
    {
        result = asin(n);
        printf("Inverse of sin(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
        result = asin(n)*180/PI;
        printf("Inverse of sin(%.2f) = %.2lf in degrees\n", n, result);
    }
}

void cosineInverse()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  // Parameter not in Range
    {
        printf("\nNot in Range");
    }
    else
    {
        result = acos(n);
        printf("\nInverse of cos(%.2f) = %.2lf in radians\n", n, result);

      // converting radians to degree
        result = acos(n)*180/PI;
        printf("\nInverse of cos(%.2f) = %.2lf in degrees\n", n, result);
    }
}

void tangentInverse()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    result = atan(n);

    printf("\nInverse of tan(%.2f) = %.2f in radians", n, result);

    // Converting radians to degrees
    result = (result * 180) / PI;
    printf("\nInverse of tan(%.2f) = %.2f in degrees", n, result);
}

void npr()
{
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld%lld", &n, &r);
    if(n>=r && n>0 && r>=0)
    {
    answer = factorialReturn(n) / factorialReturn(n - r);
    printf("\nResult = %lld", answer);
    }
    else
    {
    printf("Math Error\n");
    }
}

void ncr()
{
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld %lld", &n, &r);
    if(n>=r && n>0 && r>=0)
    {
    answer = factorialReturn(n) / (factorialReturn(r) * factorialReturn(n - r));
    printf("\nResult = %lld", answer);
    }
    else
    {
    printf("Math Error\n");
    }
}

void clear()
{
    printf("\nPrevious Data Cleared");
    answer = 0;
    result = 0;
    k = 0;
}

void mean(float arr[],int n)
{
    float sum=0,Mean=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    Mean= sum/n;
    printf("\nMean of the data = %f", Mean);
}

void median(float arr[],int n)
{   
    float Median;
    if(n%2==0)
    {
        Median = ( arr[(n-2)/2]+arr[n/2] )/2;
    }

    else  Median = arr[(n-1)/2];

    printf("\nMedian of the data = %f", Median);

}

void mode(float arr[],int n)
{
    float Mode;
    int max=0,i,j;

    for(i=0;i<n;i++)
    {
        int c=0;

        for(j=0;j<n;j++)
        {
            if(arr[j]==arr[i]) c++;
        }

        if(c>max)
        {
            max=c;
            Mode=arr[i];
        }

    }

    printf("\nMode of the data = %f", Mode);
}

void lin1var()
{
    float a, b;
    printf("\nLet the equation be of the form ax+b=0\n");
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter constant term b: ");
    scanf("%f", &b);

    if (a == 0) 
    {
        if (b == 0)
        {
            printf("Infinite solutions.\n");
        } 
        else
        {
            printf("No solution.\n");
        }
    }

    float x = -b / a;

    printf("Solution: x = %f\n", x);

}

void lin2var()
{
    float a1, b1, c1, a2, b2, c2;

    printf("\nEnter coefficients for first equation (a1x + b1y = c1):\n");
    printf("Enter a1: ");
    scanf("%f", &a1);
    printf("Enter b1: ");
    scanf("%f", &b1);
    printf("Enter c1: ");
    scanf("%f", &c1);

    printf("\nEnter coefficients for second equation (a2x + b2y = c2):\n");
    printf("Enter a2: ");
    scanf("%f", &a2);
    printf("Enter b2: ");
    scanf("%f", &b2);
    printf("Enter c2: ");
    scanf("%f", &c2);

    float denominator = a1 * b2 - a2 * b1;

    if (denominator == 0) 
    {
        printf("Equations are linearly dependent or inconsistent.\n");
    }

    else 
    {
        float x = (c1 * b2 - c2 * b1) / denominator;
        float y = (a1 * c2 - a2 * c1) / denominator;

        printf("Solution: x = %f, y = %f\n", x, y);
    }

}

void lin3var()
{
    float a1, b1, c1, d1, a2, b2, c2, d2, a3, b3, c3, d3;

    printf("\nEnter coefficients for first equation (a1x + b1y + c1z = d1):\n");
    printf("Enter a1: ");
    scanf("%f", &a1);
    printf("Enter b1: ");
    scanf("%f", &b1);
    printf("Enter c1: ");
    scanf("%f", &c1);
    printf("Enter d1: ");
    scanf("%f", &d1);

    printf("\nEnter coefficients for second equation (a2x + b2y + c2z = d2):\n");
    printf("Enter a2: ");
    scanf("%f", &a2);
    printf("Enter b2: ");
    scanf("%f", &b2);
    printf("Enter c2: ");
    scanf("%f", &c2);
    printf("Enter d2: ");
    scanf("%f", &d2);

    printf("\nEnter coefficients for third equation (a3x + b3y + c3z = d3):\n");
    printf("Enter a3: ");
    scanf("%f", &a3);
    printf("Enter b3: ");
    scanf("%f", &b3);
    printf("Enter c3: ");
    scanf("%f", &c3);
    printf("Enter d3: ");
    scanf("%f", &d3);

    float determinant(float a1, float b1, float c1, float a2, float b2, float c2, float a3, float b3, float c3) {
    return a1*(b2*c3 - b3*c2) - b1*(a2*c3 - a3*c2) + c1*(a2*b3 - a3*b2);
}

    float det = determinant(a1, b1, c1, a2, b2, c2, a3, b3, c3);

    if (det == 0)
    {
        printf("Equations are linearly dependent or inconsistent.\n");
    }

    else
    {
        float x = determinant(d1, b1, c1, d2, b2, c2, d3, b3, c3) / det;
        float y = determinant(a1, d1, c1, a2, d2, c2, a3, d3, c3) / det;
        float z = determinant(a1, b1, d1, a2, b2, d2, a3, b3, d3) / det;
    
        printf("Solution: x = %f, y = %f, z = %f\n", x, y, z);
    }
}

void quad()
{
    float a, b, c, root1, root2, realPart, imaginaryPart;
    
    printf("Enter coefficients for quadratic equation (ax^2 + bx + c = 0):\n");
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    if (a == 0) 
    {
        printf("Not a quadratic equation.\n");
    }

    else
    {
        float discriminant = b*b - 4*a*c;

        if (discriminant > 0) 
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are real and different.\n");
            printf("Root 1 = %f\n", root1);
            printf("Root 2 = %f\n", root2);
        } 
        else if (discriminant == 0) 
        {
            root1 = root2 = -b / (2 * a);
            printf("Roots are real and the same.\n");
            printf("Root 1 = Root 2 = %f\n", root1);
        } 
        else
        {
            realPart = -b / (2 * a);
            imaginaryPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are complex and different.\n");
            printf("Root 1 = %f + %fi\n", realPart, imaginaryPart);
            printf("Root 2 = %f - %fi\n", realPart, imaginaryPart);
        }

    }
    
}

int calculate()
{
    int ch;
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Remainder");
    printf("\n6. Factorial");
    printf("\n7. Sine");
    printf("\n8. Cosine");
    printf("\n9. Tangent");
    printf("\n10.log(base e)");
    printf("\n11.log(base 10)");
    printf("\n12.e^x");
    printf("\n13.SquareRoot");
    printf("\n14.CubeRoot");
    printf("\n15.Power");
    printf("\n16.Sine Inverse");
    printf("\n17.Cosine Inverse");
    printf("\n18.Tangent Inverse");
    printf("\n19.Permutation (nPr)");
    printf("\n20.Combination (nCr)");
    printf("\n21.Clear");
    printf("\n22.Exit");
    printf("\nEnter your choice: ");

    scanf("%d", &ch);
    return ch;
}

void cal()
{
    int l = 0;

    while(1)
    {
        printf("\n*************************************");
        printf("\n Previous Decimal Result = %f", result);
        printf("\n Previous Integer Result = %d\n", answer);

     switch(calculate())
        {
            case 1: addition();
                    k = 1;
                    break;

            case 2: subtraction();
                    k = 1;
                    break;

            case 3: multiplication();
                    k = 1;
                    break;

            case 4: division();
                    k = 1;
                    break;

            case 5: mod();
                    k = 1;
                    break;

            case 6: factorial();
                    k = 1;
                    break;

            case 7: sine();
                    k = 1;
                    break;

            case 8: cosine();
                    k = 1;
                    break;

            case 9: tangent();
                    k = 1;
                    break;

            case 10:logBasee();
                    k = 1;
                    break;

            case 11:logBase10();
                    k = 1;
                    break;

            case 12:eToPowerX();
                    k = 1;
                    break;

            case 13:squareRoot();
                    k = 1;
                    break;

            case 14:cubeRoot();
                    k = 1;
                    break;

            case 15:power();
                    k = 1;
                    break;

            case 16:sineInverse();
                    k = 1;
                    break;

            case 17:cosineInverse();
                    k = 1;
                    break;

            case 18:tangentInverse();
                    k = 1;
                    break;

            case 19:npr();
                    k = 1;
                    break;

            case 20:ncr();
                    k = 1;
                    break;

            case 21:clear();
                    break;

            case 22:l = 1;
                    break;

            default:
                    printf("\nInvalid Choice !");
        }
      
        if(l == 1) break;
    }    
}

void statistics()
{
    int n;
    printf("\n*************************************");
    printf("\nEnter data to get Mean, Median, Mode");
    printf("\nEnter no of numbers in the data: ");
    scanf("%d",&n);

    float arr[n];

    for(int i=0;i<n;i++)
    {
        printf("\nEnter number %d: ", i+1);
        scanf("%f", &arr[i]);
    }
    
    mean(arr,n);
    median(arr,n);
    mode(arr,n);

}

int equation()
{
   int eq;
   printf("\n*************************************");   
   printf("\nOptions:");
   printf("\n1. Linear Equation in 1 Variable");
   printf("\n2. Linear Equations in 2 Variables");
   printf("\n3. Linear Equations in 3 Variables");
   printf("\n4. Quadratic Equation");
   printf("\n5. Exit");
   printf("\nEnter your choice: ");

    scanf("%d", &eq);
    return eq;
}

void equa()
{
    int j=0;
    while(1)
    {
        switch(equation())
        {
            case 1: lin1var();
                    break;
            case 2: lin2var();
                    break;
            case 3: lin3var();
                    break;        
            case 4: quad();
                    break;
            case 5: j = 1;
                    break;

            default:
                    printf("\nInvalid Choice !");                        
        }

        if(j == 1) break;

    }
}

void main()
{
    int q=0;
    while(1)
    {
       switch(menu())
       {
            case 1: cal();
                    break;
            case 2: statistics();
                    break;
            case 3: equa();
                    break;        
            case 4: q=1;
                    break;
            default:
                    printf("\nInvalid Choice !");
       }

       if(q==1) break;
    }    
}
