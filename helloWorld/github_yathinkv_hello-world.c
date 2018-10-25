lude<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
int top=-1;
char infix[10],postfix[10],s[10];
int pre(char sym)
{
	 if(sym=='^')
		    return(6);
	  else if(sym=='*'||sym=='/')
		     return(4);
	   else if(sym=='+'||sym=='-')
		      return(2);
	    else
		       return(0);
}
int isop(char sym)
{
	 if(sym=='+'||sym=='-'||sym=='*'||sym=='/'||sym=='^')
		    return(1);
	  else
		     return(0);
}
void strrev(char a[])
{
	 char t;
	  int i=0,j=(strlen(a)-1);
	   while(i<j)
		    {
			      t=a[i];
			        a[i]=a[j];
				  a[j]=t;
				    i++;
				      j--;
				       }
}
void push(char a)
{
	 if(top==(max-1))
		   printf("\nStack overflow");
	  else
		    s[++top]=a;
}
char pop()
{
	 if(top==-1)
		   printf("\nStack underflow");
	  else
		    return(s[top--]);
}
void convert(char infix[])
{
	 int i,j=0;
	  char ch,x;
	   push('(');
	    strrev(infix);
	     strcat(infix,')');
	      for(i=0;infix[i]!='\0';i++)
		       {
			         ch=infix[i];
				   if(ch=='(')
					       push('(');
				     else if(isdigit(ch)||isalpha(ch))
					              {
							      	x=pop();
									while((isop(x))&&(pre(x)>=pre(ch)))
											  {
												  	   postfix[j++]=x;
													                x=pop();
																  }
										push(x);
											push(ch);
											         }
				       else
					           {
							        x=pop();
								     while(x!='(')
									            {
											            postfix[j++]=x;
												            x=pop();
													           }
								         }
				        }
	      strrev(postfix);
}
void main()
{
	 printf("\nEnter the expression  ");
	  gets(infix);
	   convert(infix);
	    printf("\n The postfix expression is ");
//	     puts(postfix);
}

