/* Enter your solutions in this file */
#include <stdio.h>



int max(int a[], int b){
  
  int t; 
  
  for(int i=0;i<b-1;i++){
   
     if(a[i]>a[i+1]){
       t=a[i];
       a[i]=a[i+1];
       a[i+1]=t; 
     }
  }

  return a[b-1];

}  



int min(int a[], int b){

  int min=0; 
  
  if(b>1){
   for(int i=0;i<b-1;i++){
   
     if(a[i]<a[i+1]){
       min=a[i];
     }
   }
  }
  
  if(b==1){min=a[0];}
  
  return min;

}  





float average(int a[], int b){
 
    int sum=0;
    float avg;
    
    for(int i=0;i<b;i++){
      sum+=a[i];  
    }
    
    avg=(float)sum/b;
    
    return avg;
}  





 
int mode(int a[], int b){
  int t,p=0,z;
  z=max(a,b); 
  int count[z+1]; 

  for(int i=0;i<=z;i++){
  
     for(int j=0;j<b-1;j++){  
       
       if(a[j]==i){
         p++;    
       }  
     }    
     
  count[i]=p;
  
  } 
  
  t=-32768;
  int mode;
  for(int i=0;i<z;i++){
     if(count[i]>t){
       t=count[i];
       mode=i; 
    } 
  }
  
   return mode;      
}  






int factors(int x, int y[]){
 
 int r,i=2,z=0;
 
  while(x>1){ 
   r=x%i;
   
   if(r==0){ 
       x=x/i;
       y[z]=i;
       z++; 
   } 
   
   if(r!=0){ 
     i++; 
   }
  
  }
 
 return z;
}

