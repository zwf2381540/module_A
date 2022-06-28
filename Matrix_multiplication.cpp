#include<iostream>
using namespace std;
const int N=105;
int R1[N][N],R2[N][N],ans[N][N];
 
int main(){
    int m,p,n;
    cin>>m>>p>>n;
    for(int i=0;i<m;i++){//录入第一个矩阵
    	for(int j=0;j<p;j++){
    		cin>>R1[i][j];
		}
	}
	for(int i=0;i<p;i++){//录入第二个矩阵
		for(int j=0;j<n;j++){
			cin>>R2[i][j];
		}
	}
	for(int i=0;i<m;i++){//两个矩阵相乘
		for(int j=0;j<n;j++){
			for(int k=0;k<p;k++){
				ans[i][j] += R1[i][k]*R2[k][j];
			}
		}
	}
	for(int i=0;i<m;i++){//输出最终矩阵
		for(int j=0;j<n;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
