#include <fstream>

// the line of code that print newing message into log file
const std::string whenNewDetected = "\nlo_G_6987 << \"newing ";

void insertHeaders(std::ofstream& output){
    // insert the "#include ..." at the beginning of output file

    // content to be inserted
    std::string content = "// insert by Easy Anti Leak\n#include <fstream>\n#include <iostream>\nstd::ofstream lo_G_6987(\"result.log\");\n\n";

    for (int i=0; i < content.size(); ++i)
        output.put(content[i]);     // writing char by char

}

// check if reading "new" keyword in the source file
bool hasNewKeyWord(const std::string& s){

    // search for " new " instead of "new" preventing searching variable name
    if (s.find(" new ") != std::string::npos || 
        s.find("=new") != std::string::npos)
        return true;

    return false;
}

// check if reading "delete" keyword in the source file
bool hasDeleteKeyWord(const std::string& s){

    if (s.find("delete ") != std::string::npos || 
        s.find("=new") != std::string::npos)
        return true;

    return false;
}

void modifyFile(std::ifstream& input, std::ofstream& output){


    // copy from input file to output file
    std::string buffer;      
    int lineCounter = 0;
	while (getline(input, buffer)){      // getline will discard the '\n'

		for (int i=0; i < buffer.size(); ++i){
            if (buffer[i] != '\0')
		        output.put(buffer[i]);
        }
        // insert a line of code that do printing message into log file
        if (hasNewKeyWord(buffer))
            output << whenNewDetected + "at line: " + std::to_string(lineCounter) + "\";";

        // manually insert '\n' at the end
        output.put('\n');

        lineCounter++;
	}

}

