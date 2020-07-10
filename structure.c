#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int roll;
    char name[20];
    int age;
    char collegename[50];
    char address[50];
};


int main()
{
   struct Student st;
   printf("Enter Roll Number :");
   scanf("%d",&st.roll);

   fflush(stdin);
   printf("Enter Name :");
   gets(st.name);

   printf("Enter Age :");
   scanf("%d",&st.age);
   fflush(stdin);

   printf("Enter College Name :");
   gets(st.collegename);
   
   fflush(stdin);
   printf("Enter Address :");
   gets(st.address);

   printf("\n\n\");
   printf("Roll Number : %d\n",st.roll);
   printf("Student Name : %s\n",st.name);
   printf("Student Age : %d\n",st.age);
   printf("College Name : %s\n",st.collegename);
   printf("Roll Number : %s\n",st.address);

    return 0;
}
