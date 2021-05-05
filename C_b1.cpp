#include <iostream>

using namespace std;

//lay do dai chuoi
int size(char a[])
{
	int n=0;
	char *p=a;
	while(*p!='\0'){
		n++;
		p++;
	}
	return n;
}

//dao nguoc
void reverse(char a[])
{
	char *p=a;
	int n = size(a);
	for(int i=n-1;i>=0;i--){
		cout << *(p+i);
	}
}

void xuat(char a[])
{
	int n=size(a);
	for(int i=0;i<n;i++){
		cout << a[i];
	}
}

//xoa ki tu
void delete_char(char a[], char c)
{
	int n=size(a);
	char *p=a;
	for(int i=0;i<n;i++){
			if(*(p+i)==c){
				for(int j=i;j<n;j++){
				*(p+j) = *(p+j+1);
			}
			i--;
			n--;
		}
	}
	xuat(a);
}

//don phai
void pad_right(char a[],int _n)
{
	int n = size(a);
	char *p = a;
	if(n>=_n){
		xuat(a);
	}
	else
	{
		for(int i=n;i<_n;i++)
		{
			*(p+i) = '_';
			*(p+_n)='\0';
			n++;
		}
		xuat(a);
	 }
}

//don trai
void pad_left(char a[],int _n)
{
	int n = size(a);
	char *p = a;
	if(n>=_n) xuat(a);
	else
	{
		int k = _n-n;
		int i = _n-1;
		while(n>=0)
		{
			*(p+i) = *(p+n-1);
		     n--;
		     i--;
		}
	for(int i=0;i<k;i++){
		*(p+i) = '_';
	}
	for(int i=0;i<_n;i++){
		cout << *(p+i);
	}
    }
}

int main()
{
	char s[100];
	char c;
	int n;
	cout << "Nhap chuoi: ";
	cin.getline(s,100);
	reverse(s);
	cout << "\nNhap ki tu can xoa: "; cin >> c;
	delete_char(s, c);
	cout << "\nNhap do dai muon don: ";cin >> n;
	pad_right(s,n);
	cout << "\n";
	pad_left(s,n);
}
