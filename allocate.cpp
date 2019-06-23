int main( void ) {

    Student bob;
    Student *jim;
    Student *group;

    jim = new Student;
    group = new Student[10];

    delete jim;
    delete [] group;
    return (0); 
}