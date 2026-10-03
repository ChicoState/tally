# Tally

[![.github/workflows/build.yml](https://github.com/ChicoState/tally/actions/workflows/build.yml/badge.svg)](https://github.com/ChicoState/tally/actions/workflows/build.yml)

This is a simple C++ command line application to keep a tally for each of multiple parties

## Getting Started

This project uses the [cpp-container Docker image](https://github.com/ChicoState/cpp-container).

### Launching in container

Run it with a volume mounted to the current source code:
```
docker run -v "$(pwd)":/usr/src -it cpp-container
```

Or launch an interactive container:
```
docker run -v "$(pwd)":/usr/src -it cpp-container sh
```