/* Copyright 2019-2020 The MathWorks, Inc. */

#ifndef udp_hpp
#define udp_hpp

#include "ip.hpp"
#include <stdio.h>
#include <string>
#include <memory>

namespace slrealtime {
    namespace ip {
        namespace udp {

            class Socket : public slrealtime::ip::Socket {
            private:
                std::string arrayToString(uint8_t *AddArg);
            protected:
                struct Impl;
                std::unique_ptr<Impl>(impl_);

            public:
                IPAPI Socket(std::string address, uint16_t port);
                IPAPI ~Socket();
                IPAPI void close();
                IPAPI size_t bytesToRead();
                IPAPI bool is_open();
                IPAPI void bind();
                IPAPI void addMulticastMembership(uint8_t *multicastAddArg,int multicastAddCount, uint8_t *multicastInterfaceArg,int multicastInterfaceCount );
                IPAPI void setRemoteEndpoint(uint8_t *remoteAddressArg, uint16_t remotePort);
                IPAPI void resetRemoteEndpoint(uint8_t *remoteAddressArg, uint16_t *remotePort);
                IPAPI size_t send(const char* sendBuf, size_t bytesToSend);
                IPAPI size_t receive(char* rcvBuf, size_t bytesToRcv, bool enablefilter, uint8_t* fmAddress);
                IPAPI std::string type() {
                    return "udp";
                }
                IPAPI void disable();
            };

        }
    }
}

IPAPI slrealtime::ip::udp::Socket* getUDPSocket(const std::string localAddress,uint16_t localPort);

#endif