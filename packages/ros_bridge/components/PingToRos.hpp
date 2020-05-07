#pragma once

#include <string>

#include "std_msgs/String.h"
#include "packages/ros_bridge/components/ProtoToRosConverter.hpp"

namespace isaac {
namespace ros_bridge {
class PingToRos : public ProtoToRosConverter<PingProto, std_msgs::String>{
    public:
    bool protoToRos(PingProto::Reader reader, std_msgs::String& ros_message) override;
};

}
}

ISAAC_ALICE_REGISTER_CODELET(isaac::ros_bridge::PingToRos);