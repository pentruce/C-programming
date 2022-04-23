#include <stdio.h>

int main() {

	int score[21][10] = {0};
	int sum[21] = {0};
	int ave[21] = {0};
	int subjectSum[10] = {0};
	int studentCount;
	int subjectCount;
	float subjectAve[10];
	float average[21] = {0};
	
	//입력	
	printf("과목 수 입력 :");
	scanf("%d", &subjectCount);
	printf("학생 수 입력 :");
	scanf("%d", &studentCount);
	
	for (int index = 0; index < studentCount; index++) {
		printf("%02d학생의 점수 %d개를 차례대로 입력하세요 :  ", index+1, subjectCount);
			for(int indexTwo = 0; indexTwo < subjectCount; indexTwo++) {
				scanf("%d", &score[index][indexTwo]); 
			}
		}
	
	//계산 
	for (int index = 0; index < studentCount; index++) {  
		for(int indexTwo= 0; indexTwo < subjectCount; indexTwo++) {
			sum[index] += score[index][indexTwo];
			subjectSum[indexTwo] += score[index][indexTwo];
		}
		average[index] = sum[index]/ (float)subjectCount;
	}
	for(int index = 0;index<subjectCount;index++) {
		subjectAve[index] = subjectSum[index] / (float)studentCount;
	}
	
	//출력 
	printf("\n");
	for(int index = 0; index < studentCount; index++){
		printf("%02d 학생의 과목 총점 %d, 평균 %.2f\n",index+1, subjectSum[index], subjectAve[index]);
	}
	for(int index = 0; index < subjectCount; index++) {
		printf(" 과목 평균 %.2f", average[index]);
	}
	}

