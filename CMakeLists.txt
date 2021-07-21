cmake_minimum_required( VERSION 3.1 )

project( ClientService )

find_package(gRPC CONFIG REQUIRED)

find_package( Protobuf REQUIRED )
list(REMOVE_ITEM gRPC_LIBRARIES grpc_cronet)

add_executable( client src/ClientService.cpp proto/UnityAPI.grpc.pb.cc proto/UnityAPI.pb.cc)

target_link_libraries( client PRIVATE gRPC::grpc++ gRPC::grpc++_reflection gRPC::gpr gRPC::grpc gRPC::grpc++ protobuf::libprotoc protobuf::libprotobuf protobuf::libprotobuf-lite )