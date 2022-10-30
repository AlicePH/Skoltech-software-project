FROM ubuntu:22.04

RUN apt-get update
RUN apt install -y git
RUN apt install -y build-essential
RUN apt install -y cmake

RUN git clone https://github.com/AlicePH/Skoltech-software-project
RUN cd Skoltech-software-project

WORKDIR /Skoltech-software-project
RUN cmake CMakeLists.txt
RUN make -f Makefile

ENTRYPOINT ["bash"]
