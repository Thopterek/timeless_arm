# ARMv6 32-bit Debian (closest to early Raspberry Pi)
# possible of use the ARMv7 version
FROM arm32v6/debian:bullseye

# Prevent interactive prompts
ENV DEBIAN_FRONTEND=noninteractive

# Install development tools
RUN apt-get update && \
    apt-get install -y \
        build-essential \
        gdb \
        binutils \
        vim \
        less \
    && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /workspace

# Default shell
CMD ["/bin/bash"]

