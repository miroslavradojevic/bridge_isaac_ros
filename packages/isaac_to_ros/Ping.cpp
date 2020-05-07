#include "Ping.hpp"

namespace isaac {
namespace isaac_to_ros {

void Ping::start(){
    tickPeriodically();
}

void Ping::tick() {
    std::string tick_message = "Ping::tick() message=" + get_message();
    LOG_INFO(tick_message.c_str());
    
    // publish the message using ping_channel channel
    auto proto_builder = tx_ping_channel().initProto();
    proto_builder.setMessage(get_message()); // write data directly to proto
    tx_ping_channel().publish();
}

void Ping::stop() {}

}
}
