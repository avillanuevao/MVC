#include "StudentController.hpp"

StudentController::StudentController(std::shared_ptr<StudentModel> studentModel)
    : m_studentModel(studentModel) {}

void StudentController::setStudentName(QString name)
{
    m_studentModel->setName(name);
}

void StudentController::setStudentId(int id)
{
    m_studentModel->setId(id);
}

void StudentController::updateView()
{
    m_studentView.printStudentDetails(m_studentModel->getName(), m_studentModel->getId());
}
