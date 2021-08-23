#include <iostream>
#include <string>
#include <grpcpp/grpcpp.h>
#include "../proto/UnityAPI.pb.h"
#include "../proto/UnityAPI.grpc.pb.h"
#include <sstream>
#include <chrono>
#include <thread>
#include <iomanip>

using namespace std;
using namespace std::chrono_literals;
using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;
using UnityAPI::UnityAPIService;

string ip_port = "192.168.1.63:30055";
string ip_NodeJS = "192.168.1.63:30056";

void setFrontLowLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLowLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontLowLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLowLightControl(&context, request, &reply);
}

void  getFrontLowLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLowLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontLowLightReply reply;
    ClientContext context;


    Status status = serviceStub.FrontLowLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Low Light: ON";
    }
    else {
        cout << "Front Low Light: OFF";
    }
}

void setFrontHighLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontHighLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontHighLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontHighLightControl(&context, request, &reply);
}

void getFrontHighLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontHighLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontHighLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontHighLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front High Light: ON";
    }
    else {
        cout << "Front High Light: OFF";
    }
}

void setRearLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearLightReply reply;
    ClientContext context;

    Status status = serviceStub.RearLightControl(&context, request, &reply);
}

void  getRearLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearLightReply reply;
    ClientContext context;

    Status status = serviceStub.RearLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Light: ON";
    }
    else {
        cout << "Rear Light: OFF";
    }
}

void setFrontDaytimeLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontDaytimeLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontDaytimeLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontDaytimeLightControl(&context, request, &reply);
}

void  getFrontDaytimeLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontDaytimeLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontDaytimeLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontDaytimeLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Daytime Light: ON";
    }
    else {
        cout << "Front Daytime Light: OFF";
    }
}

void setBrakeLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::BrakeLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::BrakeLightReply reply;
    ClientContext context;

    Status status = serviceStub.BrakeLightControl(&context, request, &reply);
}

void  getBrakeLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::BrakeLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::BrakeLightReply reply;
    ClientContext context;

    Status status = serviceStub.BrakeLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Brake Light: ON";
    }
    else {
        cout << "Brake Light: OFF";
    }
}

void setReverseLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::ReverseLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::ReverseLightReply reply;
    ClientContext context;

    Status status = serviceStub.ReverseLightControl(&context, request, &reply);
}

void  getReverseLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::ReverseLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::ReverseLightReply reply;
    ClientContext context;

    Status status = serviceStub.ReverseLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Reverse Light: ON";
    }
    else {
        cout << "Reverse Light: OFF";
    }
}

void setFrontFogLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontFogLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontFogLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontFogLightControl(&context, request, &reply);
}

void  getFrontFogLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontFogLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontFogLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontFogLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Fog Light: ON";
    }
    else {
        cout << "Front Fog Light: OFF";
    }
}

void setRearFogLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearFogLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearFogLightReply reply;
    ClientContext context;

    Status status = serviceStub.RearFogLightControl(&context, request, &reply);
}

void  getRearFogLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearFogLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearFogLightReply reply;
    ClientContext context;

    Status status = serviceStub.RearFogLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Fog Light: ON";
    }
    else {
        cout << "Rear Fog Light: OFF";
    }
}

void setClearanceLamp(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::ClearanceLampRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::ClearanceLampReply reply;
    ClientContext context;

    Status status = serviceStub.ClearanceLampControl(&context, request, &reply);
}

void  getClearanceLamp() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::ClearanceLampRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::ClearanceLampReply reply;
    ClientContext context;

    Status status = serviceStub.ClearanceLampControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Clearance Lamp: ON";
    }
    else {
        cout << "Clearance Lamp: OFF";
    }
}

void setFrontLeftBlinkerLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftBlinkerLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontLeftBlinkerLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftBlinkerLightControl(&context, request, &reply);
}

void  getFrontLeftBlinkerLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftBlinkerLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontLeftBlinkerLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftBlinkerLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Left Blinker Light: ON";
    }
    else {
        cout << "Front Left Blinker Light: OFF";
    }
}

void setFrontRightBlinkerLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightBlinkerLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontRightBlinkerLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightBlinkerLightControl(&context, request, &reply);
}

void  getFrontRightBlinkerLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightBlinkerLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontRightBlinkerLightReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightBlinkerLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Right Blinker Light: ON";
    }
    else {
        cout << "Front Right Blinker Light: OFF";
    }
}

void  setRearLeftBlinkerLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftBlinkerLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearLeftBlinkerLightReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftBlinkerLightControl(&context, request, &reply);
}

void  getRearLeftBlinkerLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftBlinkerLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearLeftBlinkerLightReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftBlinkerLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Left Blinker Light: ON";
    }
    else {
        cout << "Rear Left Blinker Light: OFF";
    }
}

void setRearRightBlinkerLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightBlinkerLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearRightBlinkerLightReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightBlinkerLightControl(&context, request, &reply);
}

void  getRearRightBlinkerLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightBlinkerLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearRightBlinkerLightReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightBlinkerLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Right Blinker Light: ON";
    }
    else {
        cout << "Rear Right Blinker Light: OFF";
    }
}

void setFrontWiper(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontWiperRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontWiperReply reply;
    ClientContext context;

    Status status = serviceStub.FrontWiperControl(&context, request, &reply);
}

void  getFrontWiper() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontWiperRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontWiperReply reply;
    ClientContext context;

    Status status = serviceStub.FrontWiperControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Wiper: ON";
    }
    else {
        cout << "Front Wiper: OFF";
    }
}

void setRearWiper(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearWiperRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearWiperReply reply;
    ClientContext context;

    Status status = serviceStub.RearWiperControl(&context, request, &reply);
}

void  getRearWiper() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearWiperRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearWiperReply reply;
    ClientContext context;

    Status status = serviceStub.RearWiperControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Wiper: ON";
    }
    else {
        cout << "Rear Wiper: OFF";
    }
}

string setLeftSideMirror(double val) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::LeftSideMirrorRequest request;
    request.set_setmode(true);
    request.set_angle(val);

    UnityAPI::LeftSideMirrorReply reply;
    ClientContext context;

    Status status = serviceStub.LeftSideMirrorControl(&context, request, &reply);
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << reply.angle();
    return stream.str();
}

void  getLeftSideMirror() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::LeftSideMirrorRequest request;
    request.set_setmode(false);
    request.set_angle(0);

    UnityAPI::LeftSideMirrorReply reply;
    ClientContext context;

    Status status = serviceStub.LeftSideMirrorControl(&context, request, &reply);

    cout << "Left Side Mirror: " << reply.angle() << "\370";
}

string setRightSideMirror(double val) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RightSideMirrorRequest request;
    request.set_setmode(true);
    request.set_angle(val);

    UnityAPI::RightSideMirrorReply reply;
    ClientContext context;

    Status status = serviceStub.RightSideMirrorControl(&context, request, &reply);
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << reply.angle();
    return stream.str();
}

void  getRightSideMirror() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RightSideMirrorRequest request;
    request.set_setmode(false);
    request.set_angle(0);

    UnityAPI::RightSideMirrorReply reply;
    ClientContext context;

    Status status = serviceStub.RightSideMirrorControl(&context, request, &reply);

    cout << "Right Side Mirror: " << reply.angle() << "\370";
}

string setFrontRightDoor(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightDoorRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontRightDoorReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightDoorControl(&context, request, &reply);
    if (reply.status()) {
        return "1";
    }
    else {
        return "0";
    }
}

void  getFrontRightDoor() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightDoorRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontRightDoorReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightDoorControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Right Door: OPEN";
    }
    else {
        cout << "Front Right Door: CLOSE";
    }
}

string setFrontLeftDoor(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftDoorRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontLeftDoorReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftDoorControl(&context, request, &reply);
    if (reply.status()) {
        return "1";
    }
    else {
        return "0";
    }
}

void  getFrontLeftDoor() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftDoorRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontLeftDoorReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftDoorControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Left Door: OPEN";
    }
    else {
        cout << "Front Left Door: CLOSE";
    }
}

void setRearRightDoor(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightDoorRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearRightDoorReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightDoorControl(&context, request, &reply);
}

void  getRearRightDoor() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightDoorRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearRightDoorReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightDoorControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Right Door: OPEN";
    }
    else {
        cout << "Rear Right Door: CLOSE";
    }
}

void setRearLeftDoor(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftDoorRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearLeftDoorReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftDoorControl(&context, request, &reply);
}

void  getRearLeftDoor() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftDoorRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearLeftDoorReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftDoorControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Left Door: OPEN";
    }
    else {
        cout << "Rear Left Door: CLOSE";
    }
}

void setTrunk(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::TrunkRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::TrunkReply reply;
    ClientContext context;

    Status status = serviceStub.TrunkControl(&context, request, &reply);
}

void  getTrunk() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::TrunkRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::TrunkReply reply;
    ClientContext context;

    Status status = serviceStub.TrunkControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Trunk: OPEN";
    }
    else {
        cout << "Trunk: CLOSE";
    }
}

void setSunRoof(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::SunRoofRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::SunRoofReply reply;
    ClientContext context;

    Status status = serviceStub.SunRoofControl(&context, request, &reply);
}

void  getSunRoof() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::SunRoofRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::SunRoofReply reply;
    ClientContext context;

    Status status = serviceStub.SunRoofControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Sun Roof: OPEN";
    }
    else {
        cout << "Sun Roof: CLOSE";
    }
}

void setFrontRightPowerWindows(double val) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightPowerWindowsRequest request;
    request.set_setmode(true);
    request.set_highlevel(val);

    UnityAPI::FrontRightPowerWindowsReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightPowerWindowsControl(&context, request, &reply);
}

void  getFrontRightPowerWindows() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightPowerWindowsRequest request;
    request.set_setmode(false);
    request.set_highlevel(0);

    UnityAPI::FrontRightPowerWindowsReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightPowerWindowsControl(&context, request, &reply);

    cout << "Front Right Power Windows: " << reply.highlevel() << "%";
}

void setFrontLeftPowerWindows(double val) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftPowerWindowsRequest request;
    request.set_setmode(true);
    request.set_highlevel(val);

    UnityAPI::FrontLeftPowerWindowsReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftPowerWindowsControl(&context, request, &reply);
}

void  getFrontLeftPowerWindows() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftPowerWindowsRequest request;
    request.set_setmode(false);
    request.set_highlevel(0);

    UnityAPI::FrontLeftPowerWindowsReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftPowerWindowsControl(&context, request, &reply);

    cout << "Front Left Power Windows: " << reply.highlevel() << "%";
}

void setRearRightPowerWindows(double val) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightPowerWindowsRequest request;
    request.set_setmode(true);
    request.set_highlevel(val);

    UnityAPI::RearRightPowerWindowsReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightPowerWindowsControl(&context, request, &reply);
}

void  getRearRightPowerWindows() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightPowerWindowsRequest request;
    request.set_setmode(false);
    request.set_highlevel(0);

    UnityAPI::RearRightPowerWindowsReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightPowerWindowsControl(&context, request, &reply);

    cout << "Rear Right Power Windows: " << reply.highlevel() << "%";
}

void setRearLeftPowerWindows(double val) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftPowerWindowsRequest request;
    request.set_setmode(true);
    request.set_highlevel(val);

    UnityAPI::RearLeftPowerWindowsReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftPowerWindowsControl(&context, request, &reply);
}

void  getRearLeftPowerWindows() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftPowerWindowsRequest request;
    request.set_setmode(false);
    request.set_highlevel(0);

    UnityAPI::RearLeftPowerWindowsReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftPowerWindowsControl(&context, request, &reply);

    cout << "Rear Left Power Windows: " << reply.highlevel() << "%";
}

void setSideMirrorSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::SideMirrorSwitchRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::SideMirrorSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.SideMirrorSwitchControl(&context, request, &reply);
}

void  getSideMirrorSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::SideMirrorSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::SideMirrorSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.SideMirrorSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Side Mirror Switch: ON";
    }
    else {
        cout << "Side Mirror Switch: OFF";
    }
}

void setInstrumentLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::InstrumentLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::InstrumentLightReply reply;
    ClientContext context;

    Status status = serviceStub.InstrumentLightControl(&context, request, &reply);
}

void  getInstrumentLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::InstrumentLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::InstrumentLightReply reply;
    ClientContext context;

    Status status = serviceStub.InstrumentLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Instrument Light: ON";
    }
    else {
        cout << "Instrument Light: OFF";
    }
}

void setPassengerRoomDomeLight(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::PassgenerRoomDomeLightRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::PassgenerRoomDomeLightReply reply;
    ClientContext context;

    Status status = serviceStub.PassgenerRoomDomeLightControl(&context, request, &reply);
}

void  getPassengerRoomDomeLight() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::PassgenerRoomDomeLightRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::PassgenerRoomDomeLightReply reply;
    ClientContext context;

    Status status = serviceStub.PassgenerRoomDomeLightControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Passgener Room Dome Light: ON";
    }
    else {
        cout << "Passgener Room Dome Light: OFF";
    }
}

void setReadingLightDriverSide(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::ReadingLightDriverSideRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::ReadingLightDriverSideReply reply;
    ClientContext context;

    Status status = serviceStub.ReadingLightDriverSideControl(&context, request, &reply);
}

void  getReadingLightDriverSide() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::ReadingLightDriverSideRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::ReadingLightDriverSideReply reply;
    ClientContext context;

    Status status = serviceStub.ReadingLightDriverSideControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Reading Light Driver Side: ON";
    }
    else {
        cout << "Reading Light Driver Side: OFF";
    }
}

void setReadingLightPassengerSide(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::ReadingLightPassgenerSideRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::ReadingLightPassgenerSideReply reply;
    ClientContext context;

    Status status = serviceStub.ReadingLightPassgenerSideControl(&context, request, &reply);
}

void  getReadingLightPassengerSide() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::ReadingLightPassgenerSideRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::ReadingLightPassgenerSideReply reply;
    ClientContext context;

    Status status = serviceStub.ReadingLightPassgenerSideControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Reading Light Passenger Side: ON";
    }
    else {
        cout << "Reading Light Passenger Side: OFF";
    }
}

void setFrontRightPowerWindowsSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightPowerWindowsSwitchRequest request;
    
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontRightPowerWindowsSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightPowerWindowsSwitchControl(&context, request, &reply);
}

void  getFrontRightPowerWindowsSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightPowerWindowsSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontRightPowerWindowsSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightPowerWindowsSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Right Power Windows Switch: UP";
    }
    else {
        cout << "Front Right Power Windows Switch: DOWN";
    }
}

void setFrontLeftPowerWindowsSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftPowerWindowsSwitchRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontLeftPowerWindowsSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftPowerWindowsSwitchControl(&context, request, &reply);
}

void  getFrontLeftPowerWindowsSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftPowerWindowsSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontLeftPowerWindowsSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftPowerWindowsSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Left Power Windows Switch: UP";
    }
    else {
        cout << "Front Left Power Windows Switch: DOWN";
    }
}

void setRearRightPowerWindowsSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightPowerWindowsSwitchRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearRightPowerWindowsSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightPowerWindowsSwitchControl(&context, request, &reply);
}

void  getRearRightPowerWindowsSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightPowerWindowsSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearRightPowerWindowsSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightPowerWindowsSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Right Power Windows Switch: UP";
    }
    else {
        cout << "Rear Right Power Windows Switch: DOWN";
    }
}

void setRearLeftPowerWindowsSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftPowerWindowsSwitchRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearLeftPowerWindowsSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftPowerWindowsSwitchControl(&context, request, &reply);
}

void  getRearLeftPowerWindowsSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftPowerWindowsSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearLeftPowerWindowsSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftPowerWindowsSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Left Power Windows Switch: UP";
    }
    else {
        cout << "Rear Left Power Windows Switch: DOWN";
    }
}

void setHorn(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::HornRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::HornReply reply;
    ClientContext context;

    Status status = serviceStub.HornControl(&context, request, &reply);
}

void  getHorn() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::HornRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::HornReply reply;
    ClientContext context;

    Status status = serviceStub.HornControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Horn: ON";
    }
    else {
        cout << "Horn: OFF";
    }
}

void setBuzzer(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::BuzzerRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::BuzzerReply reply;
    ClientContext context;

    Status status = serviceStub.BuzzerControl(&context, request, &reply);
}

void  getBuzzer() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::BuzzerRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::BuzzerReply reply;
    ClientContext context;

    Status status = serviceStub.BuzzerControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Buzzer: ON";
    }
    else {
        cout << "Buzzer: OFF";
    }
}

string setAirConditioner(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::AirConditionerRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::AirConditionerReply reply;
    ClientContext context;

    Status status = serviceStub.AirConditionerControl(&context, request, &reply);
    if (reply.status()) {
        return "1";
    }
    else {
        return "0";
    }
}

void  getAirConditioner() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::AirConditionerRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::AirConditionerReply reply;
    ClientContext context;

    Status status = serviceStub.AirConditionerControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Air Conditioner: ON";
    }
    else {
        cout << "Air Conditioner: OFF";
    }
}

string setAirConditionerTemperature(double val) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::AirCondTemperatureRequest request;
    request.set_setmode(true);
    request.set_temperature(val);

    UnityAPI::AirCondTemperatureReply reply;
    ClientContext context;

    Status status = serviceStub.AirConditionerTemperatureControl(&context, request, &reply);
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << reply.temperature();
    return stream.str();
}

void  getAirConditionerTemperature() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::AirCondTemperatureRequest request;
    request.set_setmode(false);
    request.set_temperature(0);

    UnityAPI::AirCondTemperatureReply reply;
    ClientContext context;

    Status status = serviceStub.AirConditionerTemperatureControl(&context, request, &reply);

    cout << "Air Cond Temperature: " << reply.temperature() << "\370" <<"C";
}

string setAirConditionerFanSpeed(int val) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::AirConditionerFanSpeedRequest request;
    request.set_setmode(true);
    request.set_fanspeed(val);

    UnityAPI::AirConditionerFanSpeedReply reply;
    ClientContext context;

    Status status = serviceStub.AirConditionerFanSpeedControl(&context, request, &reply);
    return std::to_string(reply.fanspeed());
}

void  getAirConditionerFanSpeed() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::AirConditionerFanSpeedRequest request;
    request.set_setmode(false);
    request.set_fanspeed(0);

    UnityAPI::AirConditionerFanSpeedReply reply;
    ClientContext context;

    Status status = serviceStub.AirConditionerFanSpeedControl(&context, request, &reply);

    cout << "Air Cond fanspeed: " << reply.fanspeed() << " Level";
}

string setHandling(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::HandlingRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::HandlingReply reply;
    ClientContext context;

    Status status = serviceStub.HandlingControl(&context, request, &reply);
    if (reply.status()) {
        return "1";
    }
    else {
        return "0";
    }
}

void  getHandling() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::HandlingRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::HandlingReply reply;
    ClientContext context;

    Status status = serviceStub.HandlingControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Handling: READY";
    }
    else {
        cout << "Handling: HIDE";
    }
}

string setCentralDoorLockSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::CentralDoorLockSwitchRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::CentralDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.CentralDoorLockSwitchControl(&context, request, &reply);
    if (reply.status()) {
        return "1";
    }
    else {
        return "0";
    }

}

void  getCentralDoorLockSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::CentralDoorLockSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::CentralDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.CentralDoorLockSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Central DoorLock Switch: ON";
    }
    else {
        cout << "Central DoorLock Switch: OFF";
    }
}

void setFrontRightDoorLockSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightDoorLockSwitchRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontRightDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightDoorLockSwitchControl(&context, request, &reply);
}

void  getFrontRightDoorLockSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontRightDoorLockSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontRightDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.FrontRightDoorLockSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Right DoorLock Switch: ON";
    }
    else {
        cout << "Front Right DoorLock Switch: OFF";
    }
}

void setFrontLeftDoorLockSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftDoorLockSwitchRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::FrontLeftDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftDoorLockSwitchControl(&context, request, &reply);
}

void  getFrontLeftDoorLockSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::FrontLeftDoorLockSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::FrontLeftDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.FrontLeftDoorLockSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Front Left DoorLock Switch: ON";
    }
    else {
        cout << "Front Left DoorLock Switch: OFF";
    }
}

void setRearLeftDoorLockSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftDoorLockSwitchRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearLeftDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftDoorLockSwitchControl(&context, request, &reply);
}

void  getRearLeftDoorLockSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearLeftDoorLockSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearLeftDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.RearLeftDoorLockSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Left DoorLock Switch: ON";
    }
    else {
        cout << "Rear Left DoorLock Switch: OFF";
    }
}

void setRearRightDoorLockSwitch(bool flag) {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightDoorLockSwitchRequest request;
    request.set_setmode(true);
    request.set_flag(flag);

    UnityAPI::RearRightDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightDoorLockSwitchControl(&context, request, &reply);
}

void  getRearRightDoorLockSwitch() {
    auto channel = grpc::CreateChannel(
        ip_port,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::RearRightDoorLockSwitchRequest request;
    request.set_setmode(false);
    request.set_flag(false);

    UnityAPI::RearRightDoorLockSwitchReply reply;
    ClientContext context;

    Status status = serviceStub.RearRightDoorLockSwitchControl(&context, request, &reply);

    if (reply.status()) {
        cout << "Rear Right DoorLock Switch: ON";
    }
    else {
        cout << "Rear Right DoorLock Switch: OFF";
    }
}

string  sendPeriodicCall() {
    auto channel = grpc::CreateChannel(
        ip_NodeJS,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::getDBRequest request;
    request.set_name("true");

    UnityAPI::getDBReply reply;
    ClientContext context;

    Status message = serviceStub.get_database(&context, request, &reply);
	return reply.message();
} 

void  sendUpdateDatabase(string msg) {
    auto channel = grpc::CreateChannel(
        ip_NodeJS,
        grpc::InsecureChannelCredentials()
    );

    UnityAPIService::Stub serviceStub(channel);

    UnityAPI::setDBRequest request;
    request.set_message(msg);

    UnityAPI::setDBReply reply;
    ClientContext context;

    Status status = serviceStub.send_update_database(&context, request, &reply);

}

string extractMethod(string msg) {
	string method;
    string param;
	
	method = msg;
	param = msg;
	
	method.erase(msg.find("("), msg.find(")") - msg.find("(") + 1);
	param.erase(0, param.find("(") + 1);
	param.erase(param.length() - 1, 1);
	
 return method;
}

string extractParam(string msg) {
	string method;
    string param;
	
	method = msg;
	param = msg;
	
	method.erase(msg.find("("), msg.find(")") - msg.find("(") + 1);
	param.erase(0, param.find("(") + 1);
	param.erase(param.length() - 1, 1);

 return param;
}

int main(int argc, char** argv)
{
    string strMytestString("hello world");
    cout << strMytestString;

    string command;
	string method;
    string param;
	string token;
	string Response_msg;
    string set_DB_msg;

    //cout << "test" << endl;
    //Response_msg = sendPeriodicCall();
    //Response_msg.erase(0, 1);
    //cout << Response_msg << endl;
    while (true) {
        Response_msg = sendPeriodicCall();
        Response_msg.erase(0, 1);
        set_DB_msg= "";
        // Split String
        std::istringstream ss(Response_msg);

        while (std::getline(ss, token, ',')) {

            method = extractMethod(token);
            method = method.substr(0, method.size() - 7);
            param = extractParam(token);

            set_DB_msg = set_DB_msg + method + ":";

            if (method == "setFrontLowLight") {

                if (param == "true") {
                    setFrontLowLight(true);
                } 
                else if (param == "false") {
                    setFrontLowLight(false);
                }
            }
            else if (method == "setCentralDoorLockSwitch") {

                if (param == "true") {
                    set_DB_msg = set_DB_msg + setCentralDoorLockSwitch(true)+ ",";
                }
                else if (param == "false") {
                    set_DB_msg = set_DB_msg + setCentralDoorLockSwitch(false)+ ",";
                }
            }
            else if (method == "setFrontRightDoor") {

                if (param == "true") {

                    set_DB_msg = set_DB_msg + setFrontRightDoor(true)+ ",";
                }
                else if (param == "false") {

                    set_DB_msg = set_DB_msg + setFrontRightDoor(false)+ ",";
                }
            }
            else if (method == "setFrontLeftDoor") {

                if (param == "true") {

                    set_DB_msg = set_DB_msg + setFrontLeftDoor(true)+ ",";
                }
                else if (param == "false") {

                    set_DB_msg = set_DB_msg + setFrontLeftDoor(false)+ ",";
                }
            }
            else if (method == "setRightSideMirror") {
                set_DB_msg = set_DB_msg + setRightSideMirror(stod(param))+ ",";
            }
            else if (method == "setLeftSideMirror") {

                set_DB_msg = set_DB_msg + setLeftSideMirror(stod(param))+ ",";
            }
            else if (method == "setHandling") {

                if (param == "true") {

                    set_DB_msg = set_DB_msg + setHandling(true)+ ",";
                }
                else if (param == "false") {

                    set_DB_msg = set_DB_msg + setHandling(false)+ ",";
                }
            }
            else if (method == "setAirConditionerTemperature") {

                set_DB_msg = set_DB_msg + setAirConditionerTemperature(stod(param))+ ",";
            }
            else if (method == "setAirConditionerFanSpeed") {

                set_DB_msg = set_DB_msg + setAirConditionerFanSpeed(stoi(param))+ ",";
            }
            else if (method == "setAirConditioner") {

                if (param == "true") {

                    set_DB_msg = set_DB_msg + setAirConditioner(true)+ ",";
                }
                else if (param == "false") {

                    set_DB_msg = set_DB_msg + setAirConditioner(false)+ ",";
                }
            }
            else if (method == "getFrontLowLight") {
                getFrontLowLight();
            }

            else if (method == "setFrontHighLight") {

                if (param == "true") {

                    setFrontHighLight(true);
                }
                else if (param == "false") {

                    setFrontHighLight(false);
                }
            }
            else if (method == "getFrontHighLight") {

                getFrontHighLight();
            }

            else if (method == "setRearLight") {

                if (param == "true") {

                    setRearLight(true);
                }
                else if (param == "false") {

                    setRearLight(false);
                }
            }
            else if (method == "getRearLight") {

                getRearLight();
            }

            else if (method == "setFrontDaytimeLight") {

                if (param == "true") {

                    setFrontDaytimeLight(true);
                }
                else if (param == "false") {

                    setFrontDaytimeLight(false);
                }
            }
            else if (method == "getFrontDaytimeLight") {

                getFrontDaytimeLight();
            }

            else if (method == "setBrakeLight") {

                if (param == "true") {

                    setBrakeLight(true);
                }
                else if (param == "false") {

                    setBrakeLight(false);
                }
            }
            else if (method == "getBrakeLight") {

                getBrakeLight();
            }

            else if (method == "setReverseLight") {

                if (param == "true") {

                    setReverseLight(true);
                }
                else if (param == "false") {

                    setReverseLight(false);
                }
            }
            else if (method == "getReverseLight") {

                getReverseLight();
            }

            else if (method == "setFrontFogLight") {

                if (param == "true") {

                    setFrontFogLight(true);
                }
                else if (param == "false") {

                    setFrontFogLight(false);
                }
            }
            else if (method == "getFrontFogLight") {

                getFrontFogLight();
            }

            else if (method == "setRearFogLight") {

                if (param == "true") {

                    setRearFogLight(true);
                }
                else if (param == "false") {

                    setRearFogLight(false);
                }
            }
            else if (method == "getRearFogLight") {

                getRearFogLight();
            }

            else if (method == "setClearanceLamp") {

                if (param == "true") {

                    setClearanceLamp(true);
                }
                else if (param == "false") {

                    setClearanceLamp(false);
                }
            }
            else if (method == "getClearanceLamp") {

                getClearanceLamp();
            }

            else if (method == "setFrontLeftBlinkerLight") {

                if (param == "true") {

                    setFrontLeftBlinkerLight(true);
                }
                else if (param == "false") {

                    setFrontLeftBlinkerLight(false);
                }
            }
            else if (method == "getFrontLeftBlinkerLight") {

                getFrontLeftBlinkerLight();
            }

            else if (method == "setFrontRightBlinkerLight") {

                if (param == "true") {

                    setFrontRightBlinkerLight(true);
                }
                else if (param == "false") {

                    setFrontRightBlinkerLight(false);
                }
            }
            else if (method == "getFrontRightBlinkerLight") {

                getFrontRightBlinkerLight();
            }

            else if (method == "setRearLeftBlinkerLight") {

                if (param == "true") {

                    setRearLeftBlinkerLight(true);
                }
                else if (param == "false") {

                    setRearLeftBlinkerLight(false);
                }
            }
            else if (method == "getRearLeftBlinkerLight") {

                getRearLeftBlinkerLight();
            }

            else if (method == "setRearRightBlinkerLight") {

                if (param == "true") {

                    setRearRightBlinkerLight(true);
                }
                else if (param == "false") {

                    setRearRightBlinkerLight(false);
                }
            }
            else if (method == "getRearRightBlinkerLight") {

                getRearRightBlinkerLight();
            }

            else if (method == "setFrontWiper") {

                if (param == "true") {

                    setFrontWiper(true);
                }
                else if (param == "false") {

                    setFrontWiper(false);
                }
            }
            else if (method == "getFrontWiper") {

                getFrontWiper();
            }

            else if (method == "setRearWiper") {

                if (param == "true") {

                    setRearWiper(true);
                }
                else if (param == "false") {

                    setRearWiper(false);
                }
            }
            else if (method == "getRearWiper") {

                getRearWiper();
            }

            
            else if (method == "getLeftSideMirror") {

                getLeftSideMirror();
            }

            
            else if (method == "getRightSideMirror") {

                getRightSideMirror();
            }

            
            else if (method == "getFrontRightDoor") {

                getFrontRightDoor();
            }

            
            else if (method == "getFrontLeftDoor") {

                getFrontLeftDoor();
            }

            else if (method == "setRearRightDoor") {

                if (param == "true") {

                    setRearRightDoor(true);
                }
                else if (param == "false") {

                    setRearRightDoor(false);
                }
            }
            else if (method == "getRearRightDoor") {

                getRearRightDoor();
            }

            else if (method == "setRearLeftDoor") {

                if (param == "true") {

                    setRearLeftDoor(true);
                }
                else if (param == "false") {

                    setRearLeftDoor(false);
                }
            }
            else if (method == "getRearLeftDoor") {

                getRearLeftDoor();
            }

            else if (method == "setTrunk") {

                if (param == "true") {

                    setTrunk(true);
                }
                else if (param == "false") {

                    setTrunk(false);
                }
            }
            else if (method == "getTrunk") {

                getTrunk();
            }

            else if (method == "setSunRoof") {

                if (param == "true") {

                    setSunRoof(true);
                }
                else if (param == "false") {

                    setSunRoof(false);
                }
            }
            else if (method == "getSunRoof") {

                getSunRoof();
            }

            else if (method == "setFrontRightPowerWindows") {

                setFrontRightPowerWindows(stod(param));
            }
            else if (method == "getFrontRightPowerWindows") {

                getFrontRightPowerWindows();
            }

            else if (method == "setFrontLeftPowerWindows") {

                setFrontLeftPowerWindows(stod(param));
            }
            else if (method == "getFrontLeftPowerWindows") {

                getFrontLeftPowerWindows();
            }

            else if (method == "setRearRightPowerWindows") {

                setRearRightPowerWindows(stod(param));
            }
            else if (method == "getRearRightPowerWindows") {

                getRearRightPowerWindows();
            }

            else if (method == "setRearLeftPowerWindows") {

                setRearLeftPowerWindows(stod(param));
            }
            else if (method == "getRearLeftPowerWindows") {

                getRearLeftPowerWindows();
            }

            else if (method == "setSideMirrorSwitch") {

                if (param == "true") {

                    setSideMirrorSwitch(true);
                }
                else if (param == "false") {

                    setSideMirrorSwitch(false);
                }
            }
            else if (method == "getSideMirrorSwitch") {

                getSideMirrorSwitch();
            }

            else if (method == "setInstrumentLight") {

                if (param == "true") {

                    setInstrumentLight(true);
                }
                else if (param == "false") {

                    setInstrumentLight(false);
                }
            }
            else if (method == "getInstrumentLight") {

                getInstrumentLight();
            }

            else if (method == "setPassengerRoomDomeLight") {

                if (param == "true") {

                    setPassengerRoomDomeLight(true);
                }
                else if (param == "false") {

                    setPassengerRoomDomeLight(false);
                }
            }
            else if (method == "getPassengerRoomDomeLight") {

                getPassengerRoomDomeLight();
            }

            else if (method == "setReadingLightDriverSide") {

                if (param == "true") {

                    setReadingLightDriverSide(true);
                }
                else if (param == "false") {

                    setReadingLightDriverSide(false);
                }
            }
            else if (method == "getReadingLightDriverSide") {

                getReadingLightDriverSide();
            }

            else if (method == "setReadingLightPassengerSide") {

                if (param == "true") {

                    setReadingLightPassengerSide(true);
                }
                else if (param == "false") {

                    setReadingLightPassengerSide(false);
                }
            }
            else if (method == "getReadingLightPassengerSide") {

                getReadingLightPassengerSide();
            }

            else if (method == "setFrontRightPowerWindowsSwitch") {
                if (param == "true") {

                    setFrontRightPowerWindowsSwitch(true);
                }
                else if (param == "false") {

                    setFrontRightPowerWindowsSwitch(false);
                }
            }
            else if (method == "getFrontRightPowerWindowsSwitch") {

                getFrontRightPowerWindowsSwitch();
            }

            else if (method == "setFrontLeftPowerWindowsSwitch") {

                if (param == "true") {

                    setFrontLeftPowerWindowsSwitch(true);
                }
                else if (param == "false") {

                    setFrontLeftPowerWindowsSwitch(false);
                }
            }
            else if (method == "getFrontLeftPowerWindowsSwitch") {

                getFrontLeftPowerWindowsSwitch();
            }

            else if (method == "setRearRightPowerWindowsSwitch") {

                if (param == "true") {

                    setRearRightPowerWindowsSwitch(true);
                }
                else if (param == "false") {

                    setRearRightPowerWindowsSwitch(false);
                }
            }
            else if (method == "getRearRightPowerWindowsSwitch") {

                getRearRightPowerWindowsSwitch();
            }

            else if (method == "setRearLeftPowerWindowsSwitch") {

                if (param == "true") {

                    setRearLeftPowerWindowsSwitch(true);
                }
                else if (param == "false") {

                    setRearLeftPowerWindowsSwitch(false);
                }
            }
            else if (method == "getRearLeftPowerWindowsSwitch") {

                getRearLeftPowerWindowsSwitch();
            }

            else if (method == "setHorn") {

                if (param == "true") {

                    setHorn(true);
                }
                else if (param == "false") {

                    setHorn(false);
                }
            }
            else if (method == "getHorn") {

                getHorn();
            }

            else if (method == "setBuzzer") {

                if (param == "true") {

                    setBuzzer(true);
                }
                else if (param == "false") {

                    setBuzzer(false);
                }
            }
            else if (method == "getBuzzer") {

                getBuzzer();
            }

            
            else if (method == "getAirConditionerTemperature") {

                getAirConditionerTemperature();
            }

            
            else if (method == "getAirConditionerFanSpeed") {

                getAirConditionerFanSpeed();
            }

            
            else if (method == "getAirConditioner") {

                getAirConditioner();
            }


            
            else if (method == "getHandling") {

                getHandling();
            }

            
            else if (method == "getCentralDoorLockSwitch") {

                getCentralDoorLockSwitch();
            }

            else if (method == "setFrontRightDoorLockSwitch") {

                if (param == "true") {

                    setFrontRightDoorLockSwitch(true);
                }
                else if (param == "false") {

                    setFrontRightDoorLockSwitch(false);
                }
            }
            else if (method == "getFrontRightDoorLockSwitch") {

                getFrontRightDoorLockSwitch();
            }

            else if (method == "setFrontLeftDoorLockSwitch") {

                if (param == "true") {

                    setFrontLeftDoorLockSwitch(true);
                }
                else if (param == "false") {

                    setFrontLeftDoorLockSwitch(false);
                }
            }
            else if (method == "getFrontLeftDoorLockSwitch") {

                getFrontLeftDoorLockSwitch();
            }

            else if (method == "setRearRightDoorLockSwitch") {

                if (param == "true") {

                    setRearRightDoorLockSwitch(true);
                }
                else if (param == "false") {

                    setRearRightDoorLockSwitch(false);
                }
            }
            else if (method == "getRearRightDoorLockSwitch") {

                getRearRightDoorLockSwitch();
            }

            else if (method == "setRearLeftDoorLockSwitch") {

                if (param == "true") {

                    setRearLeftDoorLockSwitch(true);
                }
                else if (param == "false") {

                    setRearLeftDoorLockSwitch(false);
                }
            }
            else if (method == "getRearLeftDoorLockSwitch") {

                getRearLeftDoorLockSwitch();
            }

            else if (command == "stop") {
                break;
            }
            
            //cout << method << endl;
        }
        set_DB_msg.pop_back();
        sendUpdateDatabase(set_DB_msg);
        std::this_thread::sleep_for(1s);
    }
    
    
    //string Response_msg = "setCentralDoorLockSwitch(true),setFrontRightDoor(true),setFrontLeftDoor(false),setRightSideMirror(40.5),setLeftSideMirror(80.5),setHandling(false),setAirConditioner(false),setAirConditionerTemperature(25.5),setAirConditionerFanSpeed(3)";
	
	//delete[] arry_VW_call;
	std::getchar();
	//return 0;
}

