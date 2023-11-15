#ifndef STUDENTCONTROLLER_H
#define STUDENTCONTROLLER_H

#include <QString>
#include <memory>
#include "StudentModel.hpp"
#include "StudentView.hpp"

class StudentController
{
public:
    StudentController(std::shared_ptr<StudentModel> studentModel);
    void setStudentName(QString name);
    void setStudentId(int id);
    void updateView();
private:
    std::shared_ptr<StudentModel> m_studentModel;
    StudentView m_studentView;
};

#endif
