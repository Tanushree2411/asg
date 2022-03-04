#include <stdio.h>

#include<string.h>

int count=0;

int i=0;

struct library{

int accession_num;

char bookname[50];

char authorname[50];

float price;

int flag;//if 0 then not issued else 1

}l1[30];

 

void addbook(){

    count++;

    printf("BookName: ");

    scanf("%s",l1[i].bookname);

    printf("Author'Name: ");

    scanf("%s",l1[i].authorname);

    printf("Price :");

    scanf("%f",&l1[i].price);

    printf("Accession_num :");

    l1[i].accession_num=i;

    printf("%d\n",l1[i].accession_num);

    printf("Issue or not:");

    scanf("%d",&l1[i].flag);

    i++;

}

 

 

void dispbook(int i){

    printf("BookName: ");

    printf("%s\n",l1[i].bookname);

    printf("Author'Name: ");

    printf("%s\n",l1[i].authorname);

    printf("Price :");

    printf("%f\n",l1[i].price);

    printf("Accession_num :");

    printf("%d\n",l1[i].accession_num);

    printf("Issue or not:");

    printf("%d\n",l1[i].flag);

}

 

void listallbook(){

    for(int j=0;j<i;j++){

    printf("BookName: ");

    printf("%s\n",l1[j].bookname);

    printf("Author'Name: ");

    printf("%s\n",l1[j].authorname);

    printf("Price :");

    printf("%f\n",l1[j].price);

    printf("Accession_num :");

    printf("%d\n",l1[j].accession_num);

    printf("Issue or not:");

    printf("%d\n\n",l1[i].flag);

    }

}

 

void titleofbook(){

    char author[50];

    int fla=0;

    printf("enter author");

    scanf("%s",author);

    for(int j=0;j<i;j++){

        if(strcmp(l1[j].authorname,author)==0){

            printf("%s\n",l1[j].bookname);

            fla=1;

            break;

        }

    }

    if(fla==0){

    printf("No data");}

}

 

void noofbooks(){

    printf("The total books in library are: %d\n",count);

}

 

void listofbooksaccordingtoaccession(){

    int j;

    scanf("%d",&j);

    if(j<i){printf("BookName: ");

    printf("%s\n",l1[j].bookname);

    printf("Author'Name: ");

    printf("%s\n",l1[j].authorname);

    printf("Price :");

    printf("%f\n",l1[j].price);

    printf("Accession_num :");

    printf("%d\n",l1[j].accession_num);

    printf("Issue or not:");

    printf("%d\n",l1[i].flag);

    }

    else{

        printf("No data ");

    }

}

 

int main()

{

    int input,k;

    while (1){

    printf("\n1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of specified book\n5. List the count of books in the library\n6. List the books in the order of accession number\n7. Exit\n");

    printf("enter your choice:");

    scanf("%d",&input);

    switch(input){

        case 1:

            addbook();

            break;

        case 2:

            printf("Enter the accession number which you want to see:");

            scanf("%d",&k);

            if(k<i){

            dispbook(k);}

            else{printf("No data");}

            break;

        case 3:

            listallbook();

            break;

        case 4:

            titleofbook();

            break;

        case 5:

            noofbooks();

            break;

        case 6:

            listofbooksaccordingtoaccession();

            break;

        case 7:

            printf("Thank you for using library");

            break;

    }

    if(input==7){

        break;

    }

    }

    return 0;

}

 
