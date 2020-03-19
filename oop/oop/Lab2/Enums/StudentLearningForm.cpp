#include <iostream>
#include "StudentLearningForm.h"

using namespace std;

void DemoStudentLearningForm_2_8_4()
{
	StudentLearningForm learningForm = FullTime;

	StudentLearningForm learningForms[6];
	learningForms[0] = FullTime;
	learningForms[1] = Evening;
	learningForms[2] = PartTime;
	learningForms[3] = Distance;
	learningForms[4] = FullTime;
	learningForms[5] = PartTime;
}