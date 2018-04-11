#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 1024

int mstrcmp(char *str1, char *str2){			// 미완성
	int result=0, int count = 0;

	do{
		result=str1-str2;
	}

	while(result==0 && str1[count]!='\0'){
	}

	return result;
}

int main(){
	char *input1=(char *)malloc(sizeof(char)*size);
	char *input2=(char *)malloc(sizeof(char)*size);
	printf("두 개의 문자열 입력 : ");
	scanf("%s %s", input1, input2);
	int cmp=mstrcmp(input1, input2);
	return 0;
}

/*

char * strcat(char *str1, char *str2){
	char *result;
	int size1, size2, count;

	// str1 사이즈 구하기
	size1=strlen(str1);

	// str2 사이즈 구하기
	size2=strlen(str2);

	// result 생성하기
	result=(char *)malloc(sizeof(char)*(size1 + size2)+1);		// (size1 + size) 뒤에 +1하는 이유는 NULL 값을 넣기 위함

	// str1 붙이기
	for(count=0; str1[count]!='\0'; count++){
		result[count]=str1[count];
	}

	// str2 붙이기
	for(count=0; str2[count]!='\0'; count++){
		result[count+size1]=str2[count];		// size1의 값 뒤에 넣어야하기 떄문에 result[count+size]를 해준것
	}
	result[count+size1]='\0';			// size 값 뒤에 NULL 값을 넣어 쓰레기 값 삭제

	return result;
}

int main(){

	char *input1=(char *)malloc(sizeof(char)*size);
	char *input2=(char *)malloc(sizeof(char)*size);
	char *result;
	printf("문자열 2개 입력 : ");
	scanf("%s %s", input1, input2);
	result=strcat(input1, input2);
	printf("%\n\n%s\n\n", result);
	free(input1);
	free(input2);
	free(result);
	return 0;
}

*/

/*

void q(char *src, char *crs){
	int num=0;
	for(; src[num]!='\0'; num++){
		crs[num]=src[num];
	}
	crs[num]='\0';
}

int main(){
	char *src="Black Watch!";
	char *crs=(char *)malloc(sizeof(char)*1024);

	q(src,crs);
	printf("%s\n", crs);

	system("pause");

	return 0;
}

*/

/*

void change(char *arr, char *save, int count){

	for(count=0; arr[count]!='\0'; count++){
		save[count]=arr[count]-32;
	}
	save[count]='\0';
}

void reset(char *arr, char *save, int count){

	for(count=0; arr[count]!='\0'; count++){
		arr[count]='\0';
		save[count]='\0';
	}
}

void rechange(char *arr, char *save, int count){

	for(count=0; arr[count]!='\0'; count++){
		save[count]=arr[count]+32;
	}
	save[count]='\0';
}

int main(){

	char *arr=(char *)malloc(sizeof(char)*1024);
	char *save=(char *)malloc(sizeof(char)*1024);
	int count=0;
	printf("소문자 입력 : ");
	scanf("%s", arr);

	change(arr, save, count);
	printf("\n\n%s\n\n", save);

	reset(arr, save, count);

	printf("대문자 입력 : ");
	scanf("\n\n\n%s", arr);

	rechange(arr, save, count);

	printf("\n\n%s\n\n", save);

}

*/
