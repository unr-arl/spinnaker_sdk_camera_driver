// Header to include most of the standard headers
// required by rest of the application

// Spinnaker SDK
#include "SpinGenApi/SpinnakerGenApi.h"
#include "Spinnaker.h"

// OpenCV
#include <cv.h>
#include <opencv2/highgui/highgui.hpp>

// ROS
#include <ros/ros.h>
// #include <image_transport/image_transport.h>
#include "sensor_msgs/CameraInfo.h"
#include "sensor_msgs/Image.h"
#include <cv_bridge/cv_bridge.h>

// Standard Libs
#include <cstdlib>
#include <errno.h> // for errno
#include <fstream>
#include <iostream>
#include <limits.h> // for INT_MAX
#include <math.h>
#include <omp.h>
#include <signal.h>
#include <sstream>
#include <stdio.h>
#include <stdlib.h> // for strtol
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>

#include <boost/thread.hpp>
#include <queue>

#include <pwd.h>
#include <sys/types.h>
#include <unistd.h>

// gflags
//#include <gflags/gflags.h>

// glog
//#include <glog/logging.h>

// yaml-cpp
//#include <yaml-cpp/yaml.h>

// gperftools
// #include <gperftools/profiler.h>
