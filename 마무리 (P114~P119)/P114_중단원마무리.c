//1023*768, 24bit, bmp file only
#include<stdio.h>
#define W 1024
#define H 768
#define head 54
int i,j; 

FILE *fp1, *fp2; // ���� ó���� ����ü ���� 
unsigned char R[H][W], G[H][W], B[H][W]; // ���� ������ ����� 

void bmp_open(char s[20], char t[20])
{
    fp1=fopen(s,"rb"); // ���̳ʸ� �б� ���� ���� ���� 
    fp2=fopen(t,"wb"); // ���̳ʸ� �б� ���� ���� �б� 
}

void bmp_close()
{
    fclose(fp1);
    fclose(fp2);
}

void head_copy()
{
    unsigned char t;
    for(i=0;i<head;i++)
    {
        t=getc(fp1); // getc(): 1byte�� �Է¹޴� �Լ� 
        putc(t,fp2); // putc(): 1byte�� Ǯ���ϴ� �Լ� 
    }
}

void bmp_read()
{
    for(i=0;i<H;i++)
        for(j=0;j<W;j++)
        {
            B[i][j]=getc(fp1);
            G[i][j]=getc(fp1);
            R[i][j]=getc(fp1);
        }
}

void bmp_write()
{
    for(i=0;i<H;i++)
        for(j=0;j<W;j++)
        {
            B[i][j]=getc(fp1);
            G[i][j]=getc(fp1);
            R[i][j]=getc(fp1);
        }
}
void filter(float r, float g, float b)
{
    for(i=1;i<H;i++)
        for(j=0;j<W;j++)
        {
            B[i][j]=(int)(B[i][j]*b/100);
            G[i][j]=(int)(G[i][j]*g/100);
            R[i][j]=(int)(R[i][j]*r/100);
        }
    for(i=0;i<H;i++)
        for(j=0;j<W;j++)
        {
            putc(B[i][j], fp2);
            putc(G[i][j], fp2);
            putc(R[i][j], fp2);
        }
} 

int main()
{
    bmp_open("rgb.bmp", "filter.bmp");
    head_copy();
    bmp_read();
    
    filter(50, 50, 50); //r, g ,b percentage
    bmp_write();
    bmp_close();
}
