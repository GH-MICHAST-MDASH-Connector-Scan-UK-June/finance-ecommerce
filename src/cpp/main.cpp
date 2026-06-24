#include <iostream>
#include <string>
#include <map>

class Application {
private:
    std::string name;
    
public:
    Application(const std::string& appName) : name(appName) {}
    
    void run() {
        std::cout << "finance-ecommerce - C++ Application" << std::endl;
        processData();
    }
    
    void processData() {
        std::map<std::string, std::string> data;
        data["app"] = name;
        data["status"] = "running";
        
        for (const auto& pair : data) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    }
};

int main() {
    Application app("finance-ecommerce");
    app.run();
    return 0;
}
