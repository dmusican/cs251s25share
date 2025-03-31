FROM ubuntu:24.04
RUN apt-get -y update
RUN apt-get -y install git vim clang guile-3.0 valgrind gdb zip curl zsh just
#
# just is not available via apt;  it wants snap which doesn't work in docker containers so we are manually downloading/running the just script into /usr/local
# IT IS NOW!
#RUN curl --proto '=https' --tlsv1.2 -sSf https://just.systems/install.sh | bash -s -- --to /usr/local/bin

# From https://hub.docker.com/_/ubuntu, makes Perl/Guile warnings about locale go away
RUN apt-get install -y locales && rm -rf /var/lib/apt/lists/* \
	&& localedef -i en_US -c -f UTF-8 -A /usr/share/locale/locale.alias en_US.UTF-8
ENV LANG en_US.utf8

# Updated docker images for Ubuntu have a built-in user named ubuntu to use
USER ubuntu

# Fancier prompt
RUN sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
COPY dot_zshrc /home/ubuntu/.zshrc
