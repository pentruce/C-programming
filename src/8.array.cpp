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
	
	//�Է�	
	printf("���� �� �Է� :");
	scanf("%d", &subjectCount);
	printf("�л� �� �Է� :");
	scanf("%d", &studentCount);
	
	for (int index = 0; index < studentCount; index++) {
		printf("%02d�л��� ���� %d���� ���ʴ�� �Է��ϼ��� :  ", index+1, subjectCount);
			for(int indexTwo = 0; indexTwo < subjectCount; indexTwo++) {
				scanf("%d", &score[index][indexTwo]); 
			}
		}
	
	//��� 
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
	
	//��� 
	printf("\n");
	for(int index = 0; index < studentCount; index++){
		printf("%02d �л��� ���� ���� %d, ��� %.2f\n",index+1, subjectSum[index], subjectAve[index]);
	}
	for(int index = 0; index < subjectCount; index++) {
		printf(" ���� ��� %.2f", average[index]);
	}
	}

