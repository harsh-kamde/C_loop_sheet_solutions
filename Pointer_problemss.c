#include <stdio.h>
#include <stdlib.h>

// () &

void square(int* num);
void swap(int *a, int *b);
void mathfun(int a, int b, int *sum, int *multi, int *avg);
void storeTable(int arr[][10],int n,int m, int number);

int main(){

//---------------------------Pointers--------------------------------------------------------------------    

    // int num;
    // printf("\nEnter a number: ");
    // scanf("%d",&num);

    // int *ptr;
    // ptr = &num;

    // printf("The value of the number is %d\n",num);
    // square(ptr); //call by reference
    // printf("The value of the number is %d\n",num);

    // int a = 5;
    // int b = 10;

    // printf("The address of a = %p and b = %p\n",&a,&b);
    // printf("The value of a = %d and b = %d\n",a,b);
    // swap(&a,&b);
    // printf("The value after swap a = %d and b = %d\n",a,b);
    // swap(&a,&b);
    // printf("The value after swap a = %d and b = %d\n",a,b);

    // int a=10,b=20;
    // int sum,multi,avg;//multiple results from a single function is done by the help of pointers

    // mathfun(a,b,&sum,&multi,&avg);

    // printf("sum = %d, product =%d and avg = %d\n",sum,multi,avg);


    // int arr[] = {100,200,300};
    // int *ptr = &arr[0];
    // printf("The value at address is %d\n", *ptr);
    // ptr++; //whenever the value of pointer incremented it is increment by the datatype in that ex. int=4, address+4;
    // printf("The value at address is %d\n", *ptr);
    // ptr++;
    // printf("The value at address is %d\n", *ptr);

    //int pointer the difference is of datatype;
    // int a = 2,b=23;
    // int *ptr;
    // int *ptr2;
    // ptr = &a;
    // ptr2 = &b;
    // printf("%u - %u = %d\n",ptr,ptr2, ptr-ptr2);
    
    // int arr2[] = {1,2,3,4,5,6,7};
    // int n = 7;


//------------------------------Reversing an array------------------------------------------------
    // //arrays are pointers

    // for (int i = 0; i < n/2; i++)
    // {
    //    int first = arr2[i];
    //    int last = arr2[n-i-1];

    //    arr2[i] = last;
    //    arr2[n-i-1] = first;
    // }
    
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",arr2[i]);
    // }
    
//-------------------------------Fibonacci series--------------------------------------------------
    // printf("Enter the size of array: ");
    // int n;
    // scanf("%d",&n);
    // int fibonnaci[n];

    // fibonnaci[0] = 0;
    // fibonnaci[1] = 1;

    // for (int i = 2; i < n; i++)
    // {
    //     fibonnaci[i] = fibonnaci[i-1] + fibonnaci[i-2];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //      printf("%d ",fibonnaci[i]);    
    // }


//------------------------2D Arrays---------------------------------------------------------------
    // int tables[2][10];
    // storeTable(tables,0,10,2);
    // storeTable(tables,1,10,3);

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         printf("%d ",tables[i][j]);
    //     }
    //     printf("\n");
        
    // }

//--------------------String----------------------------------------------------------------------

    //The difference between an string and a chracter array is that the string ends with a null chracter
    // To use some useful methods we use string data type over the character array 
    // char first[50];
    // char str[50] = "/0";
    // // scanf("%s",first);//scanf cannot input multi-word string containing spaces 
    // // printf("%s",first);

    // //gets(first);//input whole string dangerous and outdated
    // fgets(first,50,stdin); //input the whole string
    // puts(first); //print the whole string
    
//--------------------File handling in c language------------------------------------------------
    // FILE *fptr;
    // fptr = fopen("Test.txt","r");
    // if (fptr==NULL)
    // {
    //     printf("error 404: File not found");
    // }
    // else{
    //     // char ch[50]= "\0";
    //     // fscanf(fptr,"%s",&ch);
    //     // printf("\n%s",ch);
    //     char ch;
    //     while(ch!=EOF){
    //     printf("%c",ch);
    //     ch = fgetc(fptr);
    //     }
    // }
    // fclose(fptr);

    // FILE *fptr;

    // char name[50] = "\0";
    // int age;
    // float cgpa;

    // printf("Enter your name: ");
    // scanf("%s",name);
    // printf("Enter your age: ");
    // scanf("%d",&age);
    // printf("Enter your cgpa: ");
    // scanf("%f",&cgpa);

    // fptr = fopen("Student.txt","w");
    // fprintf(fptr,"%s\t",name);
    // fprintf(fptr,"%d\t",age);
    // fprintf(fptr,"%f\t",cgpa);
    // fclose(fptr);


//-------------------------------Dynamic memory Allocation---------------------------------------------------------------
    // float *ptr;
    // //malloc is used to allocate dynamic memory 
    // //ptr = (float *)malloc(5 * sizeof(float));

    // //calloc is used to allocate continuous dynamic memory.It also initialize all 
    // //  the blocks with null values 
    // ptr = (float *)calloc(5,sizeof(float));
    // free(ptr); //free() is used to free up the allocated memory.
    
    
    // // ptr[0] = 1.2;
    // // ptr[1] = 5.11;
    // // ptr[2] = 3.5;
    // // ptr[3] = 8.64;
    // // ptr[4] = 5.0654;


    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%f\n",ptr[i]);
    // }
    

    // int *ptr;
    // printf("Enter number of integers to be stored: ");
    // int n;
    // scanf("%d",&n);
    // ptr = (int *)calloc(n,sizeof(int));

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\n",ptr[i]);
    // }
    
    // free(ptr);

    // printf("\n");

    // ptr = (int *) calloc (3,sizeof(int));
 
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d\n",ptr[i]);
    // }

    int *ptr;
    ptr = (int *)calloc(5,sizeof(int));
    printf("Enter the 5 values: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d. have %d\n",i+1,ptr[i]);
    }
    printf("\n");

    printf("\nEnter 8 values: ");
    ptr = realloc(ptr,8);

    for (int i = 0; i < 8; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n");

    for (int i = 0; i < 8; i++)
    {
        printf("%d. have %d\n",i+1,ptr[i]);
    }
    printf("\n");
    
    
    return 0;
}











//in 2D array we have to pass the value of columns
void storeTable(int arr[][10],int n,int m, int number){
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i+1);
    }
    
}

void square(int* num){
    *num = (*num)*(*num);
    printf("Square is : %d \n",*num);
}

void swap(int *a, int *b){
    *a = (*a)+(*b);
    *b = (*a)-(*b);
    *a = (*a)-(*b);
    printf("The address of a = %p and b = %p\n",a,b);
}
void mathfun(int a, int b, int *sum, int *multi, int *avg){
    *sum = a +b;
    *multi = a*b;
    *avg = (a+b)/2;
}
