#include <stdio.h>

int main()
{
    int i,j,hei,wid;
    printf("Enter the height ");
    scanf("%d",&hei);
    printf("Enter the width ");
    scanf("%d",&wid);
    for(i=1;i<=hei;i++){
        for(j=1;j<=wid;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei,wid;
    printf("Enter the height ");
    scanf("%d",&hei);
    printf("Enter the width ");
    scanf("%d",&wid);
    for(i=1;i<=hei;i++){
        for(j=1;j<=wid;j++){
            if(i==1 || i==hei || j==1 || j==wid ){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei,wid;
    printf("Enter the height ");
    scanf("%d",&hei);
    printf("Enter the width ");
    scanf("%d",&wid);
    for(i=1;i<=hei;i++){
        for(j=1;j<=wid;j++){
            if(i==1 || i==hei || j==1 || j==wid || i==j || j==(hei-i+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enter the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<=hei-i;j++){
            printf(" ");
        }
        for(j=1;j<=hei;j++){
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}


/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enter the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<=hei-i;j++){
            printf(" ");
        }
        for(j=1;j<=hei;j++){
            if(i==1 || i==hei || j==1 || j==hei){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        
        printf("\n");
    }

    return 0;
}


/**--------------------------------------------------------------**/

#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enter the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=hei;j++){
            printf("*");
        }
        
        
        printf("\n");
    }

    return 0;
}


/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enter the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(j=1;j<=hei;j++){
            if(i==1 || i==hei || j==1 || j==hei){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        
        printf("\n");
    }

    return 0;
}


/**--------------------------------------------------------------**/

#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enter the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        
        
        printf("\n");
    }

    return 0;
}



/**--------------------------------------------------------------**/

#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enter the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<=i;j++){
            if(j==1 || j==i || i==hei){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        
        printf("\n");
    }

    return 0;
}


/**--------------------------------------------------------------**/

#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enter the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<=hei-i;j++){
            printf(" ");
        }
        for(j=hei-i;j<hei;j++){
            if(j==hei-i || j==hei-1 || i==hei){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        
        
        printf("\n");
    }

    return 0;
}



/**--------------------------------------------------------------**/

#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enetr the height ");
    scanf("%d",&hei);
    for(i=0;i<=hei;i++){
        for(j=hei-i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}




/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enetr the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=hei-i+1;j>0;j--){
            if(i==1 || j==hei-i+1 || j==1){
                printf("*");    
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }

    return 0;
}



/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enetr the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<i;j++){
            printf(" ");
            
        }
        for(j=hei-i+1;j>0;j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enetr the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<i;j++){
            printf(" ");
            
        }
        for(j=hei-i+1;j>0;j--){
            if(i==1 || j==1 || j==hei-i+1){
             
               printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}




/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enetr the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<=hei-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=2;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}




/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enetr the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<=hei-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i==hei ||j==1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(j=2;j<=i;j++){
            if(i==hei || j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}



/**--------------------------------------------------------------**/


#include <stdio.h>

int main()
{
    int i,j,hei;
    printf("Enetr the height ");
    scanf("%d",&hei);
    for(i=1;i<=hei;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=1;j<=(2*hei)-(2*i-1);j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}


/*------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int i,j,rows;
    printf("Enter no of rows ");
    scanf("%d",&rows);
    for(i=1;i<=2*rows-1;i++){
        for(j=1;j<=2*rows-1;j++){
            if(i==rows || j==rows){
                printf("+");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

/*--------------------------------------------------------------------*/

#include <stdio.h>

int main()
{
    int i,j,rows;
    printf("Enter no of rows ");
    scanf("%d",&rows);
    for(i=1;i<=2*rows-1;i++){
        for(j=1;j<=2*rows-1;j++){
            if(i==j || j==2*rows-i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

/*-------------------HEART-----------------------------------------------*/

#include <stdio.h>

int main()
{
    int i,j,rows;
    printf("Enter the no. of rows ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
        if(i>2){
            for(j=1;j<=2*i-1;j++){
                printf("*");
            }
            for(j=2*i+(rows-i);j<=3*rows-i;j++){
                printf(" ");
            }
            for(j=2*i+1;j<=4*i-1;j++){
                printf("*");
            }
        }
        else{
            printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=2*rows;i++){
        for(j=1;j<i;j++){
            printf(" ");
        }
        for(j=i;j<=4*rows-i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

