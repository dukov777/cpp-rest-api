# C++ REST API Service using cpp-httplib

This is a simple REST API service built in C++ using the header-only library `cpp-httplib`. The service demonstrates how to handle basic HTTP GET requests.

## Prerequisites

- **C++ Compiler**: Ensure you have a C++ compiler that supports C++11 or later (e.g., `g++`, `clang++`).
- **Git**: For cloning the repository (optional).

## Installation

1. **Clone the Repository** (Optional):
If you haven't already cloned the repository, do so using the following command:

    ```sh
    git clone https://github.com/yourusername/cpp-rest-api.git
    cd cpp-rest-api

    git submodule update --init --recursive
    ```

## Compilation
To compile the application, use the following command:

```sh
    g++ -std=c++11 -o my_rest_service main.cpp
```

## Running the Service
To run the compiled service, use the following command:

```sh
./my_rest_service
```

The service will start and listen on localhost at port 8080.

## Testing the API
You can test the API using a web browser, curl, or any HTTP client like Postman.

Test with a browser:

Open your web browser and go to http://localhost:8080/hello to see the "Hello World!" message.
Go to http://localhost:8080/json to see a JSON response.
Test with curl:

```sh
curl http://localhost:8080/hello
```
This should return Hello World!.

```sh
curl http://localhost:8080/json
```
This should return {"message": "Hello, JSON!"}.

