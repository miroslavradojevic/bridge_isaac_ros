#include "PingToRos.hpp"

namespace isaac {
namespace ros_bridge {

bool PingToRos::protoToRos(PingProto::Reader reader, std_msgs::String& ros_message){
    // Read data from Isaac type
    const std::string ping_message = reader.getMessage();

    // Populate data for ROS type
    ros_message.data = ping_message;
    return true;
}

}
}