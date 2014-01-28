#include <ros/ros.h>

#include <std_msgs/String.h>

void subscribeCallback(const std_msgs::String::ConstPtr &msg) {
  ROS_INFO_STREAM("subscriber get message: " << msg->data);
}

int main(int argc, char** argv) {
  ros::init(argc, argv, "hello_subscriber");
  ros::NodeHandle n;
  ros::Subscriber sub = n.subscribe("/hello_world", 100, subscribeCallback);
  ros::spin();
}
