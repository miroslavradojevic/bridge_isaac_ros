load("//engine/build:isaac.bzl", "isaac_app", "isaac_cc_module")

isaac_app(
     name = "ping",
     data = ["ping_data.json"],
     modules = ["//packages/isaac_to_ros:ping_components",
                "//packages/ros_bridge:ros_bridge"
     ]
)

isaac_cc_module(
  name = "ping_components",
  srcs = ["Ping.cpp"],
  hdrs = ["Ping.hpp"],
)