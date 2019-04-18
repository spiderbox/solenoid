#include "Arduino.h"
#include "Solenoid.h"

Solenoid::Solenoid() {

}

void Solenoid::on_pwm(uint8_t pin, uint32_t pwm_value) {
//analogWrite(pin,pwm_value);
ledcWrite(pin,pwm_value);
}

void Solenoid::off_pwm(uint8_t pin) {
//analogWrite(pin,0);
ledcWrite(pin,0);
}

void Solenoid::on(uint8_t pin) {
digitalWrite(pin,LOW);
}

void Solenoid::off(uint8_t pin) {
digitalWrite(pin,HIGH);
}

void Solenoid::on_pwm_reduce(uint8_t pin, uint32_t pwm_value, uint32_t pwm_reduce_value, unsigned long millis_hold) {

if(delay_state.wait_until(millis_hold) == true) {
//analogWrite(pin,pwm_reduce_value);
ledcWrite(pin,pwm_reduce_value);
} else {
//analogWrite(pin,pwm_value);
ledcWrite(pin,pwm_value);
}

}
