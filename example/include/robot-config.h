using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor leftMotor;
extern motor rightMotor;
extern controller Controller1;
extern encoder EncoderA;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );