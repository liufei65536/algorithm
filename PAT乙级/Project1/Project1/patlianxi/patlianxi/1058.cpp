#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
struct question
{
	int scores;
	int n_choices;
	int n_right;
	char answers[5];
};

void get_answers(int M_questions,question* questions) {
	for (int i = 0; i < M_questions; i++) {
		//分数，选项个数，正确选项个数
		cin >> questions[i].scores >> questions[i].n_choices
			>> questions[i].n_right;
		//正确选项
		for (int j = 0; j < questions[i].n_right; j++)
			scanf(" %c", &questions[i].answers[j]);
	}
}
int main()
{
	//N个学生，M个题目
	int N_students, M_questions;
	cin >> N_students >> M_questions;

	//录入M个问题的答案
	question questions[101];
	get_answers(M_questions, questions);


	int wrong[101] = { 0 };	//题目错的次数
	int student_score[1001] = { 0 };//学生得分

	question  student; //学生试卷
	for (int i = 0; i < N_students; i++) {
		scanf("\n");
		for (int j = 0; j < M_questions; j++) {
			bool isWrong = false;
			if (j != 0) scanf(" ");
			scanf("(%d", &student.n_right);
			for (int k = 0; k < student.n_right; k++) {
				scanf(" %c", &student.answers[k]);
				if (student.answers[k] != questions[j].answers[k] ||
					student.n_right != questions[j].n_right)
					isWrong = true;
			}
			scanf(")");
			if (isWrong)
				wrong[j]++;
			if (!isWrong && student.n_choices == student.n_choices)
				student_score[i] += questions[j].scores;
		}
	}
	for (int i = 0; i < N_students; i++)
		cout << student_score[i] << endl;

	int maxWrong = 0;
	for (int i = 0; i <M_questions ; i++) {
		if (wrong[i] > maxWrong) {
			maxWrong = wrong[i];
		}
	}
	if (maxWrong == 0)
		printf("Too simple");
	else {
		printf("%d", maxWrong);
		for (int i = 0; i < M_questions; i++) {
			if (wrong[i] == maxWrong) {
				printf(" %d", i + 1);
			}
		}
	}
	return 0;
}