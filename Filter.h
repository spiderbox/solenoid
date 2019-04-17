#ifndef Filter_h
#define Filter_h

#include "Arduino.h"

class Filter {

public:

Filter();

bool detect_edge(uint8_t pin,unsigned long range_millis);
int get_count();
void reset_count();

private:

bool _edge_detected;
uint8_t _input;
uint8_t _current_edge;
uint8_t _last_edge;
unsigned long _debounce_clock;
unsigned int _count; 

};

#endif
