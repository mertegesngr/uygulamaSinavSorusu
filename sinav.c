#include <stdio.h>
int main(){

int x ; 

int basamak =0 ; 
int sayac=0 ; 


while (1){
sayac++ ; 
printf("sayı giriniz : "); scanf("%d",&x) ; 

if(x<=9 && x>=0){
basamak = (basamak*10) +x ; 

}

else if(x>9 || x<-1) {

    printf("hatalı bir sayı girdiniz 0-9 arası rakam girilmelidir") ; printf("\n") ;
}




    if(x==-1){
        

printf("programdan çıkış yapıldı\n") ; 
        break; 
        
    }
   
}



if (sayac<=1){

printf("sonuç =%d",basamak) ;  

}







    return 0 ; 
}