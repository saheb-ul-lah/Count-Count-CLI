#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Global variable ( Will store the answers !)
int count=0, choice=1; 

// Speed maintainence constant (Inversely proportional to speed)
float s_m=1.0; 

//Random no generation
int r_b(int min, int max)		
{
    int r_no;
    srand(time(0));
    r_no=rand() % (max - min + 1) + min;
    return r_no;
}

//Base Power calculation
int power(int b, int p)		
{ 
    int i, ans=p;
    for (i=2;i<=p;i++)
    {
        ans=ans*b;
    }
    return ans;
}

/* 
Function to introduce a delay for slowing down the code execution 
i.e pattern printing slow enough for human eye to count it.
*/
void speed_controller(float x) 		
{
    int trash=0,trash_i, trash_j;
    for (trash_i=0 ; trash_i<=(100000/2)*50*x ; trash_i++){
        //for (trash_j=0 ; trash_j<=50*x ; trash_j++){
            trash++;
        //}
    }
}

//To print n nos of new lines in one go
void print_new_lines(int n){
	for (int i=0; i<n; i++){
		printf("\n");
	}
}

/* 
Function to right-shift the shapes for formatting 
i.e providing random positions for random shapes on X-axis
*/
void right_shift(int r){
	for (int i=0; i<r; i++){
		printf(" ");
	}
}

int x_speed(){
	return r_b(50,150);	// Inversely prop. to speed
}
int x_new_lines(){
	return r_b(150,250);
}

// print_<shape_name>  programs below
void print_triangle(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int trash = 0;
    int t_rows = r_b(10, 40);
    t_rows += t_rows;
    int i = 1, j, k, s = t_rows / 2;
    while (i <= t_rows){
        right_shift(t_rows);
        j = 0;
        while (j < s){
            printf(" ");
            j += 1;
        }
        s -= 1;
        k = 0;
        while (k < i){
            if (k % 2 != 0){
                printf(".");
                k += 1;
            }  
            else{
                printf(" ");
                k += 1;
            }
        }
        printf("\n");
        i += 2;
        speed_controller(s_m);    
        s_m /= 2;
    }
    for (trash = 0; trash <= 50; trash++){
        speed_controller(1);
        printf("\n");
    }               
}
           
           
// Square
void print_square(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int trash = 0;
    int rows = r_b(15, 40), i, j;
    for (i = 0; i < rows; i++){
        right_shift(rows);
        for (j = 0; j < rows; j++){
            printf(".");
        }
        printf("\n");
        speed_controller(s_m);
        s_m /= 2;
    }
    for (trash = 0; trash <= 50; trash++){
        speed_controller(1);
        printf("\n");
    }
}

void print_circle(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int trash = 0;
    int rows = r_b(15, 40), i, j;
    for (i = 1; i <= rows; i++){
        right_shift(rows);
        for (j = 1; j <= rows; j++){
            if (((i == 1 || i == rows) && (j > 1 && j < rows)) || ((i > 1 && i < rows) && (j == 1 || j == rows))){
                printf(".");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
        speed_controller(s_m);
        s_m /= 2;
    }
    
    for (trash = 0; trash <= 50; trash++){
        speed_controller(1);
        printf("\n");
    }
}


void print_arrow(){
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    int trash = 0;
    int rows = r_b(15, 40), i, j;
    int s=rows/2;
    for (i = 0; i < rows; i++){
        right_shift(rows);
        for (j = 0; j <= rows; j++){
			if (j==rows/2 || j==s || j==(rows/2)+i){
				printf(".");
			} else {
				printf(" ");
			}
		} s--;
        printf("\n");
        speed_controller(s_m*2);
        s_m /= 2;
    }
    for (trash = 0; trash <= 50; trash++){
        speed_controller(1);
        printf("\n");
    }
}

//---------------------------------------------------------


int print_A(int n) {
//Takes pattern size as input of type int
//printf("Enter the size greater than 4: ");
//scanf("%d",&n);
    n=n+n;
    int i=1,j,k,s=n/2;
    while(i<=n){
    	j=0;
    	while(j<s){
			printf(" ");
    		j+=1;
    	}
    	s-=1;
     	k=0;
     	while(k<i){
      	if(k==0 || k==i-1 || i==n/2){
      	printf(".");
      	k+=1;
      	}
      	else{
       	printf(" ");
       	k+=1;
      	}
   	}
	printf("\n");
    i=i+2;
    }
printf("\n");
return 0;

}

int print_B(int n) {
	
    int row=((n+n)/2)+n/2,width=n,diff=1,i,j;
    for (i=1;i<=row;i++){
     for (j=1;j<=width;j++){
      if (j==1||j==width||i==diff){
       
       if(j==width && i==diff){
        printf(" ");
       }
       else{
        printf(".");
       }
      }
      else{
        printf(" ");
      }
     }
     printf("\n");
     if(i==diff){
       diff+=row/2;
      }
     }
    if(diff==row+1){
     for (i=0;i<n-1;i++){
      printf(".");
     }
    }
printf("\n");
return 0;
}


int print_C(int n) {
	
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((j>1 && (i==1 || i==n)) || ((i>1 && i<n) && (j==1))){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");
return 0;
}

int print_D(int n) {
	
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((j<n && (i==1 || i==n)) || ((i>1 && i<n) && (j==2 || j==n))){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");
return 0;
}


int print_E(int n) {
	
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==1 || i==(n/2)+1 || i==n || j==1){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");
return 0;
}


int print_F(int n) {
	
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==1 || i==(n/2)+1 || j==1){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");
return 0;
}


int print_G(int n) {
	
 int i,j;
 int x=(n/2)+1;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (((i==1 || i==n) && j>1) || ((i>1 && i<n) && j==1)|| (i>x && j==n) || (i==x && j>x)){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");
return 0;
}


int print_H(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (j==1 || j==n || i==(n/2)+1){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
	
printf("\n");
return 0;
}


int print_I(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==1 || i==n || j==(n/2)+1){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
	
printf("\n");
return 0;
}


int print_J(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==1 || ((i==n) && ((j>1) && (j<=n/2+1))) || j==(n/2)+1 || ((i==n-1 ) && (j==1))){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
	
printf("\n");
return 0;
}


int print_K(int n) {
 
 int i,j,s,r;	
 s=n/2-1; //Space
 r=n/2+2;
 int m=2;
 for (i=1;i<=n;i++){
  for (j=1;j<=n/2+1;j++){
   if (j==1||j==s+2||(i==r && j==m)){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  s-=1;
  if (i>=r){
   r+=1;
   m+=1;
  }
  printf("\n");
 }
 
printf("\n");
return 0;
}


int print_L(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==n || j==1){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
	
printf("\n");
return 0;
}


int print_M(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (j==1 ||((i<=n/2+1) && (i==j)) || ((j>n/2+1) && (i==n-j+1)) || j==n){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
	
printf("\n");
return 0;
}


int print_N(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (j==1 ||i==j||j==n){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");	
return 0;
}


int print_O(int n) {
 
 int i,j;
 int x=(n/2)+1;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (((i==1 || i==n) && ((j>1) && (j<n))) || ((i>1 && i<n) && (j==1 || j==n)) ){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");
return 0;
}


int print_P(int n) {
 
 int i,j;
 int x=(n/2)+1;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (((i==1 || i==n/2+1) && ((j>1) && (j<n))) || ((i>1 && i<n) && (j==1)) || ((i>1 && i<n/2+1) && (j==n))){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");	
return 0;
}


int print_Q(int n) {
 
 int i,j,a;
 n=a-a/3;
 int x=(n/2)+1;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (((i==1 || i==n) && ((j>1) && (j<n))) || ((i>1 && i<n) && (j==1 || j==n))||(i>n/2+1)&&(i==j)){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
 for (i=1;i<=a-n-1;i++){
  for (j=1;j<=a;j++){
   if (j==n+i){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
 
printf("\n");
return 0;
}


int print_R(int n) {
 
 int i,j;
 int x=n/2+1,r=2;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (((i==1 || i==n/2+1) && ((j>1) && (j<n))) || ((i>1 && i<n) && (j==1)) || ((i>1 && i<x) && (j==n))||(i>x && j==r)){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  r+=1;
 }
	
printf("\n");
return 0;
}


int print_S(int n) {
 
 int i,j;
 int x=n/2+1,r=2;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1||i==x||i==n) && (j>1 && j<n)||(j==1 && (i>1 && i<x))||(j==n && (i>x && i<n))){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  r+=1;
 }

printf("\n");
return 0;
}


int print_T(int n) {
 
 int i,j;
 int x=n/2+1;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==1||j==x){ 
   	printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
	
printf("\n");
return 0;
}


int print_U(int n) {
 
 int i,j;
 int x=n/2+1;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (((j==1 || j==n) && i<n) || ((i==n) && (j>1 && j<n))){ 
   	printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
	
printf("\n");
return 0;
}


int print_V(int n) {
 
 int i,j;
 int x=n+n-1;
 for (i=1;i<=n;i++){
  for (j=1;j<=n+n;j++){
   if (i==j||(j==x && i<n)){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  x-=1;
 }
	
printf("\n");
return 0;
}


int print_W(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (j==1||j==n||(i>n/2 && i==j)){
    printf(".");
   }
   else if(i>n/2+1 && j==n-i+1){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
printf("\n");
return 0;
}


int print_X(int n) {
 
 int i,j;
 int x=n;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==j||(j==x)){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  x-=1;
 }
	
printf("\n");
return 0;
}


int print_Y(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i>n/2 && j==n/2+1)||(i<n/2+1 && i==j)){
    printf(".");
   }
   else if(i<n/2+1 && j==n-i+1){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");
return 0;
}


int print_Z(int n) {

 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==1 || i==n){
    printf(".");
   }
   else if(j==n-i+1){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }
printf("\n");
return 0;
}

int print_0(int n) {
 
 int i,j;
 int x=(n/2)+1;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (((i==1 || i==n) && ((j>1) && (j<n))) || ((i>1 && i<n) && (j==1 || j==n)) ){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
 }

printf("\n");
return 0;
}

int print_1(int n) {
 
 int i,j;
 int s=n/2+1;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==n || j==n/2+1|| (i<n/2+1 && j==s )){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  s-=1;
 }
printf("\n");
return 0;
}


int print_2(int n) {
 
 int i,j;
 int s=n/3,t=n;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1||i==n/2+1||i==n) && (j>1 && j<n)||(j==1 && i>n/2+1 && i<n)||(j==n && i>1 && i<n/2+1)){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  s-=1;
  
 }

printf("\n");
return 0;
}


int print_3(int n) {
 
 int i,j;
 int s=n/3,t=n;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1||i==n/2+1||i==n) && (j>1 && j<n)||(j==n && i>n/2+1 && i<n)||(j==n && i>1 && i<n/2+1)){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  s-=1;
  
 }

printf("\n");
return 0;
}


int print_4_(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==n/2+1 && (j>1 && j<n)||(j==n && i>n/2+1)||((j==1 || j==n) && i<n/2+1)){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  
 }
printf("\n");
return 0;
}


int print_4(int n) {
 
 int i,j,s;
 s=n;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (j==s || i==n/2+1 || j==n){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  s-=2;
 }

printf("\n");
return 0;
}


int print_5_(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1||i==n/2+1||i==n) && (j>1 && j<n)||(j==n && (i>n/2+1 && i<n))||(j==1 && (i>1 && i<n/2+1))){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  
 }

printf("\n");
return 0;
}


int print_5(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (((i==1||i==n/2+1||i==n) && j<n)||(j==n && (i>n/2+1 && i<n))||(j==1 && (i>1 && i<n/2+1))){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  
 }

printf("\n");
return 0;
}


int print_6_(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1||i==n/2+1||i==n) && (j>1 && j<n)||((j==1 || j==n) && (i>n/2+1 && i<n))||(j==1 && (i>1 && i<n/2+1))){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  
 }

printf("\n");
return 0;
}


int print_6(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1||i==n/2+1||i==n) && (j>1 && j<n)||(j==n && (i>n/2+1 && i<n))||(j==1 && (i>1 && i<n))){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  
 }

printf("\n");
return 0;
}


int print_7_(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1 && j<n) || (i>1 && j==n)){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  
 }

printf("\n");
return 0;
}


int print_7(int n) {
 
 int i,j,s;
 s=n;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if (i==1 || i==n/2+1 || j==s){
    printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  s-=1;
  
 }

printf("\n");
return 0;
}


int print_8(int n) {
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1||i==n/2+1||i==n) && (j>1 && j<n)||((j==1 || j==n) && (i>n/2+1 && i<n))||((j==1 || j==n) && (i>1 && i<n/2+1))){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  
 }
printf("\n");
return 0;
}


int print_9_(int n){
 
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1||i==n/2+1||i==n) && (j>1 && j<n)||(j==n && (i>n/2+1 && i<n))||((j==1 || j==n) && (i>1 && i<n/2+1))){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  
 }

printf("\n");
return 0;
}


int print_9(int n) {
 int i,j;
 for (i=1;i<=n;i++){
  for (j=1;j<=n;j++){
   if ((i==1||i==n/2+1||i==n) && (j>1 && j<n)||(j==n && (i>1 && i<n))||(j==1 && (i>1 && i<n/2+1))){ 
   printf(".");
   }
   else{
    printf(" ");
   }
  }
  printf("\n");
  
 }

printf("\n");
return 0;
}



//---------------------------------------------------------
void print_shape(int unit, int lev) //Prints shapes automatically
{
/*	________Unit ideas_________
	  1. Triangle, Square, Circle
      2. 0-9 , A-Z
      3. Kite, Rocket, Bomb
      4. Read word
      5. Read sentences		*/
     
	int c, r_shape_no, r_size;   
    switch(unit){
        case 1:
        	r_shape_no=r_b(1,4);
			count=r_b(4,9);//count=r_b(power(2,lev),power(2,lev+1));
            //Actual Answer (Stored in global variable i.e count)
            switch (r_shape_no) {
		        case 1:
		            for (c = 1; c <= count; c++) {
		                print_square();
		                speed_controller(s_m);
		                printf("\n\n\n\n");
		            }
		            break;
		        case 4:
		            for (c = 1; c <= count; c++) {
		                print_circle();
		                speed_controller(s_m);
		                printf("\n\n\n\n");
		            }
		            break;
		        case 3:
		            for (c = 1; c <= count; c++) {
		                print_triangle();
		                speed_controller(s_m);
		                printf("\n\n\n\n");
		            }
		            break;
		        case 2:
		        	for (c = 1; c <= count; c++) {
		                print_arrow();
		                speed_controller(s_m);
		                printf("\n\n\n\n");
		            }
		            break;
		        }
            //Printing random shapes task completed
           break;
        case 2:
        	
            count=r_b(4,9);
            //Actual Answer (Stored in global variable i.e count)
            r_shape_no=r_b(0,39); // Selecting a random no for random shape
            printf("r_shape is : %d\n\n", r_shape_no); //Some shapes are not getting printed the way they should be
			r_size=r_b(15,28);
            switch (r_shape_no) {
		        case 0:
		            for (c = 1; c <= count; c++) {
		                print_A(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 1:
		            for (c = 1; c <= count; c++) {
		                print_B(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 2:
		            for (c = 1; c <= count; c++) {
		                print_C(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 3:
		            for (c = 1; c <= count; c++) {
		                print_D(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 4:
		            for (c = 1; c <= count; c++) {
		                print_E(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 5:
		            for (c = 1; c <= count; c++) {
		                print_F(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 6:
		            for (c = 1; c <= count; c++) {
		                print_G(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 7:
		            for (c = 1; c <= count; c++) {
		                print_H(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 8:
		            for (c = 1; c <= count; c++) {
		                print_I(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 9:
		            for (c = 1; c <= count; c++) {
		                print_J(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 10:
		            for (c = 1; c <= count; c++) {
		                print_K(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 11:
		            for (c = 1; c <= count; c++) {
		                print_L(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 12:
		            for (c = 1; c <= count; c++) {
		                print_M(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 13:
		            for (c = 1; c <= count; c++) {
		                print_N(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 14:
		            for (c = 1; c <= count; c++) {
		                print_O(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 15:
		            for (c = 1; c <= count; c++) {
		                print_P(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 16:
		            for (c = 1; c <= count; c++) {
		                print_Q(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 17:
		            for (c = 1; c <= count; c++) {
		                print_R(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 18:
		            for (c = 1; c <= count; c++) {
		                print_S(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 19:
		            for (c = 1; c <= count; c++) {
		                print_T(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 20:
		            for (c = 1; c <= count; c++) {
		                print_U(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 21:
		            for (c = 1; c <= count; c++) {
		                print_V(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 22:
		            for (c = 1; c <= count; c++) {
		                print_W(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 23:
		            for (c = 1; c <= count; c++) {
		                print_X(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 24:
		            for (c = 1; c <= count; c++) {
		                print_Y(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 25:
		            for (c = 1; c <= count; c++) {
		                print_Z(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 26:
		            for (c = 1; c <= count; c++) {
		                print_0(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 27:
		            for (c = 1; c <= count; c++) {
		                print_1(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 28:
		            for (c = 1; c <= count; c++) {
		                print_2(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 29:
		            for (c = 1; c <= count; c++) {
		                print_3(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 30:
		            for (c = 1; c <= count; c++) {
		                print_4_(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 31:
		            for (c = 1; c <= count; c++) {
		                print_4(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 32:
		            for (c = 1; c <= count; c++) {
		                print_5_(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 33:
		            for (c = 1; c <= count; c++) {
		                print_5(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 34:
		            for (c = 1; c <= count; c++) {
		                print_6_(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 35:
		            for (c = 1; c <= count; c++) {
		                print_6(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 36:
		            for (c = 1; c <= count; c++) {
		                print_7_(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 37:
		            for (c = 1; c <= count; c++) {
		                print_7(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 38:
		            for (c = 1; c <= count; c++) {
		                print_8(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        case 39:
		            for (c = 1; c <= count; c++) {
		                print_9_(r_size);
		                speed_controller(s_m * x_speed());
		                print_new_lines(x_new_lines());
		            }
		            break;
		        }
            //Printing random shapes task completed
        break;
    } 	//switch close brace    
}

//----------------------------------------------------------------------------

int main()
{
    int unit=1, level=1, answer;
    int n;
    int start, stop;

    while (choice==1)
    {
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t.     . .......  .         ......   .....   .     .  .......\n");
		printf("\t\t\t\t\t\t.     . .        .        .        .     .  ..   ..  .      \n");
		printf("\t\t\t\t\t\t.     . .        .        .        .     .  . . . .  .      \n");
		printf("\t\t\t\t\t\t.  .  . ......   .        .        .     .  .  .  .  ...... \n");
		printf("\t\t\t\t\t\t. . . . .        .        .        .     .  .     .  .      \n");
		printf("\t\t\t\t\t\t..   .. .        .        .        .     .  .     .  .      \n");
		printf("\t\t\t\t\t\t.     . .......  .......   ......   .....   .     .  .......\n\n");
		printf("\t\t\t\t\t\t\t\t.......   ..... \n");
		printf("\t\t\t\t\t\t\t\t   .     .     .\n");
		printf("\t\t\t\t\t\t\t\t   .     .     .\n");
		printf("\t\t\t\t\t\t\t\t   .     .     .\n");
		printf("\t\t\t\t\t\t\t\t   .     .     .\n");
		printf("\t\t\t\t\t\t\t\t   .     .     .\n");
		printf("\t\t\t\t\t\t\t\t   .      ..... \n\n");
		printf("\t\t\t\t ......   .....   .     .  .     .  .......         ......   .....   .     .  .     .  .......\n");
		printf("\t\t\t\t.        .     .  .     .  ..    .     .           .        .     .  .     .  ..    .     .   \n");
		printf("\t\t\t\t.        .     .  .     .  . .   .     .           .        .     .  .     .  . .   .     .   \n");
		printf("\t\t\t\t.        .     .  .     .  .  .  .     .           .        .     .  .     .  .  .  .     .   \n");
		printf("\t\t\t\t.        .     .  .     .  .   . .     .           .        .     .  .     .  .   . .     .   \n");
		printf("\t\t\t\t.        .     .  .     .  .    ..     .           .        .     .  .     .  .    ..     .   \n");
		printf("\t\t\t\t ......   .....    .....   .     .     .            ......   .....    .....   .     .     .   \n");
        printf("\n\n\t\t\t\t_______________________________***Enter 1 to begin level %d ***_______________________________\n\n\n\n",level);
		
		scanf("%d",&choice);
        if (choice!=1){
            printf("\n\n\n\t\t\t\t Invalid input !\n\n\n");
            while (choice!=1){
                printf("\n\n\n\t\t\t\tEnter 1 to continue: ");
                scanf("%d",&choice);
                if (choice==1){
                    break;
                }
                else{
                    printf("\n\n\n\t\t\t\t Invalid input !\n\n\n");
                }
            }
        }
        answer=1;
        while (answer==1) //Choice of continuation
        {
            unit=1;
            while (unit<=5)
            {
                if (answer==0){
                    break;
                }
                level=(unit-1)*5+1;
                while (level<=unit*5)
                {
                    if (answer==0){
                        break;
                    }                   
                                /*1. Triangle, Square, Circle
                                  2. 0-9 , A-Z
                                  3. Kite, Rocket, Bomb
                                  4. Read word
                                  5. Read sentences
                                */
                    print_shape(unit,level);
					                   
                    // Now testing the user
                    int u_inp; //User's answer
                    printf("\n\n\n\t\t\t\tWhat was your count ? : ");
                    scanf("%d",&u_inp);
                    if (u_inp==count){
                        if (level%5==0){
                            printf("\t\t\t\tGreat play :) \n\n\n\n\n\t\t\t\tNext unit i.e %d arriving !!!\n\\n",unit+1);
                        }
                        printf("\n\n\n\t\t\t\t Correct answer :) \n\n\n\n\n\t\t\t\tNext level i.e %d arriving !!!\n\n",level+1);
                       
                        //Asking for continuation
                        int yes_no;
                        printf("\t\t\t\tEnter 1 to continue : ");
                        scanf("%d",&yes_no);
                        if (yes_no!=1){
                            printf("\n\n\n\t\t\t\tInvalid input ! ");
                            while (yes_no!=1){
                                printf("\n\n\n\t\t\t\tEnter 1 to continue: ");
                                scanf("%d",&yes_no);
                                if (yes_no==1){
                                    break;
                                }
                                else{
                                    printf("\n\n\n\t\t\t\t Invalid input !\n\n\n");
                                }
                            }
                        }
                        if (answer==1 && choice==1){
                            level++;
                        }
                    }
                    else {
                        printf("\n\n\n\t\t\t\tOops, wrong answer :(\n\t\t\t\tTry again !\n\n\n\n\n\n");
                        printf("\n\n\n\t\t\t\t Correct answer is %d ;) \n\n\n\n\n\n",count);
//answer=0;
                        level=1;
                        unit=1;
                        //Asking for continuation
                        int yes_no;
                        printf("\n\n\n\t\t\t\tDo you want to play again ?\n\t\t\t\t\t\t1. Yes\n\t\t\t\t\t\t0. No\n\t\t\t\tEnter your choice (0/1) : ");
                        scanf("%d",&yes_no);                       
                        while (yes_no!=0 || yes_no!=1){                           
                            if (yes_no==0){
                                answer=0;
                                choice=0;
                                printf("\n\n\t\t\t\t\t\t\tTerminating ...\n\n");
                                break;
                            }
                            else if (yes_no==1){
                                answer=0;
                                choice=1;
                                break;
                            }
                            else{
                                printf("\t\t\t\tInvalid choice !!!\n\t\t\t\tTry again !\n");
                                printf("\n\n\n\t\t\t\tDo you want to play again ?\n\t\t\t\t\t\t1. Yes\n\t\t\t\t\t\t0. No\n\t\t\t\tEnter your choice (0/1) : ");
                                scanf("%d",&yes_no);
                            }
                        }
                    }                   
                }
                if (answer==1 && choice==1){
                    unit++;
                }
            }       
        }       
    }
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\t\t\t\t ......   .....   .     .  .     .  .......         ......   .....   .     .  .     .  .......\n");
printf("\t\t\t\t.        .     .  .     .  ..    .     .           .        .     .  .     .  ..    .     .   \n");
printf("\t\t\t\t.        .     .  .     .  . .   .     .           .        .     .  .     .  . .   .     .   \n");
printf("\t\t\t\t.        .     .  .     .  .  .  .     .           .        .     .  .     .  .  .  .     .   \n");
printf("\t\t\t\t.        .     .  .     .  .   . .     .           .        .     .  .     .  .   . .     .   \n");
printf("\t\t\t\t.        .     .  .     .  .    ..     .           .        .     .  .     .  .    ..     .   \n");
printf("\t\t\t\t ......   .....    .....   .     .     .            ......   .....    .....   .     .     .   \n");
printf("\n\n\t\t\t\t_______________________________*** [T E R M I N A T E D] ***_______________________________\n\n\n\n",level);

return 0;
}
