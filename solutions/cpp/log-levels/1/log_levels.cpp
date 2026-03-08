#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int length_of_string = std::size(line);
    int index_of_colon = line.find(":");
    int index_of_message = index_of_colon + 2;
    return line.substr(index_of_message, (length_of_string - index_of_message));
}

std::string log_level(std::string line) {
    // return the log level
    int index_of_closingBracket = line.find("]");
    return line.substr(1, (index_of_closingBracket - 1));
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string my_log_level = log_level(line);
    std::string my_message = message(line);

    std::string final_string = my_message + " (" + my_log_level + ")";
    return final_string;
}
}  // namespace log_line
