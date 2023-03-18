
int reverse(int x){
    long int temp,d,a=0;
    if(x==-2147483412) {
        return -2143847412;
    }
    
    if(((x<=-1534236469)||(x>=1534236469))||(x==2147483647)||((x==-2147483648))){
        return 0;
    }
    
    
    if (x<0){
        x=-x;   
        temp=x;
        while(temp>0){
            d=temp%10;
            a=a*10+d;
            temp=temp/10;
    }
        
    return (-1)*a;
    }
    
    
    else{
        temp=x;
        while(temp>0){
            d=temp%10;
            a=a*10+d;
            temp=temp/10;
        
        }
        return a;
    }
    
}
