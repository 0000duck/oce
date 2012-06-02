// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_EntityOwner_HeaderFile
#define _SelectMgr_EntityOwner_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_SelectMgr_EntityOwner_HeaderFile
#include <Handle_SelectMgr_EntityOwner.hxx>
#endif

#ifndef _SelectMgr_SOPtr_HeaderFile
#include <SelectMgr_SOPtr.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _SelectBasics_EntityOwner_HeaderFile
#include <SelectBasics_EntityOwner.hxx>
#endif
#ifndef _Handle_SelectMgr_SelectableObject_HeaderFile
#include <Handle_SelectMgr_SelectableObject.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager_HeaderFile
#include <Handle_PrsMgr_PresentationManager.hxx>
#endif
#ifndef _Handle_PrsMgr_PresentationManager3d_HeaderFile
#include <Handle_PrsMgr_PresentationManager3d.hxx>
#endif
#ifndef _Quantity_NameOfColor_HeaderFile
#include <Quantity_NameOfColor.hxx>
#endif
class Standard_NoSuchObject;
class SelectMgr_SelectableObject;
class PrsMgr_PresentationManager;
class PrsMgr_PresentationManager3d;
class TopLoc_Location;


//! A framework to define classes of owners of sensitive primitives. <br>
//! The owner is the link between application and <br>
//! selection data structures. <br>
//! For the application to make its own objects selectable, <br>
//! it must define owner classes inheriting this framework. <br>
//! <br>
class SelectMgr_EntityOwner : public SelectBasics_EntityOwner {

public:

  //! Initializes the selection priority aPriority. <br>
  Standard_EXPORT   SelectMgr_EntityOwner(const Standard_Integer aPriority = 0);
  //! Constructs a framework with the selectable object <br>
//! anSO being attributed the selection priority aPriority. <br>
  Standard_EXPORT   SelectMgr_EntityOwner(const Handle(SelectMgr_SelectableObject)& aSO,const Standard_Integer aPriority = 0);
  //! Returns true if there is a selectable object to serve as an owner. <br>
  Standard_EXPORT     Standard_Boolean HasSelectable() const;
  //! Returns a selectable object detected in the working context. <br>
  Standard_EXPORT     Handle_SelectMgr_SelectableObject Selectable() const;
  //! Sets the selectable object anSO to be used by the <br>
//! second constructor above. <br>
  Standard_EXPORT     void Set(const Handle(SelectMgr_SelectableObject)& aSO) ;
  //! Provides a framework to highlight any selectable <br>
//! object found subsequently which can serve as an <br>
//! owner of a sensitive primitive. <br>
  Standard_EXPORT   virtual  void Hilight() ;
  //! Returns true if the presentation manager aPM <br>
//! highlights selections corresponding to the selection mode aMode. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsHilighted(const Handle(PrsMgr_PresentationManager)& aPM,const Standard_Integer aMode = 0) const;
  //! Highlights the owner of a detected selectable object in <br>
//! the presentation manager aPM. This object could be <br>
//! the owner of a sensitive primitive. <br>
//! The display mode for the highlight is aMode; this has <br>
//! the default value of 0, that is, wireframe mode. <br>
  Standard_EXPORT   virtual  void Hilight(const Handle(PrsMgr_PresentationManager)& aPM,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   virtual  void HilightWithColor(const Handle(PrsMgr_PresentationManager3d)& aPM,const Quantity_NameOfColor aColor,const Standard_Integer aMode = 0) ;
  //! Removes highlighting from the owner of a detected <br>
//! selectable object in the presentation manager aPM. <br>
//! This object could be the owner of a sensitive primitive. <br>
//! The display mode for the highlight is aMode; this has <br>
//! the default value of 0, that is, wireframe mode. <br>
  Standard_EXPORT   virtual  void Unhilight(const Handle(PrsMgr_PresentationManager)& aPM,const Standard_Integer aMode = 0) ;
  //! Clears the owners matching the value of the selection <br>
//! mode aMode from the presentation manager object aPM. <br>
  Standard_EXPORT   virtual  void Clear(const Handle(PrsMgr_PresentationManager)& aPM,const Standard_Integer aMode = 0) ;
  
  Standard_EXPORT   virtual  Standard_Boolean HasLocation() const;
  
  Standard_EXPORT   virtual  void SetLocation(const TopLoc_Location& aLoc) ;
  
  Standard_EXPORT   virtual  void ResetLocation() ;
  
  Standard_EXPORT   virtual const TopLoc_Location& Location() const;
  
        void State(const Standard_Integer aStatus) ;
  
        Standard_Integer State() const;
  //! if owner is not auto hilighted, for group contains many such owners <br>
//!          will be called one method HilightSelected of SelectableObject <br>
  Standard_EXPORT   virtual  Standard_Boolean IsAutoHilight() const;
  //! if this method returns TRUE the owner will allways call method <br>
//!          Hilight for SelectableObject when the owner is detected. By default <br>
//!          it always return FALSE. <br>
  Standard_EXPORT   virtual  Standard_Boolean IsForcedHilight() const;
  //! Set Z layer ID and update all presentations. <br>
  Standard_EXPORT   virtual  void SetZLayer(const Handle(PrsMgr_PresentationManager)& thePrsMgr,const Standard_Integer theLayerId) ;




  DEFINE_STANDARD_RTTI(SelectMgr_EntityOwner)

protected:




private: 


SelectMgr_SOPtr mySelectable;
Standard_Integer mystate;


};


#include <SelectMgr_EntityOwner.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif