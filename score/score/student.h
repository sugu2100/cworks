//students.h

typedef struct _Score {  //����ü ����
	int math;
	int eng;
	double avg;
} Score;  //����ü �Ǹ�

typedef struct _Students {
	int number;
	char name[20];
	Score score;     //Score �ڷ����� ����
} Students;