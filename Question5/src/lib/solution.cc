#include "solution.h"

  AcademicRecord::AcademicRecord(){
    Maths = 0;
    Computers = 0;
    Physics = 0;
  }

  AcademicRecord::AcademicRecord(int mathIn, int computerIn, int physicsIn):Maths(mathIn),Computers(computerIn),Physics(physicsIn){

  }

  AcademicRecord::AcademicRecord(const AcademicRecord &a2){
    Maths = a2.Maths;
    Computers = a2.Computers;
    Physics = a2.Physics;
  }

    // Prefix overload
    // ++p;
  AcademicRecord AcademicRecord::operator++(){ 
    AcademicRecord::add(10, Maths);
    AcademicRecord::add(10, Physics);
    AcademicRecord::add(10, Computers);
    return *this;
  }

  // Postfix overload
  // P++;
  AcademicRecord AcademicRecord::operator++(int){
    AcademicRecord temp = *this;
    AcademicRecord::add(10, Maths);
    AcademicRecord::add(10, Physics);
    AcademicRecord::add(10, Computers);    
    return temp;
  }

 // Prefix overload
  // ++p;
  AcademicRecord AcademicRecord::operator--(){
    AcademicRecord::minus(20, Maths);
    AcademicRecord::minus(20, Physics);
    AcademicRecord::minus(20, Computers);
    
    return *this;
  }

  // Postfix overload
  // P++;
  AcademicRecord AcademicRecord::operator--(int){
    AcademicRecord temp = *this;
    AcademicRecord::minus(20, Maths);
    AcademicRecord::minus(20, Physics);
    AcademicRecord::minus(20, Computers);
    return temp;
  }

  AcademicRecord AcademicRecord::operator+=(int i){
    AcademicRecord::add(i, Maths);
    AcademicRecord::add(i, Physics);
    AcademicRecord::add(i, Computers);  
    return *this;
  }

  AcademicRecord AcademicRecord::operator-=(int i){
    AcademicRecord::minus(i, Maths);
    AcademicRecord::minus(i, Computers);
    AcademicRecord::minus(i, Physics);
    return *this;
  }

  bool AcademicRecord::operator==(const AcademicRecord &a2){
    if(a2.Maths != Maths){
      return false;
    }
    if(a2.Physics != Physics){
      return false;
    }
    if(a2.Computers != Computers){
      return false;
    }
    return true;
  }
  void AcademicRecord::print(){
    std::cout << "Maths:: " << Maths << std::endl;
    std::cout << "Physics:: " << Physics << std::endl;
    std::cout << "Computers:: " << Computers << std::endl;
    std::cout << "" << std::endl;
  }

  void AcademicRecord::add(int i, int &grade){
    if(grade + i < 100){
      grade = grade + i;
    }else{
      grade = 100;
    }
  }
  void AcademicRecord::minus(int i, int &grade){
    if(grade - i > 0){
      grade = grade - i;
    }else{
      grade = 0;
    }
  }
