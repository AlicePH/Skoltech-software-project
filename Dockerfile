FROM ubuntu:22.04

RUN apt-get update
RUN apt install -y git
RUN apt install -y build-essential

RUN git clone https://github.com/AlicePH/Skoltech-software-project
RUN cd /Skoltech-software-project

RUN cmake .
RUN make -f Makefile
RUN chmod +x /test.sh

WORKDIR /Skoltech-software-project
ENTRYPOINT ["bash"]
