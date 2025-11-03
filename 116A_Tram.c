#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int stopage[1000][2];              //2d array lagbe  
    for(int i=0;i<n;i++)
       {
         scanf("%d %d",&stopage[i][0],&stopage[i][1]);      //every row te 2ta element input
       }                                                    //alada alada indexing krte hbe

    int pass[1000];                //every stopage e kyta kre remaining passenger thktise
    pass[0]=stopage[0][1];        //1st stopage er passenger ble dite hbe age e

    for(int i=1;i<n;i++)
       {
         pass[i]=pass[i-1]+stopage[i][1]-stopage[i][0];    //main point=kto passenger thktise
       }
         
                                //individual stopage er max passenger ber kra(bhalo kre dekh)
    int i=0;                        
    for(;i<n-1;i++)
       { 
        int j=0;            //prttek bar j=0 theke compare hbe,i er sth         
         while(j<n)
           {
             if(pass[i]>pass[j])
                {
                   j++;                 //while er condition akhn e
                }
             else if(pass[i]==pass[j])       //j=0;jkhn hbe tkhn ai condition diye continue; krabo j ke
                { 
                    j++;                //dekh
                    continue;           //dekh
                }   
              else 
                {
                
                    break;           //dekh
                }  
           }
          if(j==(n))           //dekh
           {
              goto capacity;       //dekh   
           }   
       }   


     capacity:
     printf("%d\n",pass[i]);  
       
}