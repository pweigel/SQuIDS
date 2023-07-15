switch (dim){
case 2:
switch (i){
case 1:
switch (j){
case 2:
#include "RotationSU2_12.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 3:
switch (i){
case 1:
switch (j){
case 2:
#include "RotationSU3_12.txt"
break;
case 3:
#include "RotationSU3_13.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 2:
switch (j){
case 3:
#include "RotationSU3_23.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 4:
switch (i){
case 1:
switch (j){
case 2:
#include "RotationSU4_12.txt"
break;
case 3:
#include "RotationSU4_13.txt"
break;
case 4:
#include "RotationSU4_14.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 2:
switch (j){
case 3:
#include "RotationSU4_23.txt"
break;
case 4:
#include "RotationSU4_24.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 3:
switch (j){
case 4:
#include "RotationSU4_34.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 5:
switch (i){
case 1:
switch (j){
case 2:
#include "RotationSU5_12.txt"
break;
case 3:
#include "RotationSU5_13.txt"
break;
case 4:
#include "RotationSU5_14.txt"
break;
case 5:
#include "RotationSU5_15.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 2:
switch (j){
case 3:
#include "RotationSU5_23.txt"
break;
case 4:
#include "RotationSU5_24.txt"
break;
case 5:
#include "RotationSU5_25.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 3:
switch (j){
case 4:
#include "RotationSU5_34.txt"
break;
case 5:
#include "RotationSU5_35.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 4:
switch (j){
case 5:
#include "RotationSU5_45.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 6:
switch (i){
case 1:
switch (j){
case 2:
#include "RotationSU6_12.txt"
break;
case 3:
#include "RotationSU6_13.txt"
break;
case 4:
#include "RotationSU6_14.txt"
break;
case 5:
#include "RotationSU6_15.txt"
break;
case 6:
#include "RotationSU6_16.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 2:
switch (j){
case 3:
#include "RotationSU6_23.txt"
break;
case 4:
#include "RotationSU6_24.txt"
break;
case 5:
#include "RotationSU6_25.txt"
break;
case 6:
#include "RotationSU6_26.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 3:
switch (j){
case 4:
#include "RotationSU6_34.txt"
break;
case 5:
#include "RotationSU6_35.txt"
break;
case 6:
#include "RotationSU6_36.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 4:
switch (j){
case 5:
#include "RotationSU6_45.txt"
break;
case 6:
#include "RotationSU6_46.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 5:
switch (j){
case 6:
#include "RotationSU6_56.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 7:
switch (i){
case 1:
switch (j){
case 2:
#include "RotationSU7_12.txt"
break;
case 3:
#include "RotationSU7_13.txt"
break;
case 4:
#include "RotationSU7_14.txt"
break;
case 5:
#include "RotationSU7_15.txt"
break;
case 6:
#include "RotationSU7_16.txt"
break;
case 7:
#include "RotationSU7_17.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 2:
switch (j){
case 3:
#include "RotationSU7_23.txt"
break;
case 4:
#include "RotationSU7_24.txt"
break;
case 5:
#include "RotationSU7_25.txt"
break;
case 6:
#include "RotationSU7_26.txt"
break;
case 7:
#include "RotationSU7_27.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 3:
switch (j){
case 4:
#include "RotationSU7_34.txt"
break;
case 5:
#include "RotationSU7_35.txt"
break;
case 6:
#include "RotationSU7_36.txt"
break;
case 7:
#include "RotationSU7_37.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 4:
switch (j){
case 5:
#include "RotationSU7_45.txt"
break;
case 6:
#include "RotationSU7_46.txt"
break;
case 7:
#include "RotationSU7_47.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 5:
switch (j){
case 6:
#include "RotationSU7_56.txt"
break;
case 7:
#include "RotationSU7_57.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 6:
switch (j){
case 7:
#include "RotationSU7_67.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 8:
switch (i){
case 1:
switch (j){
case 2:
#include "RotationSU8_12.txt"
break;
case 3:
#include "RotationSU8_13.txt"
break;
case 4:
#include "RotationSU8_14.txt"
break;
case 5:
#include "RotationSU8_15.txt"
break;
case 6:
#include "RotationSU8_16.txt"
break;
case 7:
#include "RotationSU8_17.txt"
break;
case 8:
#include "RotationSU8_18.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 2:
switch (j){
case 3:
#include "RotationSU8_23.txt"
break;
case 4:
#include "RotationSU8_24.txt"
break;
case 5:
#include "RotationSU8_25.txt"
break;
case 6:
#include "RotationSU8_26.txt"
break;
case 7:
#include "RotationSU8_27.txt"
break;
case 8:
#include "RotationSU8_28.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 3:
switch (j){
case 4:
#include "RotationSU8_34.txt"
break;
case 5:
#include "RotationSU8_35.txt"
break;
case 6:
#include "RotationSU8_36.txt"
break;
case 7:
#include "RotationSU8_37.txt"
break;
case 8:
#include "RotationSU8_38.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 4:
switch (j){
case 5:
#include "RotationSU8_45.txt"
break;
case 6:
#include "RotationSU8_46.txt"
break;
case 7:
#include "RotationSU8_47.txt"
break;
case 8:
#include "RotationSU8_48.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 5:
switch (j){
case 6:
#include "RotationSU8_56.txt"
break;
case 7:
#include "RotationSU8_57.txt"
break;
case 8:
#include "RotationSU8_58.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 6:
switch (j){
case 7:
#include "RotationSU8_67.txt"
break;
case 8:
#include "RotationSU8_68.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 7:
switch (j){
case 8:
#include "RotationSU8_78.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 9:
switch (i){
case 1:
switch (j){
case 2:
#include "RotationSU9_12.txt"
break;
case 3:
#include "RotationSU9_13.txt"
break;
case 4:
#include "RotationSU9_14.txt"
break;
case 5:
#include "RotationSU9_15.txt"
break;
case 6:
#include "RotationSU9_16.txt"
break;
case 7:
#include "RotationSU9_17.txt"
break;
case 8:
#include "RotationSU9_18.txt"
break;
case 9:
#include "RotationSU9_19.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 2:
switch (j){
case 3:
#include "RotationSU9_23.txt"
break;
case 4:
#include "RotationSU9_24.txt"
break;
case 5:
#include "RotationSU9_25.txt"
break;
case 6:
#include "RotationSU9_26.txt"
break;
case 7:
#include "RotationSU9_27.txt"
break;
case 8:
#include "RotationSU9_28.txt"
break;
case 9:
#include "RotationSU9_29.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 3:
switch (j){
case 4:
#include "RotationSU9_34.txt"
break;
case 5:
#include "RotationSU9_35.txt"
break;
case 6:
#include "RotationSU9_36.txt"
break;
case 7:
#include "RotationSU9_37.txt"
break;
case 8:
#include "RotationSU9_38.txt"
break;
case 9:
#include "RotationSU9_39.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 4:
switch (j){
case 5:
#include "RotationSU9_45.txt"
break;
case 6:
#include "RotationSU9_46.txt"
break;
case 7:
#include "RotationSU9_47.txt"
break;
case 8:
#include "RotationSU9_48.txt"
break;
case 9:
#include "RotationSU9_49.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 5:
switch (j){
case 6:
#include "RotationSU9_56.txt"
break;
case 7:
#include "RotationSU9_57.txt"
break;
case 8:
#include "RotationSU9_58.txt"
break;
case 9:
#include "RotationSU9_59.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 6:
switch (j){
case 7:
#include "RotationSU9_67.txt"
break;
case 8:
#include "RotationSU9_68.txt"
break;
case 9:
#include "RotationSU9_69.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 7:
switch (j){
case 8:
#include "RotationSU9_78.txt"
break;
case 9:
#include "RotationSU9_79.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
case 8:
switch (j){
case 9:
#include "RotationSU9_89.txt"
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
break;
default: 
throw std::runtime_error("SUN_rotation error. \n");
break;
}
