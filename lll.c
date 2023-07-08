#include<stdio.h>


int hh(int a,int b){
    if(b==0){
        return 1;
    }
    return hh(a,b-1)*a;
}
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int g=hh(a,b);
    printf("%d",g);

     

}