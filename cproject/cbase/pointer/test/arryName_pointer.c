/*
 * arryName_pointer.c
 *
 *  Created on: Oct 11, 2024
 *      Author: lirongyaoper
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>
//*****************************************************************************************
#include <stdio.h>
int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	printf("&arr[0]  = %p\n",&arr[0]);
	printf("arr = %p\n",arr);
	return 0;
}

//*****************************************************************************************
//int main(){
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr     = %p\n",arr);
//	printf("&arr     = %p\n", &arr);
//	return 0;
//}


//*****************************************************************************************
//int main(){
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("&arr[0]   =%p\n",&arr[0]);//=0x7ffc59ed69b0
//	printf("&arr[0]+1 =%p\n",&arr[0]+1);//=0x7ffc59ed69b4
//	printf("arr       =%p\n",arr);//=0x7ffc59ed69b0
//	printf("arr+1     =%p\n",arr+1);//=0x7ffc59ed69b4
//	printf("&arr      =%p\n",&arr); //=0x7ffc59ed69b0
//	printf("&arr+1    =%p\n",&arr+1); //=0x7ffc59ed69d8
//	return 0;
//
//
//}
//*****************************************************************************************
//int main(){
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;
//	for(i = 0;i<sz; i++){
//		//scanf("%d",&arr[i]);
//		scanf("%d", p+i);
//	}
//	for(i = 0; i < sz; i++){
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}
//*****************************************************************************************
//int main(){
//	int arr[10] = {0};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int* p = arr;  //int* p = &arr[0]
//	for(i = 0;i<sz; i++){
//		scanf("%d", p+i);
//	}
//	for(i = 0; i < sz; i++){
//		printf("%d ",p[i]);
//	}
//	return 0;
//}
//*****************************************************************************************
//  结论：          *(p+i) = p[i]
//                 本质上p[i] 是等价于 *(p+i)。

//同理arr[i] 应该等价于 *(arr+i)，数组元素的访问在编译器处理的时候，也是转换成⾸元素的地址+偏移量求出元素的地址，
//然后解引⽤来访问的


//arr[i] == *(arr+i) == p[i]  == *(p+i)



//*****************************************************************************************
//void test(int arr[]){
//	//数组名是数组⾸元素的地址；那么在数组传参
//	//的时候，传递的是数组名，也就是说本质上数组传参传递的是数组⾸元素的地址。
//	int sz2 = sizeof(arr)/sizeof(arr[0]);
//	printf("sz2 = %d\n",sz2);
//}
//
//int  main(){
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz1 = sizeof(arr)/sizeof(arr[0]);
//	printf("sz1 = %d\n",sz1);
//	int arr_size = sizeof(arr);
//	printf("arr_size = %d\n",arr_size);
//	test(arr);
//	return 0;
//}

//*****************************************************************************************
//*****************************************************************************************
//*****************************************************************************************
//*****************************************************************************************
//*****************************************************************************************
//*****************************************************************************************
//*****************************************************************************************
