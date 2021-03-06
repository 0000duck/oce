// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_InterferenceIterator_HeaderFile
#define _TopOpeBRepDS_InterferenceIterator_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TopOpeBRepDS_ListIteratorOfListOfInterference.hxx>
#include <Standard_Boolean.hxx>
#include <TopOpeBRepDS_Kind.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TopOpeBRepDS_Interference.hxx>
class TopOpeBRepDS_ListOfInterference;
class TopOpeBRepDS_Interference;
class TopOpeBRepDS_ListIteratorOfListOfInterference;


//! Iterate  on  interferences  of  a  list,  matching
//! conditions  on   interferences.
//! Nota   :
//! inheritance  of   ListIteratorOfListOfInterference  from
//! TopOpeBRepDS  has  not   been  done   because  of  the
//! impossibility of naming  the classical  More, Next
//! methods  which are declared as static in
//! TCollection_ListIteratorOfList ... . ListIteratorOfList
//! has benn placed as a field of InterferenceIterator.
class TopOpeBRepDS_InterferenceIterator 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TopOpeBRepDS_InterferenceIterator();
  
  //! Creates an iterator on the Interference of list <L>.
  Standard_EXPORT TopOpeBRepDS_InterferenceIterator(const TopOpeBRepDS_ListOfInterference& L);
  
  //! re-initialize  interference iteration  process  on
  //! the list of interference <L>.
  //! Conditions are not modified.
  Standard_EXPORT   void Init (const TopOpeBRepDS_ListOfInterference& L) ;
  
  //! define a condition on interference iteration process.
  //! Interference must match the Geometry Kind <ST>
  Standard_EXPORT   void GeometryKind (const TopOpeBRepDS_Kind GK) ;
  
  //! define a condition on interference iteration process.
  //! Interference must match the Geometry <G>
  Standard_EXPORT   void Geometry (const Standard_Integer G) ;
  
  //! define a condition on interference iteration process.
  //! Interference must match the Support Kind <ST>
  Standard_EXPORT   void SupportKind (const TopOpeBRepDS_Kind ST) ;
  
  //! define a condition on interference iteration process.
  //! Interference must match the Support <S>
  Standard_EXPORT   void Support (const Standard_Integer S) ;
  
  //! reach for an interference  matching the conditions
  //! (if  defined).
  Standard_EXPORT   void Match() ;
  
  //! Returns  True if the Interference <I>  matches the
  //! conditions (if defined).
  //! If no conditions defined, returns True.
  Standard_EXPORT virtual   Standard_Boolean MatchInterference (const Handle(TopOpeBRepDS_Interference)& I)  const;
  
  //! Returns True if there is a current Interference in
  //! the iteration.
  Standard_EXPORT   Standard_Boolean More()  const;
  
  //! Move to the next Interference.
  Standard_EXPORT   void Next() ;
  
  //! Returns   the   current   Interference,   matching   the
  //! conditions  (if defined).
  Standard_EXPORT   Handle(TopOpeBRepDS_Interference)& Value()  const;
  
  Standard_EXPORT   TopOpeBRepDS_ListIteratorOfListOfInterference& ChangeIterator() ;




protected:





private:



  TopOpeBRepDS_ListIteratorOfListOfInterference myIterator;
  Standard_Boolean myGKDef;
  TopOpeBRepDS_Kind myGK;
  Standard_Boolean myGDef;
  Standard_Integer myG;
  Standard_Boolean mySKDef;
  TopOpeBRepDS_Kind mySK;
  Standard_Boolean mySDef;
  Standard_Integer myS;


};







#endif // _TopOpeBRepDS_InterferenceIterator_HeaderFile
