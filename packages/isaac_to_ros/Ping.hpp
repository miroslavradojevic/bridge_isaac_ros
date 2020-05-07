#pragma once
#include "engine/alice/alice_codelet.hpp"
#include "messages/messages.hpp"

namespace isaac {
namespace isaac_to_ros {

class Ping : public isaac::alice::Codelet {
    public:
    void start() override;
    void tick() override;
    void stop() override;
    ISAAC_PARAM(std::string, message, "Pinging...");
    ISAAC_PROTO_TX(PingProto, ping_channel); // make sure that it is publishing a message
};
}
}
ISAAC_ALICE_REGISTER_CODELET(isaac::isaac_to_ros::Ping);
