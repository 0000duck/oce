// Created by: CKY / Contract Toubro-Larsen
// Copyright (c) 1993-1999 Matra Datavision
// Copyright (c) 1999-2012 OPEN CASCADE SAS
//
// The content of this file is subject to the Open CASCADE Technology Public
// License Version 6.5 (the "License"). You may not use the content of this file
// except in compliance with the License. Please obtain a copy of the License
// at http://www.opencascade.org and read it completely before using this file.
//
// The Initial Developer of the Original Code is Open CASCADE S.A.S., having its
// main offices at: 1, place des Freres Montgolfier, 78280 Guyancourt, France.
//
// The Original Code and all software distributed under the License is
// distributed on an "AS IS" basis, without warranty of any kind, and the
// Initial Developer hereby disclaims all such warranties, including without
// limitation, any warranties of merchantability, fitness for a particular
// purpose or non-infringement. Please see the License for the specific terms
// and conditions governing the rights and limitations under the License.

//--------------------------------------------------------------------
//--------------------------------------------------------------------

#include <IGESBasic_Hierarchy.ixx>

IGESBasic_Hierarchy::IGESBasic_Hierarchy ()    {  }


    void  IGESBasic_Hierarchy::Init
  (const Standard_Integer nbPropVal,
   const Standard_Integer aLineFont,     const Standard_Integer aView,
   const Standard_Integer anEntityLevel, const Standard_Integer aBlankStatus,
   const Standard_Integer aLineWt,       const Standard_Integer aColorNum)
{
  theLineFont         = aLineFont;
  theView             = aView;
  theEntityLevel      = anEntityLevel;
  theBlankStatus      = aBlankStatus;
  theLineWeight       = aLineWt;
  theColorNum         = aColorNum;
  theNbPropertyValues = nbPropVal;
  InitTypeAndForm(406,10);
}


    Standard_Integer  IGESBasic_Hierarchy::NbPropertyValues () const
{
  return theNbPropertyValues;
}

    Standard_Integer  IGESBasic_Hierarchy::NewLineFont () const
{
  return theLineFont;
}

    Standard_Integer  IGESBasic_Hierarchy::NewView () const
{
  return theView;
}

    Standard_Integer  IGESBasic_Hierarchy::NewEntityLevel () const
{
  return theEntityLevel;
}

    Standard_Integer  IGESBasic_Hierarchy::NewBlankStatus () const
{
  return theBlankStatus;
}

    Standard_Integer  IGESBasic_Hierarchy::NewLineWeight () const
{
  return theLineWeight;
}

    Standard_Integer  IGESBasic_Hierarchy::NewColorNum () const
{
  return theColorNum;
}