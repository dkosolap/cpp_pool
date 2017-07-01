#ifndef LOGGEST_CLASS_H
# define LOGGEST_CLASS_H 
# include <iostream>
# include <ctime>


class Logger {
    private:
        void        logToConsole(std::string const & str);
        void        logToFile(std::string const & str);
        std::string makeLogEntry(std::string const & msg);
        typedef void (Logger::*FUNC)(std::string const &str);
        FUNC        _func[2];
        std::string _fu[2];
    public:
        Logger();
        void    log(std::string const & dest, std::string const & message);
};

#endif
