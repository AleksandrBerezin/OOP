#include <iostream>
#include "SmartphoneProducers.h"

using namespace std;

void DemoSmartphoneProducers_2_8_4()
{
	SmartphoneProducers producer = Samsung;

	SmartphoneProducers producers[6];
	producers[0] = Samsung;
	producers[1] = Apple;
	producers[2] = Xiaomi;
	producers[3] = Samsung;
	producers[4] = Nokia;
	producers[5] = Huawei;
}