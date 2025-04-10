#ifndef COMMAND_NAME_H
#define COMMAND_NAME_H

enum command_Name {
  ///////////control liquid//////////
  Feed_oil = 1, // #013004* 3 sec
  Feed_egg = 2, // #023005*
  Feed_sauce = 3,//#033006*
  Stepper_Feed_Liquid = 4, //#040004*  #043007*
  Set_Home_Stepper = 5, //#050005* stop home / #050016* going home
  Stop_Emer = 6,//#060006*
  ////////// control stirring+washing///////
  Servo_Put_Ingredient = 10,  //#0a1002* home //#0a0405*
  Control_Slide = 11,         //#0b0002* home   //#0b3005* max or #0b280c*
  Control_Lid = 12,        //#0c0003* home //#0c1671* down a lid  
  Control_Serve = 13,      //#0d0004* // #0d074f* max// #0d0408* minimum
  Rotate_Pan = 14,         //#0e500A* //#0e600B*
  Stirring_Forward = 15,   //#0f2552*  // #100001* for stop
  Stirring_Backward = 16,  //#10255D*  // #100001* for stop
  Valve_Washing = 17,  //#110001* #110012* #110023*
  Home_Panning = 18,   //#120003*
  Control_Watering = 19,  //#131004*
  Control_Dishwashing = 20, //#141005*
  Control_Conveyor_Box = 31, //#1f2520* box1 to raw1 /#1f3600* box2 to raw1 // #1f602F* box1 to noodle/ #1f710F* box2 to noodle
  Control_Conveyor_Box_reverse = 32, //#20292F* #204006*    box1 to shirmp = #20270b* box2 to shrimp = #20165e*/////Last box2 to shrimp #20135b*
  Home_Conveyor_Box = 33,  //#210003*
  Control_Conveyor_Box_relative = 34,
  Control_Conveyor_Box_relative_reverse = 35,

  //////////Controller Noodle//////////
  Feed_Noodle_0 = 21,  //#150006*
  Feed_Noodle_1 = 22,
  Feed_Noodle_2 = 23,
  Feed_Noodle_3 = 24,
  Control_Conveyer_Noodle = 25,  //#19001B* #19000A*
  Stop_Noodle = 26,
  Remaining_Noodle = 27,
  Test_sensor_prox_front = 28,  //#1c0004*
  Test_sensor_prox_back = 29,   //#1d0005*
  // Test_run_dc_push = 30,
  // Test_run_dc_home = 31,
  // test = 32,

  ////////////Control Rawmat////////////
  Feed_Rawmat_1 = 40,   //#28010B* for 100 g //#2800129* for 10 g  //#28005F*
  Servo_Hopper_1 = 41,  //#290904* for 90 degree close(home) //#291400* for 140 degree open(pour ingredient) //#291602* for 160 (put out)
  Test_Loadcell_Remain_1 = 42,
  Unlock_Solinoid_1 = 43,
  Know_Weight_Starting_1 = 44,
  Know_Weight_Add_On_1 = 45,
  Unknow_Weight_1 = 46,
  Unknow_Weight_Set_Limit_1 = 47,
  Check_Status_Remain_1 = 48,

  //////////////////////////////////////////
  Stepper_Shrimp_Vertical = 51, //#33600C*
  Stepper_Shrimp_Horizontal = 52, // #341008*
  Feed_Shrimp_1 = 53, //#350019*
  Feed_Shrimp_2 = 54, //#36001A*
  Reset_Shrimp_Vertical = 55, //#37000A*
  Reset_Shrimp_Horizontal = 56,//#38000B*
  Remain_Shrimp = 57,
  Servo_Shrimp = 58,
};
#endif
