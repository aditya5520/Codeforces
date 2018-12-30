#include<stdio.h>

int main(){
				int arr[101];
				int n;
				scanf("%d", &n);
				
				int i;
				for(i=0; i<n; i++){
								scanf("%d", &arr[i]);
				}
				
				int mi = 0, ma = 0;
				for(i=0; i<n; i++){
								if(arr[mi] >= arr[i]){
												mi = i;
								}
								
								if(arr[ma] < arr[i]){
												ma = i;
								}
				}
				
				int ans = ma + n - 1 - mi;
				
				if(mi < ma) ans--;
				
				printf("%d\n", ans);
}