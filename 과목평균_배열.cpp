#include <stdio.h>

int main() {
	int score[21][10] = {0};
	int sum[21] = {0};
	int ave[21] = {0};
	int subjectSum[10] = {0};
	float subjectAve[10]; 
	
	int studentCount = 0;
	int subjectCount = 0;
	
	printf("학생 수 입력 : ");
	scanf("%d", &studentCount);
	printf("과목 수 입력 : ");
	scanf("%d", &subjectCount);
	for(int index = 0; index <studentCount; index++) {
		printf("Koposw%d 학생의 점수 %d개를 차례대로 입력하세요: ", index+1, subjectCount);
		for(int index2 = 0; index2 < subjectCount; index2++) {
			scanf("%d", &score[index][index2]);
		}
		
	}
	for(int index = 0; index <studentCount; index++) {
		int sum = 0;
		float ave = 0;
		for(int index2 = 0; index2 < subjectCount; index2++) {
			sum += score[index][index2];
			subjectSum[index2] += score[index][index2];
		}
		ave = sum / (float)subjectCount;
		printf("Koposw%d 학생의 총점 %d, 평균 %5.2f\n", index+1, sum, ave);
	}
	for(int index = 0; index < subjectCount; index++) {
		subjectAve[index] = subjectSum[index] / (float)studentCount;
		printf("과목%d 평균 %5.2f\n", index+1, subjectAve[index]);
	}
	return 0;
}

