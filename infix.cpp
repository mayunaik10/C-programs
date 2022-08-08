#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#define size 50
int top=-1;
char s[size];
void push(char ch)
{
s[++top]=ch;
}
char pop()
{
return(s[top--]);
}
int prec(char ch)
{
 switch(ch)
{
case '#':return 0;
break;
case '(':return 1;
break;
case '-': case'+':return 2;
break;
case '/': case '*': return 3;
break;
}
}
int main()
{
char ch,elem,ix[50],px[50];
int i=0,k=0;
push('#');
printf("enter infix expression:");
gets(ix);
while((ch=ix[i++])!='\0')
{
if(isalnum(ch))
px[k++]=ch;
else if (ch=='(')
push(ch);
else if(ch==')')
{
while(s[top]!='(')
px[k++]=pop();
elem=pop();
}
else
{
if(s[top]=='#')
push(ch);
else if( s[top]=='(')
push(ch);
else if(prec(ch)>prec(s[top]))
push(ch);
else
px[k++]=pop();
}
}
while(s[top]!='#')
px[k++]=pop();
px[k]='\0';
printf("postfix expression :");
puts(px);
return 0;
}
