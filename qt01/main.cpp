#include <QCoreApplication>
#include "StudentModel.hpp"
#include "StudentController.hpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    auto specificStudentModel = std::make_shared<StudentModel>();
    StudentController studentController(specificStudentModel);
    studentController.setStudentName("Neo");
    studentController.setStudentId(0000);
    studentController.updateView();
    return a.exec();
}
