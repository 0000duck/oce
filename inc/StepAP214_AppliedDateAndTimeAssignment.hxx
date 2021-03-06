// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP214_AppliedDateAndTimeAssignment_HeaderFile
#define _StepAP214_AppliedDateAndTimeAssignment_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepAP214_AppliedDateAndTimeAssignment.hxx>

#include <Handle_StepAP214_HArray1OfDateAndTimeItem.hxx>
#include <StepBasic_DateAndTimeAssignment.hxx>
#include <Handle_StepBasic_DateAndTime.hxx>
#include <Handle_StepBasic_DateTimeRole.hxx>
#include <Standard_Integer.hxx>
class StepAP214_HArray1OfDateAndTimeItem;
class StepBasic_DateAndTime;
class StepBasic_DateTimeRole;
class StepAP214_DateAndTimeItem;



class StepAP214_AppliedDateAndTimeAssignment : public StepBasic_DateAndTimeAssignment
{

public:

  
  //! Returns a AppliedDateAndTimeAssignment
  Standard_EXPORT StepAP214_AppliedDateAndTimeAssignment();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DateAndTime)& aAssignedDateAndTime, const Handle(StepBasic_DateTimeRole)& aRole) ;
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DateAndTime)& aAssignedDateAndTime, const Handle(StepBasic_DateTimeRole)& aRole, const Handle(StepAP214_HArray1OfDateAndTimeItem)& aItems) ;
  
  Standard_EXPORT   void SetItems (const Handle(StepAP214_HArray1OfDateAndTimeItem)& aItems) ;
  
  Standard_EXPORT   Handle(StepAP214_HArray1OfDateAndTimeItem) Items()  const;
  
  Standard_EXPORT   StepAP214_DateAndTimeItem ItemsValue (const Standard_Integer num)  const;
  
  Standard_EXPORT   Standard_Integer NbItems()  const;




  DEFINE_STANDARD_RTTI(StepAP214_AppliedDateAndTimeAssignment)

protected:




private: 


  Handle(StepAP214_HArray1OfDateAndTimeItem) items;


};







#endif // _StepAP214_AppliedDateAndTimeAssignment_HeaderFile
