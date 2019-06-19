#include<iostream>
#include <string>
#include <cstream>
using namespace std;


string a[1000][1000];
class Table{
	protected:
		int row;
		int column;
	public:
		
		
		Table(){
			row=1;
			column=1;
		}
		
		
		
		void show(){
			for(int m=0;m<row;m++){
				for(int t=0;t<column;t++){
					cout<<a[m][t]<<" ";
				}cout<<"\n";
			}
		cout<<"\n";	
		}
		void addRow(){
			row=row++;
		}
		
		
		
		void addColumn(){
			column=column++;
		}
		
		
		
		Table(int x,int y){
			row=x;
			column=y;
		}
		
		
		
		void set(int x,int y,int z){
			stringstream ss;
			string u;
			ss<<z;
			ss>>u;
			a[x][y]=u;
		}
		
		
		
		void set(int x,int y,string z){
			a[x][y]=z;
		}
		
		
		
		void delRow(int m){
			 for(int j=m;j<row-1;j++){
			 	string *p=a[t];
			 	*a[t]=*a[t+1];
				*a[t+1]=*p;
			 }
			 row--;
		} 
		
		
		
		void delColumn(int m){
			for(int t=m;t<column-1;t++){
				for(int k=0;k<row-1;k++){
					string p=a[j][k];
					a[t][k]=a[j][k+1];
					a[t][k+1]=p;
				}
			}
			column¡ª;
		}
};




int main() {

  Table tb;
  
  tb.show();

  tb.addRow();

  tb.show();

  tb.addColumn();

  tb.show();

  Table tb1(5,5);

  tb1.show();

  tb1.set(1,1,30);

  tb1.set(2,2,"hello");

  tb1.show();

  tb1.delRow(1);

  tb1.show();

  tb1.delColumn(1);

  tb1.show();

  return 0;
