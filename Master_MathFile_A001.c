
////////// Master: Master_MathFile_A001.c


////////// Function-A001 /////////////////////////
long double func_A001_add(double a, double b) 
{   
    long double result;   
    result = (long double) (a) +  (long double) (b);    
    return result;  
}  

////////// Function-A002 /////////////////////////
long double func_A002_sub(double a, double b) 
{   
   long double result;    
   result = (long double) (a) -  (long double) (b); 
   return result;  
}


////////// Function-A003 /////////////////////////
long double func_A002_mul(double a, double b) 
{      
    long double result;       
    result = (long double) (a) *  (long double) (b);    
    return result;  
}

////////// Function-A004 /////////////////////////
long double func_A004_div(double a, double b) 
{          
    long double result;           
    result = (long double) (a) /  (long double) (b);        
    return result;  
}



////////// Acc Math Func - U001 /////////////////////////
long long Facto_N (unsigned char n) 
{   
    long long FactoN = 1;      
    if(n <= 0) //1> Stopping condition check;   
    {     
        return (FactoN); //Return on stopping condition;   
    }
    else   
    {   
        FactoN = n * FactoN(n-1); //2> Recurssive call;   
    }    
    return (FactoN) //Final return;
}  

//////////////////////////////////////////////////
//||||||||||||||||||||||||||||||||||||||||||||||
//\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\



