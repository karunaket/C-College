#include <stdio.h>
#include <math.h>

float cube_volume(float side)
{
    return pow(side, 3);
}

float cuboid_volume(float length, float width, float height)
{
    return length * width * height;
}

float sphere_volume(float radius)
{
    return (4.0/3.0) * M_PI * pow(radius, 3);
}

float cylinder_volume(float radius, float height)
{
    return M_PI * pow(radius, 2) * height;
}

float cone_volume(float radius, float height)
{
    return (1.0/3.0) * M_PI * pow(radius, 2) * height;
}

int main()
{
    int choice;
    float side, length, width, height, radius;
    float volume;
    char ch;

do{

    printf("Calculate the volume of: \n");
    printf("1. Cube\n");
    printf("2. Cuboid\n");
    printf("3. Sphere\n");
    printf("4. Cylinder\n");
    printf("5. Cone\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);


    switch (choice) {
        case 1:
            printf("Enter the side of the cube: ");
            scanf("%f", &side);
            volume = cube_volume(side);
            printf("Volume = %.2f\n", volume);
            break;
        case 2:
            printf("Enter the length of the cuboid: ");
            scanf("%f", &length);
            printf("Enter the width of the cuboid: ");
            scanf("%f", &width);
            printf("Enter the height of the cuboid: ");
            scanf("%f", &height);
            volume = cuboid_volume(length, width, height);
            printf("Volume = %.2f\n", volume);
            break;
        case 3:
            printf("Enter the radius of the sphere: ");
            scanf("%f", &radius);
            volume = sphere_volume(radius);
            printf("Volume = %.2f\n", volume);
            break;
        case 4:
            printf("Enter the radius of the cylinder: ");
            scanf("%f", &radius);
            printf("Enter the height of the cylinder: ");
            scanf("%f", &height);
            volume = cylinder_volume(radius, height);
            printf("Volume = %.2f\n", volume);
            break;
        case 5:
            printf("Enter the radius of the cone: ");
            scanf("%f", &radius);
            printf("Enter the height of the cone: ");
            scanf("%f", &height);
            volume = cone_volume(radius, height);
            printf("Volume = %.2f\n", volume);
            break;
        default:
            printf("Invalid choice.\n");
       
    }
   
    printf("Do you want to continue?(y/n)");
    scanf("%s",&ch);
}while(ch=='y' || ch=='Y');
if(ch=='n' || ch=='N')
{
printf("Thank U!!!");
}

   

    return 0;
}
