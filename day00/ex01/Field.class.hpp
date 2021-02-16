

#ifndef FIELD_CLASS_HPP
# define FIELD_CLASS_HPP

# include <iostream>
# include <string>

class Field {

private:

    std::string _fieldName;
    std::string _fieldValue;

public:
    Field();
    ~Field();

    std::string getFieldName() const;
    std::string getFieldValue() const;

    void setFieldName(std::string name);
    void setFieldValue(std::string input);
};

#endif
