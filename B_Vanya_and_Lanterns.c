#include<stdio.h>
float cmp(const void*x,const void *y)
   {
     return *(float *)x-*(float *)y;  
   }

int main()
{
    int n,l;
    scanf("%d %d",&n,&l);

    int lit[n];
    for(int i=0;i<n;i++)
       {
         scanf("%d",&lit[i]);
       }

    qsort(lit,n,sizeof(float),cmp);       //sort krte hbe pashapashi lit gulor difference ber krte 

    float max_rad=0.0;                       //double e hisheb                            
    for(int i=0;i<n-1;i++)                        //ak loop e gap+max rad berhcce 
       {
         float gap=(float)lit[i+1]-(float)lit[i];       //main fact

         if(max_rad<gap)
            max_rad = gap;
       }
          

    max_rad/=2.0;                         //rad ber krte 2 diye division
    float left_edge_gap=(float)lit[0]-0;                //ai dui left/right edge er condition o count krte hbe
    float right_edge_gap=(float)l-(float)lit[n-1];
    
    float x = max_rad; //again max ber
     if (left_edge_gap > x)
          x = left_edge_gap;
     if (right_edge_gap > x)
          x = right_edge_gap;
       
    printf("%.10f\n",x);                 //.10 diye point er por 10 ghor prjntw print ashbe
                                           //%lf format specifier
}