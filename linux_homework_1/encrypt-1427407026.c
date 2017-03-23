#include <stdio.h>
char change(char c);

int main(int argc, char **argv)
{
    FILE *fp;   
    char c;
    int n=argc;
    if(n==1){
    char s[1024];
    fgets(s,1024,stdin);
    printf("\n");
    int i=0;
    while(s[i]!='\0'){
	c=change(s[i]);
	putchar(c);
	i++;
    }
    return 0;
    }
    
    for(int i=1;i<n;i++){   
    if((fp=fopen(argv[i],"r"))==NULL) {  
        printf("cannot open file/n"); return 0;  
    }   
    while((c=fgetc(fp))!=EOF){
	c=change(c);
	printf("%c",c);
	
    }  
    fclose(fp); 
    }
    return 0;
}

char change(char c){
	if(c>96&&c<122||c>64&&c<90){
        c=c+1;return c;
        }
        if(c==122){
        c=97;return c;
	}
        if(c==90){
        c=65;return c;
	}
}










