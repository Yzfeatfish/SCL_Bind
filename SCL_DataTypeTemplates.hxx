// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef SCL_DATA_TYPE_TEMPLATES_HXX
#define SCL_DATA_TYPE_TEMPLATES_HXX

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 3030000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< char, ncname, type > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::auto_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
namespace SCL
{
  class tAbstractDataAttribute;
  class tLNodeType;
  class tDO;
  class tDOType;
  class tSDO;
  class tDA;
  class tDAType;
  class tBDA;
  class tEnumType;
  class tEnumVal;
  class tDataTypeTemplates;
}


#include <memory>    // std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "SCL_BaseTypes.hxx"

namespace SCL
{
  class tAbstractDataAttribute: public ::SCL::tUnNaming
  {
    public:
    // Val
    // 
    typedef ::SCL::tVal Val_type;
    typedef ::xsd::cxx::tree::sequence< Val_type > Val_sequence;
    typedef Val_sequence::iterator Val_iterator;
    typedef Val_sequence::const_iterator Val_const_iterator;
    typedef ::xsd::cxx::tree::traits< Val_type, char > Val_traits;

    const Val_sequence&
    Val () const;

    Val_sequence&
    Val ();

    void
    Val (const Val_sequence& s);

    // name
    // 
    typedef ::SCL::tAttributeNameEnum name_type;
    typedef ::xsd::cxx::tree::traits< name_type, char > name_traits;

    const name_type&
    name () const;

    name_type&
    name ();

    void
    name (const name_type& x);

    void
    name (::std::auto_ptr< name_type > p);

    // sAddr
    // 
    typedef ::xml_schema::normalized_string sAddr_type;
    typedef ::xsd::cxx::tree::optional< sAddr_type > sAddr_optional;
    typedef ::xsd::cxx::tree::traits< sAddr_type, char > sAddr_traits;

    const sAddr_optional&
    sAddr () const;

    sAddr_optional&
    sAddr ();

    void
    sAddr (const sAddr_type& x);

    void
    sAddr (const sAddr_optional& x);

    void
    sAddr (::std::auto_ptr< sAddr_type > p);

    // bType
    // 
    typedef ::SCL::tBasicTypeEnum bType_type;
    typedef ::xsd::cxx::tree::traits< bType_type, char > bType_traits;

    const bType_type&
    bType () const;

    bType_type&
    bType ();

    void
    bType (const bType_type& x);

    void
    bType (::std::auto_ptr< bType_type > p);

    // valKind
    // 
    typedef ::SCL::tValKindEnum valKind_type;
    typedef ::xsd::cxx::tree::traits< valKind_type, char > valKind_traits;

    const valKind_type&
    valKind () const;

    valKind_type&
    valKind ();

    void
    valKind (const valKind_type& x);

    void
    valKind (::std::auto_ptr< valKind_type > p);

    static const valKind_type&
    valKind_default_value ();

    // type
    // 
    typedef ::SCL::tAnyName type_type;
    typedef ::xsd::cxx::tree::optional< type_type > type_optional;
    typedef ::xsd::cxx::tree::traits< type_type, char > type_traits;

    const type_optional&
    type () const;

    type_optional&
    type ();

    void
    type (const type_type& x);

    void
    type (const type_optional& x);

    void
    type (::std::auto_ptr< type_type > p);

    // count
    // 
    typedef ::xml_schema::unsigned_int count_type;
    typedef ::xsd::cxx::tree::traits< count_type, char > count_traits;

    const count_type&
    count () const;

    count_type&
    count ();

    void
    count (const count_type& x);

    static count_type
    count_default_value ();

    // Constructors.
    //
    tAbstractDataAttribute (const name_type&,
                            const bType_type&);

    tAbstractDataAttribute (const ::xercesc::DOMElement& e,
                            ::xml_schema::flags f = 0,
                            ::xml_schema::container* c = 0);

    tAbstractDataAttribute (const tAbstractDataAttribute& x,
                            ::xml_schema::flags f = 0,
                            ::xml_schema::container* c = 0);

    virtual tAbstractDataAttribute*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tAbstractDataAttribute ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    Val_sequence Val_;
    ::xsd::cxx::tree::one< name_type > name_;
    sAddr_optional sAddr_;
    ::xsd::cxx::tree::one< bType_type > bType_;
    ::xsd::cxx::tree::one< valKind_type > valKind_;
    static const valKind_type valKind_default_value_;
    type_optional type_;
    ::xsd::cxx::tree::one< count_type > count_;
  };

  class tLNodeType: public ::SCL::tIDNaming
  {
    public:
    // DO
    // 
    typedef ::SCL::tDO DO_type;
    typedef ::xsd::cxx::tree::sequence< DO_type > DO_sequence;
    typedef DO_sequence::iterator DO_iterator;
    typedef DO_sequence::const_iterator DO_const_iterator;
    typedef ::xsd::cxx::tree::traits< DO_type, char > DO_traits;

    const DO_sequence&
    DO () const;

    DO_sequence&
    DO ();

    void
    DO (const DO_sequence& s);

    // iedType
    // 
    typedef ::SCL::tAnyName iedType_type;
    typedef ::xsd::cxx::tree::traits< iedType_type, char > iedType_traits;

    const iedType_type&
    iedType () const;

    iedType_type&
    iedType ();

    void
    iedType (const iedType_type& x);

    void
    iedType (::std::auto_ptr< iedType_type > p);

    static const iedType_type&
    iedType_default_value ();

    // lnClass
    // 
    typedef ::SCL::tLNClassEnum lnClass_type;
    typedef ::xsd::cxx::tree::traits< lnClass_type, char > lnClass_traits;

    const lnClass_type&
    lnClass () const;

    lnClass_type&
    lnClass ();

    void
    lnClass (const lnClass_type& x);

    void
    lnClass (::std::auto_ptr< lnClass_type > p);

    // Constructors.
    //
    tLNodeType (const id_type&,
                const lnClass_type&);

    tLNodeType (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    tLNodeType (const tLNodeType& x,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    virtual tLNodeType*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tLNodeType ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    DO_sequence DO_;
    ::xsd::cxx::tree::one< iedType_type > iedType_;
    static const iedType_type iedType_default_value_;
    ::xsd::cxx::tree::one< lnClass_type > lnClass_;
  };

  class tDO: public ::SCL::tUnNaming
  {
    public:
    // name
    // 
    typedef ::SCL::tRestrName1stU name_type;
    typedef ::xsd::cxx::tree::traits< name_type, char > name_traits;

    const name_type&
    name () const;

    name_type&
    name ();

    void
    name (const name_type& x);

    void
    name (::std::auto_ptr< name_type > p);

    // type
    // 
    typedef ::SCL::tName type_type;
    typedef ::xsd::cxx::tree::traits< type_type, char > type_traits;

    const type_type&
    type () const;

    type_type&
    type ();

    void
    type (const type_type& x);

    void
    type (::std::auto_ptr< type_type > p);

    // accessControl
    // 
    typedef ::xml_schema::normalized_string accessControl_type;
    typedef ::xsd::cxx::tree::optional< accessControl_type > accessControl_optional;
    typedef ::xsd::cxx::tree::traits< accessControl_type, char > accessControl_traits;

    const accessControl_optional&
    accessControl () const;

    accessControl_optional&
    accessControl ();

    void
    accessControl (const accessControl_type& x);

    void
    accessControl (const accessControl_optional& x);

    void
    accessControl (::std::auto_ptr< accessControl_type > p);

    // transient
    // 
    typedef ::xml_schema::boolean transient_type;
    typedef ::xsd::cxx::tree::traits< transient_type, char > transient_traits;

    const transient_type&
    transient () const;

    transient_type&
    transient ();

    void
    transient (const transient_type& x);

    static transient_type
    transient_default_value ();

    // Constructors.
    //
    tDO (const name_type&,
         const type_type&);

    tDO (const ::xercesc::DOMElement& e,
         ::xml_schema::flags f = 0,
         ::xml_schema::container* c = 0);

    tDO (const tDO& x,
         ::xml_schema::flags f = 0,
         ::xml_schema::container* c = 0);

    virtual tDO*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tDO ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< name_type > name_;
    ::xsd::cxx::tree::one< type_type > type_;
    accessControl_optional accessControl_;
    ::xsd::cxx::tree::one< transient_type > transient_;
  };

  class tDOType: public ::SCL::tIDNaming
  {
    public:
    // SDO
    // 
    typedef ::SCL::tSDO SDO_type;
    typedef ::xsd::cxx::tree::sequence< SDO_type > SDO_sequence;
    typedef SDO_sequence::iterator SDO_iterator;
    typedef SDO_sequence::const_iterator SDO_const_iterator;
    typedef ::xsd::cxx::tree::traits< SDO_type, char > SDO_traits;

    const SDO_sequence&
    SDO () const;

    SDO_sequence&
    SDO ();

    void
    SDO (const SDO_sequence& s);

    // DA
    // 
    typedef ::SCL::tDA DA_type;
    typedef ::xsd::cxx::tree::sequence< DA_type > DA_sequence;
    typedef DA_sequence::iterator DA_iterator;
    typedef DA_sequence::const_iterator DA_const_iterator;
    typedef ::xsd::cxx::tree::traits< DA_type, char > DA_traits;

    const DA_sequence&
    DA () const;

    DA_sequence&
    DA ();

    void
    DA (const DA_sequence& s);

    // iedType
    // 
    typedef ::SCL::tAnyName iedType_type;
    typedef ::xsd::cxx::tree::traits< iedType_type, char > iedType_traits;

    const iedType_type&
    iedType () const;

    iedType_type&
    iedType ();

    void
    iedType (const iedType_type& x);

    void
    iedType (::std::auto_ptr< iedType_type > p);

    static const iedType_type&
    iedType_default_value ();

    // cdc
    // 
    typedef ::SCL::tCDCEnum cdc_type;
    typedef ::xsd::cxx::tree::traits< cdc_type, char > cdc_traits;

    const cdc_type&
    cdc () const;

    cdc_type&
    cdc ();

    void
    cdc (const cdc_type& x);

    void
    cdc (::std::auto_ptr< cdc_type > p);

    // Constructors.
    //
    tDOType (const id_type&,
             const cdc_type&);

    tDOType (const ::xercesc::DOMElement& e,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    tDOType (const tDOType& x,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    virtual tDOType*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tDOType ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    SDO_sequence SDO_;
    DA_sequence DA_;
    ::xsd::cxx::tree::one< iedType_type > iedType_;
    static const iedType_type iedType_default_value_;
    ::xsd::cxx::tree::one< cdc_type > cdc_;
  };

  class tSDO: public ::SCL::tNaming
  {
    public:
    // type
    // 
    typedef ::SCL::tName type_type;
    typedef ::xsd::cxx::tree::traits< type_type, char > type_traits;

    const type_type&
    type () const;

    type_type&
    type ();

    void
    type (const type_type& x);

    void
    type (::std::auto_ptr< type_type > p);

    // Constructors.
    //
    tSDO (const name_type&,
          const type_type&);

    tSDO (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    tSDO (const tSDO& x,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    virtual tSDO*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tSDO ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< type_type > type_;
  };

  class tDA: public ::SCL::tAbstractDataAttribute
  {
    public:
    // dchg
    // 
    typedef ::xml_schema::boolean dchg_type;
    typedef ::xsd::cxx::tree::traits< dchg_type, char > dchg_traits;

    const dchg_type&
    dchg () const;

    dchg_type&
    dchg ();

    void
    dchg (const dchg_type& x);

    static dchg_type
    dchg_default_value ();

    // qchg
    // 
    typedef ::xml_schema::boolean qchg_type;
    typedef ::xsd::cxx::tree::traits< qchg_type, char > qchg_traits;

    const qchg_type&
    qchg () const;

    qchg_type&
    qchg ();

    void
    qchg (const qchg_type& x);

    static qchg_type
    qchg_default_value ();

    // dupd
    // 
    typedef ::xml_schema::boolean dupd_type;
    typedef ::xsd::cxx::tree::traits< dupd_type, char > dupd_traits;

    const dupd_type&
    dupd () const;

    dupd_type&
    dupd ();

    void
    dupd (const dupd_type& x);

    static dupd_type
    dupd_default_value ();

    // fc
    // 
    typedef ::SCL::tFCEnum fc_type;
    typedef ::xsd::cxx::tree::traits< fc_type, char > fc_traits;

    const fc_type&
    fc () const;

    fc_type&
    fc ();

    void
    fc (const fc_type& x);

    void
    fc (::std::auto_ptr< fc_type > p);

    // Constructors.
    //
    tDA (const name_type&,
         const bType_type&,
         const fc_type&);

    tDA (const ::xercesc::DOMElement& e,
         ::xml_schema::flags f = 0,
         ::xml_schema::container* c = 0);

    tDA (const tDA& x,
         ::xml_schema::flags f = 0,
         ::xml_schema::container* c = 0);

    virtual tDA*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tDA ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< dchg_type > dchg_;
    ::xsd::cxx::tree::one< qchg_type > qchg_;
    ::xsd::cxx::tree::one< dupd_type > dupd_;
    ::xsd::cxx::tree::one< fc_type > fc_;
  };

  class tDAType: public ::SCL::tIDNaming
  {
    public:
    // BDA
    // 
    typedef ::SCL::tBDA BDA_type;
    typedef ::xsd::cxx::tree::sequence< BDA_type > BDA_sequence;
    typedef BDA_sequence::iterator BDA_iterator;
    typedef BDA_sequence::const_iterator BDA_const_iterator;
    typedef ::xsd::cxx::tree::traits< BDA_type, char > BDA_traits;

    const BDA_sequence&
    BDA () const;

    BDA_sequence&
    BDA ();

    void
    BDA (const BDA_sequence& s);

    // iedType
    // 
    typedef ::SCL::tAnyName iedType_type;
    typedef ::xsd::cxx::tree::traits< iedType_type, char > iedType_traits;

    const iedType_type&
    iedType () const;

    iedType_type&
    iedType ();

    void
    iedType (const iedType_type& x);

    void
    iedType (::std::auto_ptr< iedType_type > p);

    static const iedType_type&
    iedType_default_value ();

    // Constructors.
    //
    tDAType (const id_type&);

    tDAType (const ::xercesc::DOMElement& e,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    tDAType (const tDAType& x,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    virtual tDAType*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tDAType ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    BDA_sequence BDA_;
    ::xsd::cxx::tree::one< iedType_type > iedType_;
    static const iedType_type iedType_default_value_;
  };

  class tBDA: public ::SCL::tAbstractDataAttribute
  {
    public:
    // Constructors.
    //
    tBDA (const name_type&,
          const bType_type&);

    tBDA (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    tBDA (const tBDA& x,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    virtual tBDA*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tBDA ();
  };

  class tEnumType: public ::SCL::tIDNaming
  {
    public:
    // EnumVal
    // 
    typedef ::SCL::tEnumVal EnumVal_type;
    typedef ::xsd::cxx::tree::sequence< EnumVal_type > EnumVal_sequence;
    typedef EnumVal_sequence::iterator EnumVal_iterator;
    typedef EnumVal_sequence::const_iterator EnumVal_const_iterator;
    typedef ::xsd::cxx::tree::traits< EnumVal_type, char > EnumVal_traits;

    const EnumVal_sequence&
    EnumVal () const;

    EnumVal_sequence&
    EnumVal ();

    void
    EnumVal (const EnumVal_sequence& s);

    // Constructors.
    //
    tEnumType (const id_type&);

    tEnumType (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    tEnumType (const tEnumType& x,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    virtual tEnumType*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tEnumType ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    EnumVal_sequence EnumVal_;
  };

  class tEnumVal: public ::xml_schema::normalized_string
  {
    public:
    // ord
    // 
    typedef ::xml_schema::integer ord_type;
    typedef ::xsd::cxx::tree::traits< ord_type, char > ord_traits;

    const ord_type&
    ord () const;

    ord_type&
    ord ();

    void
    ord (const ord_type& x);

    // Constructors.
    //
    tEnumVal (const ord_type&);

    tEnumVal (const char*,
              const ord_type&);

    tEnumVal (const ::std::string&,
              const ord_type&);

    tEnumVal (const ::xml_schema::normalized_string&,
              const ord_type&);

    tEnumVal (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    tEnumVal (const tEnumVal& x,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    virtual tEnumVal*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tEnumVal ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< ord_type > ord_;
  };

  class tDataTypeTemplates: public ::xml_schema::type
  {
    public:
    // LNodeType
    // 
    typedef ::SCL::tLNodeType LNodeType_type;
    typedef ::xsd::cxx::tree::sequence< LNodeType_type > LNodeType_sequence;
    typedef LNodeType_sequence::iterator LNodeType_iterator;
    typedef LNodeType_sequence::const_iterator LNodeType_const_iterator;
    typedef ::xsd::cxx::tree::traits< LNodeType_type, char > LNodeType_traits;

    const LNodeType_sequence&
    LNodeType () const;

    LNodeType_sequence&
    LNodeType ();

    void
    LNodeType (const LNodeType_sequence& s);

    // DOType
    // 
    typedef ::SCL::tDOType DOType_type;
    typedef ::xsd::cxx::tree::sequence< DOType_type > DOType_sequence;
    typedef DOType_sequence::iterator DOType_iterator;
    typedef DOType_sequence::const_iterator DOType_const_iterator;
    typedef ::xsd::cxx::tree::traits< DOType_type, char > DOType_traits;

    const DOType_sequence&
    DOType () const;

    DOType_sequence&
    DOType ();

    void
    DOType (const DOType_sequence& s);

    // DAType
    // 
    typedef ::SCL::tDAType DAType_type;
    typedef ::xsd::cxx::tree::sequence< DAType_type > DAType_sequence;
    typedef DAType_sequence::iterator DAType_iterator;
    typedef DAType_sequence::const_iterator DAType_const_iterator;
    typedef ::xsd::cxx::tree::traits< DAType_type, char > DAType_traits;

    const DAType_sequence&
    DAType () const;

    DAType_sequence&
    DAType ();

    void
    DAType (const DAType_sequence& s);

    // EnumType
    // 
    typedef ::SCL::tEnumType EnumType_type;
    typedef ::xsd::cxx::tree::sequence< EnumType_type > EnumType_sequence;
    typedef EnumType_sequence::iterator EnumType_iterator;
    typedef EnumType_sequence::const_iterator EnumType_const_iterator;
    typedef ::xsd::cxx::tree::traits< EnumType_type, char > EnumType_traits;

    const EnumType_sequence&
    EnumType () const;

    EnumType_sequence&
    EnumType ();

    void
    EnumType (const EnumType_sequence& s);

    // Constructors.
    //
    tDataTypeTemplates ();

    tDataTypeTemplates (const ::xercesc::DOMElement& e,
                        ::xml_schema::flags f = 0,
                        ::xml_schema::container* c = 0);

    tDataTypeTemplates (const tDataTypeTemplates& x,
                        ::xml_schema::flags f = 0,
                        ::xml_schema::container* c = 0);

    virtual tDataTypeTemplates*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tDataTypeTemplates ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    LNodeType_sequence LNodeType_;
    DOType_sequence DOType_;
    DAType_sequence DAType_;
    EnumType_sequence EnumType_;
  };
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace SCL
{
  // Parse a URI or a local file.
  //

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (const ::std::string& uri,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (const ::std::string& uri,
                     ::xml_schema::error_handler& eh,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (const ::std::string& uri,
                     ::xercesc::DOMErrorHandler& eh,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse std::istream.
  //

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::std::istream& is,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::std::istream& is,
                     ::xml_schema::error_handler& eh,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::std::istream& is,
                     ::xercesc::DOMErrorHandler& eh,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::std::istream& is,
                     const ::std::string& id,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::std::istream& is,
                     const ::std::string& id,
                     ::xml_schema::error_handler& eh,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::std::istream& is,
                     const ::std::string& id,
                     ::xercesc::DOMErrorHandler& eh,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse xercesc::InputSource.
  //

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::xercesc::InputSource& is,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::xercesc::InputSource& is,
                     ::xml_schema::error_handler& eh,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::xercesc::InputSource& is,
                     ::xercesc::DOMErrorHandler& eh,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse xercesc::DOMDocument.
  //

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (const ::xercesc::DOMDocument& d,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tDataTypeTemplates >
  DataTypeTemplates (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >& d,
                     ::xml_schema::flags f = 0,
                     const ::xml_schema::properties& p = ::xml_schema::properties ());
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SCL_DATA_TYPE_TEMPLATES_HXX
