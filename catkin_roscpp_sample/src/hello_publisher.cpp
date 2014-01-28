#include <ros/ros.h>

#include <std_msgs/String.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "hello_publisher");
  ros::NodeHandle n;
  ros::Publisher pub = n.advertise<std_msgs::String>("/hello_world", 100);
  ros::Rate rate(100.0);
  while (ros::ok()) {
    std_msgs::String msg;
    msg.data = "Hello World!!";
    pub.publish(msg);
    rate.sleep();
  }
}
