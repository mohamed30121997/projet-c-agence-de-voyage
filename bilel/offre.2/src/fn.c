#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>
#include "fn.h"
int verifier(struct user a)
{
struct user b;
int k=0;
int r;
FILE*f;
f=fopen("user.txt","r");

while(fscanf(f,"%s %s %d ",b.login,b.password,&b.role)!=EOF)

{ 
     if ( strcmp(b.login,a.login)==0 && strcmp(a.password,b.password)==0) 
           
        r=b.role;


}
return r;
}

