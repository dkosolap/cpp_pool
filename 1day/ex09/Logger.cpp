#include "Logger.hpp"

void        Logger::logToConsole(std::string const & str) {
    std::cout << makeLogEntry(str);
}

void        Logger::logToFile(std::string const & str) {
    std::cout << makeLogEntry(str);

}

std::string Logger::makeLogEntry(std::string const & msg) {
    std::time_t     now = time(0);
    std::string     res;
    char	        buf[19];

    buf[18] = '\0';
    std::tm *ltm = localtime(&now);
    std::strftime(buf,18,"[%Y%m%d-%H%M%S] ",ltm);
    res = buf;
    res = "[" + res + msg + "]";
    return (res);
}

Logger::Logger() {
    
    _func[0] = &Logger::logToConsole;
    _func[1] = &Logger::logToFile;
    _fu[0] = "logToConsole";
    _fu[1] = "logToFile";
}
void        Logger::log(std::string const & dest, std::string const & message) {
    // std::cout << _fu[0];

    for (int i = 0; i < 2; i++) {
     
        if (_fu[i].compare(dest)) {
     
            ((this)->*(_func[i]))(message); 
        }
    }

}
