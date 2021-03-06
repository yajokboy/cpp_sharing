# Copyright 2018 gRPC authors.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# cmake build file for C++ helloworld example.
# Assumes protobuf and gRPC have been installed using cmake.
# See cmake_externalproject/CMakeLists.txt for all-in-one cmake build
# that automatically builds all the dependencies before building helloworld.

cmake_minimum_required(VERSION 3.5.1)

project(ClientService)

include(/usr/src/grpc/examples/cpp/cmake/common.cmake)

# Proto file
get_filename_component(hw_proto "./proto/UnityAPI.proto" ABSOLUTE)
get_filename_component(hw_proto_path "${hw_proto}" PATH)

## Generated sources
set(hw_proto_srcs "./proto/UnityAPI.pb.cc")
set(hw_proto_hdrs "./proto/UnityAPI.pb.h")
set(hw_grpc_srcs "./proto/UnityAPI.grpc.pb.cc")
set(hw_grpc_hdrs "./proto/UnityAPI.grpc.pb.h")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#add_custom_command(
#      OUTPUT "${hw_proto_srcs}" "${hw_proto_hdrs}" "${hw_grpc_srcs}" "${hw_grpc_hdrs}"
#      COMMAND ${_PROTOBUF_PROTOC}
#      ARGS --grpc_out "${CMAKE_CURRENT_BINARY_DIR}"
#        --cpp_out "${CMAKE_CURRENT_BINARY_DIR}"
#        -I "${hw_proto_path}"
#        --plugin=protoc-gen-grpc="${_GRPC_CPP_PLUGIN_EXECUTABLE}"
#        "${hw_proto}"
#      DEPENDS "${hw_proto}")

## Include generated *.pb.h files
include_directories("../../proto")

# hw_grpc_proto
add_library(hw_grpc_proto
  ${hw_grpc_srcs}
  ${hw_grpc_hdrs}
  ${hw_proto_srcs}
  ${hw_proto_hdrs})
target_link_libraries(hw_grpc_proto
  ${_REFLECTION}
  ${_GRPC_GRPCPP}
  ${_PROTOBUF_LIBPROTOBUF})

# Targets greeter_[async_](client|server)
foreach(_target ClientService)
  add_executable(${_target} "./src/${_target}.cpp")
  target_link_libraries(${_target}
    hw_grpc_proto
    ${_REFLECTION}
    ${_GRPC_GRPCPP}
    ${_PROTOBUF_LIBPROTOBUF})
endforeach()
