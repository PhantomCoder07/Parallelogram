// Standard
#include <stdio.h>
int main()
{
    float a,b,height,area,peri;
    printf("Enter parallelogram's side values: ");
    scanf("%f %f",&a,&b);
    printf("Enter parallelogram's hight: ");
    scanf("%f",&height);
    area=b*height;
    peri=2*(a+b);
    printf("The area of parallelogram: %.2f\n",area);
    printf("The perimeter of parallelogram: %.2f\n",peri);
    return 0;
}
// Function 
#include <stdio.h>
float area (float b, float h)
{
    return b*h;
}
float peri (float a, float b)
{
    return 2*(a+b);
}
int main()
{
    float a,base,height;
    printf("Enter parallelogram's base: ");
    scanf("%f",&base);
    printf("Enter parallelogram's another side: ");
    scanf("%f",&a);
    printf("Enter parallelogram's hight: ");
    scanf("%f",&height);
    printf("The area of parallelogram: %.2f\n",area(base,height));
    printf("The perimeter of parallelogram: %.2f\n",peri(a,base));
    return 0;
}
// Structure 
#include <stdio.h>
struct parallelogram
{
    float a,b,h,area,peri;
};
int main()
{
    struct parallelogram pa;
    printf("Enter parallelogram's base: ");
    scanf("%f",&pa.b);
    printf("Enter parallelogram's another side: ");
    scanf("%f",&pa.a);
    printf("Enter parallelogram's hight: ");
    scanf("%f",&pa.h);
    pa.area=pa.b*pa.h;
    pa.peri=2*(pa.a+pa.b);
    printf("The area of parallelogram: %.2f\n",pa.area);
    printf("The perimeter of parallelogram: %.2f\n",pa.peri);
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    float a,b,h,area,peri;
    char ch;
    file1 = fopen ("Square.txt","w");
    file2 = fopen ("Square.txt","r");
    if (file1==NULL)
        printf ("The file does not exist");
    else
    {
        printf("Enter parallelogram's base: ");
        scanf("%f",&b);
        printf("Enter parallelogram's another side: ");
        scanf("%f",&a);
        printf("Enter parallelogram's hight: ");
        scanf("%f",&h);
        area=b*h;
        peri=2*(a+b);
        printf("The area of parallelogram: %.2f\nThe perimeter of parallelogram: %.2f\n",area,peri);
        fclose (file1);
    }
    if (file2==NULL)
        printf ("The file does not exist");
    else
    {
        while (!feof(file2))
        {
            ch=fgetc(file2);
            printf ("%c",ch);
        }
        fclose (file2);
    }
    return 0;
}
