#include <iostream>
using namespace std;

void showVector(int * , int );
void showMatrice(int ** , int , int );

int main()
{
	int * vector, dimension;
	dimension = 10;
	vector = new int[dimension];
	for(int i=0; i<dimension; i++)
	{
		vector[i]=i+1;
	}
	showVector(vector, dimension);
	
	int ** matrice, line, column;
	line = 3, column = 4;
	
	matrice = new int*[line];
	
	for(int i=0; i<line; i++)
	{
		matrice[i] = new int[column];
	}
	for(int i=0; i<line; i++)
	{
		for(int j=0; j<column; j++)
		{
			matrice[i][j]=i*j;
		}
	}
	showMatrice(matrice, line, column);
	cout<<endl;
}

void showVector(int * vector, int dimension)
{
	cout<<"Le vecteur est : ";
	for(int i=0; i<dimension; i++)
	{
		cout<<vector[i]<<" ";
	}
}

void showMatrice(int ** matrice, int line, int column)
{
	cout<<endl<<endl<<"Les elements du matrice sont : "<<endl;
	
	for(int i=0; i<line; i++)
	{
		cout<<endl<<"\t";
		for(int j=0; j<column; j++)
		{
			cout<<matrice[i][j]<<" ";
		}
	}
}
