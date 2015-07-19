/*
 * pwm.h
 *
 * Created: 18.09.2014 23:31:40
 *  Author: Erik
 */ 

#ifndef PWM_H_
#define PWM_H_

class PWM {

public:
	void setDutyCycle ( char rate);
	void pwmInit(void);
	
	};


#endif /* PWM_H_ */