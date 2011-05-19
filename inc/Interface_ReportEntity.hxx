// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_ReportEntity_HeaderFile
#define _Interface_ReportEntity_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Interface_ReportEntity_HeaderFile
#include <Handle_Interface_ReportEntity.hxx>
#endif

#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Interface_Check;
class Standard_Transient;


//! A ReportEntity is produced to aknowledge and memorize the <br>
//!           binding between a Check and an Entity. The Check can bring <br>
//!           Fails (+ Warnings if any), or only Warnings. If it is empty, <br>
//!           the Report Entity is for an Unknown Entity. <br>
//! <br>
//!           The ReportEntity brings : the Concerned Entity, the <br>
//!           Check, and if the Entity is empty (Fails due to Read <br>
//!           Errors, hence the Entity could not be loaded), a Content. <br>
//!           The Content is itself an Transient Object, but remains in a <br>
//!           literal form : it is an "Unknown Entity". If the Concerned <br>
//!           Entity is itself Unknown, Concerned and Content are equal. <br>
//! <br>
//!           According to the Check, if it brings Fail messages, <br>
//!           the ReportEntity is an "Error Entity", the Concerned Entity is <br>
//!           an "Erroneous Entity". Else it is a "Correction Entity", the <br>
//!           Concerned Entity is a "Corrected Entity". With no Check <br>
//!           message and if Concerened and Content are equal, it reports <br>
//!           for an "Unknown Entity". <br>
//! <br>
//!           Each norm must produce its own type of Unknown Entity, but can <br>
//!           use the class UndefinedContent to brings parameters : it is <br>
//!           enough for most of information and avoids to redefine them, <br>
//!           only the specific part remains to be defined for each norm. <br>
class Interface_ReportEntity : public MMgt_TShared {

public:

  //! Creates a ReportEntity for an Unknown Entity : Check is empty, <br>
//!           and Concerned equates Content (i.e. the Unknown Entity) <br>
  Standard_EXPORT   Interface_ReportEntity(const Handle(Standard_Transient)& unknown);
  //! Creates a ReportEntity with its features : <br>
//!           - <acheck> is the Check to be memorised <br>
//!           - <concerned> is the Entity to which the Check is bound <br>
//!           Later, a Content can be set : it is required for an Error <br>
  Standard_EXPORT   Interface_ReportEntity(const Handle(Interface_Check)& acheck,const Handle(Standard_Transient)& concerned);
  //! Sets a Content : it brings non interpreted data which belong <br>
//!           to the Concerned Entity. It can be empty then loaded later. <br>
//!           Remark that for an Unknown Entity, Content is set by Create. <br>
  Standard_EXPORT     void SetContent(const Handle(Standard_Transient)& content) ;
  //! Returns the stored Check <br>
  Standard_EXPORT    const Handle_Interface_Check& Check() const;
  //! Returns the stored Check in order to change it <br>
  Standard_EXPORT     Handle_Interface_Check& CCheck() ;
  //! Returns the stored Concerned Entity. It equates the Content <br>
//!           in the case of an Unknown Entity <br>
  Standard_EXPORT     Handle_Standard_Transient Concerned() const;
  //! Returns True if a Content is stored (it can equate Concerned) <br>
  Standard_EXPORT     Standard_Boolean HasContent() const;
  //! Returns True if a Content is stored AND differs from Concerned <br>
//!           (i.e. redefines content) : used when Concerned could not be <br>
//!           loaded <br>
  Standard_EXPORT     Standard_Boolean HasNewContent() const;
  //! Returns the stored Content, or a Null Handle <br>
//!           Remark that it must be an "Unknown Entity" suitable for <br>
//!           the norm of the containing Model <br>
  Standard_EXPORT     Handle_Standard_Transient Content() const;
  //! Returns True for an Error Entity, i.e. if the Check <br>
//!           brings at least one Fail message <br>
  Standard_EXPORT     Standard_Boolean IsError() const;
  //! Returns True for an Unknown Entity, i,e. if the Check <br>
//!           is empty and Concerned equates Content <br>
  Standard_EXPORT     Standard_Boolean IsUnknown() const;




  DEFINE_STANDARD_RTTI(Interface_ReportEntity)

protected:




private: 


Handle_Interface_Check thecheck;
Handle_Standard_Transient theconcerned;
Handle_Standard_Transient thecontent;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif