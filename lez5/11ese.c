#include <stdio.h>
int main(void)
{
	int n ;
        printf("Enter the vale of n \n");
        scanf("%d",&n);
        double A [n][n];
        double B [n][n];
        double C [n][n];
        double temp;
        int oper ;
        double r ;
        int veroA= 0;
        int veroB= 0;
        int veroR= 0;
        do
        {
            
          printf("1. Inserisci operando A. \n2. Inserisci operando B.\n3. Inserisci operando scalare r. \n4. Visualizza A, B ed r.\n5. Trasposta di A.\n6. rA.\n7. A+B.\n8. AB.\n9. Scambia A e B.\n10. Esci.\n");
          scanf("%d", &oper);
          
          switch(oper)
          {
          	case 1 :
        		for (int i=0; i<n; i++)
			{
			    for (int j=0; j<n; j++)
			    {
		    		printf("enter a number \n");
		    		scanf("%lf",&A[i][j]);
			    } 
			}
			veroA= 1;
			break;
        	case 2 :
        		for (int i=0; i<n; i++)
			{
			    for (int j=0; j<n; j++)
			    {
		    		printf("enter a number \n");
		    		scanf("%lf",&B[i][j]);
			    } 
			}
			veroB=1;
			break;
        	case 3:
          		printf("enter a number R\n");
		    	scanf("%lf",&r);
		    	veroR= 1;
		    	break;
		
		case 4:
			if(veroA ==1 && veroB == 1 && veroR==1)
			{
			 for (int i=0; i<n; i++)
			 {
			    for (int j=0; j<n; j++)
			    {
		    		printf(" A = %lf \t", A[i][j]);
			    } 
			    printf(" \n");
			 }
			 for (int i=0; i<n; i++)
			 {
			    for (int j=0; j<n; j++)
			    {
		    		printf(" B = %lf \t", B[i][j]);
			    } 
			    printf(" \n");
			 }
			 printf(" r = %lf \n", r);
			}
			else
			{
				printf("1. Inserisci operando A. \n2. Inserisci operando B.\n3. Inserisci operando scalare r. \n4. Visualizza A, B ed r.\n5. Trasposta di A.\n6. rA.\n7. A+B.\n8. AB.\n9. Scambia A e B.\n10. Esci.\n");
          			scanf("%d", &oper);
			}
			break;
		case 5:
			if(veroA == 1)
			{
			 for (int i=0; i<n; i++)
			 {
			    for (int j=0; j<n; j++)
			    {
		    		printf("%lf \t", A[j][i]);
			    } 
			    printf("\n");
			 }
			}
			else
			{
				printf("1. Inserisci operando A. \n2. Inserisci operando B.\n3. Inserisci operando scalare r. \n4. Visualizza A, B ed r.\n5. Trasposta di A.\n6. rA.\n7. A+B.\n8. AB.\n9. Scambia A e B.\n10. Esci.\n");
          			scanf("%d", &oper);
			}
			break;
		case 6:
			if(veroA == 1 && veroR ==1)
			{
			 for (int i=0; i<n; i++)
			 {
			    for (int j=0; j<n; j++)
			    {
		    		printf(" %lf * %lf = %lf \n",r, A[i][j], r*A[i][j]);
		    		
			    } 
			 }
			}
			else
			{
				printf("1. Inserisci operando A. \n 2. Inserisci operando B.\n3. Inserisci operando scalare r. \n 4. Visualizza A, B ed r.\n5. Trasposta di A.\n6. rA.\n7. A+B.\n8. AB.\n9. Scambia A e B.\n10. Esci.");
          			scanf("%d", &oper);
			}
			break;
		case 7:
			if(veroA ==1 && veroB == 1)
			{
			 for (int i=0; i<n; i++)
			 {
			    for (int j=0; j<n; j++)
			    {
		    		printf(" %lf + %lf = %lf \n",A[i][j],B[i][j], A[i][j]+B[i][j]);
		    		
			    } 
			 }
			}
			else
			{
				printf("1. Inserisci operando A. \n2. Inserisci operando B.\n3. Inserisci operando scalare r. \n4. Visualizza A, B ed r.\n5. Trasposta di A.\n6. rA.\n7. A+B.\n8. AB.\n9. Scambia A e B.\n10. Esci.\n");
          			scanf("%d", &oper);
			}
			break;
		case 8:
			if(veroA ==1 && veroB == 1)
			{
			  printf("\nCalcoliamo il prodotto \n");
 				for (int i=0;i<n;i++) 
 				{
        			   for(int j=0;j<n;j++) 
        			   {
            			      C[i][j]=0;
            			      for(int k=0;k<n;k++)
            			      {
                			C[i][j]=C[i][j]+A[i][k]*B[k][j];
                		      }
                		      printf(" A = %lf \t", C[i][j]);
			  	      printf(" \n");
    				   }	
    			}
			}
			else
			{
				printf("1. Inserisci operando A. \n2. Inserisci operando B.\n3. Inserisci operando scalare r. \n4. Visualizza A, B ed r.\n5. Trasposta di A.\n6. rA.\n7. A+B.\n8. AB.\n9. Scambia A e B.\n10. Esci.\n");
          			scanf("%d", &oper);
			}
			break;
		case 9:
			if(veroA ==1 && veroB == 1)
			{
			 for (int i=0; i<n; i++)
			 {
			    for (int j=0; j<n; j++)
			    {
		    		temp = A[i][j];
		    		A[i][j] = B[i][j];
		    		B[i][j] = temp;
		    		
			    } 
			 }
			}
			else
			{
				printf("1. Inserisci operando A. \n2. Inserisci operando B.\n3. Inserisci operando scalare r. \n4. Visualizza A, B ed r.\n5. Trasposta di A.\n6. rA.\n7. A+B.\n8. AB.\n9. Scambia A e B.\n10. Esci.\n");
          			scanf("%d", &oper);
			}
			break;
		case 10:
			printf("Esci");
			break;
		default:
			printf("1. Inserisci operando A. \n2. Inserisci operando B.\n3. Inserisci operando scalare r. \n4. Visualizza A, B ed r.\n5. Trasposta di A.\n6. rA.\n7. A+B.\n8. AB.\n9. Scambia A e B.\n10. Esci.\n");
          		scanf("%d", &oper);
          		break;
			
          }
          
          

        }while(oper != 10);
}

