#include <stdio.h>
//declaring structure ---
//structure can also be defined inside a function like this 
/*
//creating normal structure
struct{
	int age;
	int salary;
	char* name;
}emp1,emp2;

int main(){
	emp1.age=22;
	emp1.salary=20000;
	emp1.name="mR. k";
	printf("%d %d %s\n",emp1.age,emp1.salary,emp1.name);
	
	emp2.age=24;
	emp2.salary=10000;
	emp2.name="Mr. P\n";
	
	printf("%d %d %s\n",emp2.age,emp2.salary,emp2.name);
}


int main(){
	struct{
		int age;
		int salary;
		char* name;
	}emp1,emp2;
....body of function
}

//you can also change the data of struct by using like
int main(){
	............
	scanf("%d %d %s\n",&emp1.age,&emp1.salary,&emp1.name);
	printf("%d %d %s\n",emp1.age,emp1.salary,emp1.name);


//creating structure with name------
#include<stdio.h>
struct employee mgr{		//syntax-- struct <name of structure> <variables>{....};
	int age;
	int salary;
	char* name;
};	//no need of creating variables of structure

int main(){
	emp1.age=22;
	emp1.salary=20000;
	emp1.name="mR. k";
	printf("%d %d %s\n",emp1.age,emp1.salary,emp1.name);
	
	emp2.age=24;
	emp2.salary=10000;
	emp2.name="Mr. P\n";
	
	printf("%d %d %s\n",emp2.age,emp2.salary,emp2.name);
}
*/
//typedef ut allows us to define datatype of our own data. eg---
#include <stdio.h>
typedef struct{
    float real;
    float imag;
}complex;


complex add_complex(complex,complex);
void read_compelx(complex *);
void write_complex(complex);

complex add_complex(complex a,complex b){
    complex c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;
}


void read_complex(complex *t){
    printf("Enter real and imaginary part:\n");
    scanf("%f%f",&(t->real),&(t->imag));
}

void write_complex(complex t){
    char c='+';
    if (t.imag<0){
        char c='-';
    }
    printf("%f%c%fj\n",t.real,c,t.imag);
}

int main(){
    complex a,b;
    read_complex(&a);
    read_complex(&b);
    write_complex(add_complex(a,b));
}
