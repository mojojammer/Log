#include <iostream>

class Log {

private:
	int m_LogLevel;

public:
	static const int LogLevelError = 0;
	static const int LogLevelWarning = 1;
	static const int LogLevelInfo = 2;

public:

	Log(){
		m_LogLevel = 2;
	}

	void setLevel (int level){
		m_LogLevel = level;
	}

	void Error(char* msg){
		if (m_LogLevel >= LogLevelError)
			std::cout << "[ERROR]: " << msg << std::endl;
	}

	void Warning(char* msg){
		if (m_LogLevel >= LogLevelWarning)
			std::cout << "[WARNING]: " << msg << std::endl;
	}

	void Info(char* msg){
		if (m_LogLevel >= LogLevelInfo)
			std::cout << "[INFO]: " << msg << std::endl;
	}
};

int main() {
	Log  log;
	log.setLevel(log.LogLevelInfo);
	log.Info("This is a info!");
	log.Error("This is an error!");
	log.Warning("This is a warning!");
	return 0;
}


