#include "cpp-httplib/httplib.h"

int main() {
    httplib::Server svr;

    svr.Get("/hello", [](const httplib::Request &, httplib::Response &res) {
        res.set_content("Hello World!", "text/plain");
    });

    svr.Get("/json", [](const httplib::Request &, httplib::Response &res) {
        res.set_content(R"({"message": "Hello, JSON!"})", "application/json");
    });

    svr.listen("localhost", 8080);
}
