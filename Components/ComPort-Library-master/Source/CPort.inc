{ ComPort Library global definitions }

{ Fixed up for Delphi 2009 by W.Postma. }

{$B-}
{$X+}
{$H+}

{$IFDEF VER110}     { C++ Builder 3 }
  {$ObjExportAll On}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER120}     { Delphi 4 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_4}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER125}     { C++ Builder 4 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_4}
  {$ObjExportAll On}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER130}     { Delphi 5 and C++ Builder 5 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_5}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER140}     { Delphi 6 and C++ Builder 6}
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_6}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER150}     { Delphi 7 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_7}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER160}     { Delphi 8  }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_8_OR_HIGHER}
  {$DEFINE DELPHI_8}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER170}     { Delphi 9 (2005) }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_8_OR_HIGHER}
  {$DEFINE DELPHI_2005_OR_HIGHER}
  {$DEFINE DELPHI_2005}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER180}     { Delphi 10 (2006) }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_8_OR_HIGHER}
  {$DEFINE DELPHI_2005_OR_HIGHER}
  {$DEFINE DELPHI_2006_OR_HIGHER}
  {$DEFINE DELPHI_2006}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER185}     { Delphi 11 - 2007 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_8_OR_HIGHER}
  {$DEFINE DELPHI_2005_OR_HIGHER}
  {$DEFINE DELPHI_2006_OR_HIGHER}
  {$DEFINE DELPHI_2007_OR_HIGHER}
  {$DEFINE DELPHI_2007}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
   {$IFDEF BCB}
          {$DEFINE BCB11}
          {$ObjExportAll On}
   {$ENDIF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER190}     { Delphi 12 2008 }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_8_OR_HIGHER}
  {$DEFINE DELPHI_2005_OR_HIGHER}
  {$DEFINE DELPHI_2006_OR_HIGHER}
  {$DEFINE DELPHI_2007_OR_HIGHER}
  {$DEFINE DELPHI_2008_OR_HIGHER}
  {$DEFINE DELPHI_2008}
  {$DEFINE DELPHI_UNICODE}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER200}     { Delphi 14 2009 UNICODE }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_8_OR_HIGHER}
  {$DEFINE DELPHI_2005_OR_HIGHER}
  {$DEFINE DELPHI_2006_OR_HIGHER}
  {$DEFINE DELPHI_2007_OR_HIGHER}
  {$DEFINE DELPHI_2008_OR_HIGHER}
  {$DEFINE DELPHI_2009_OR_HIGHER}
  {$DEFINE DELPHI_2009}
  {$DEFINE DELPHI_UNICODE}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER210}     { Delphi 15 XE 2010 UNICODE }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_8_OR_HIGHER}
  {$DEFINE DELPHI_2005_OR_HIGHER}
  {$DEFINE DELPHI_2006_OR_HIGHER}
  {$DEFINE DELPHI_2007_OR_HIGHER}
  {$DEFINE DELPHI_2008_OR_HIGHER}
  {$DEFINE DELPHI_2009_OR_HIGHER}
  {$DEFINE DELPHI_2010_OR_HIGHER}
  {$DEFINE DELPHI_2010}
  {$DEFINE DELPHI_UNICODE}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}

{$IFDEF VER220}     { Delphi 16 XE2 2010 UNICODE }
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_8_OR_HIGHER}
  {$DEFINE DELPHI_2005_OR_HIGHER}
  {$DEFINE DELPHI_2006_OR_HIGHER}
  {$DEFINE DELPHI_2007_OR_HIGHER}
  {$DEFINE DELPHI_2008_OR_HIGHER}
  {$DEFINE DELPHI_2009_OR_HIGHER}
  {$DEFINE DELPHI_2010_OR_HIGHER}
  {$DEFINE DELPHI_2010}
  {$DEFINE DELPHI_UNICODE}
  {$IFDEF BCBNOTDELPHI}
    {$ObjExportAll On}
  {$ENDIF}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
  {$DEFINE VER_RECOGNIZED}
{$ENDIF}


{... Lets try to make it work, for Delphi 2011 and later, right now...}
{$IFNDEF VER_RECOGNIZED}
  {$DEFINE DELPHI_4_OR_HIGHER}
  {$DEFINE DELPHI_5_OR_HIGHER}
  {$DEFINE DELPHI_6_OR_HIGHER}
  {$DEFINE DELPHI_7_OR_HIGHER}
  {$DEFINE DELPHI_8_OR_HIGHER}
  {$DEFINE DELPHI_2005_OR_HIGHER}
  {$DEFINE DELPHI_2006_OR_HIGHER}
  {$DEFINE DELPHI_2007_OR_HIGHER}
  {$DEFINE DELPHI_2009_OR_HIGHER}
  {$DEFINE DELPHI_2010_OR_HIGHER}
  {$DEFINE DELPHI_UNICODE}
  {$WARN UNSAFE_TYPE OFF}
  {$WARN UNSAFE_CODE OFF}
  {$WARN UNSAFE_CAST OFF}
{$ENDIF}

{$UNDEF VER_RECOGNIZED}