// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// A portion of this file was generated by the CEF translator tool.  When
// making changes by hand only do so within the body of existing static and
// virtual method implementations. See the translator.README.txt file in the
// tools directory for more information.
//

#include "libcef_dll/ctocpp/browser_ctocpp.h"
#include "libcef_dll/ctocpp/frame_ctocpp.h"
#include "libcef_dll/ctocpp/v8context_ctocpp.h"
#include "libcef_dll/ctocpp/v8value_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefV8Context> CefV8Context::GetCurrentContext()
{
  cef_v8context_t* impl = cef_v8context_get_current_context();
  if(impl)
    return CefV8ContextCToCpp::Wrap(impl);
  return NULL;
}

CefRefPtr<CefV8Context> CefV8Context::GetEnteredContext()
{
  cef_v8context_t* impl = cef_v8context_get_entered_context();
  if(impl)
    return CefV8ContextCToCpp::Wrap(impl);
  return NULL;
}


// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefBrowser> CefV8ContextCToCpp::GetBrowser()
{
  if(CEF_MEMBER_MISSING(struct_, get_browser))
    return NULL;

  cef_browser_t* browserStruct = struct_->get_browser(struct_);
  if(browserStruct)
    return CefBrowserCToCpp::Wrap(browserStruct);

  return NULL;
}

CefRefPtr<CefFrame> CefV8ContextCToCpp::GetFrame()
{
  if(CEF_MEMBER_MISSING(struct_, get_frame))
    return NULL;

  cef_frame_t* frameStruct = struct_->get_frame(struct_);
  if(frameStruct)
    return CefFrameCToCpp::Wrap(frameStruct);

  return NULL;
}

CefRefPtr<CefV8Value> CefV8ContextCToCpp::GetGlobal()
{
  if(CEF_MEMBER_MISSING(struct_, get_global))
    return NULL;

  cef_v8value_t* v8valueStruct = struct_->get_global(struct_);
  if(v8valueStruct)
    return CefV8ValueCToCpp::Wrap(v8valueStruct);

  return NULL;
}

bool CefV8ContextCToCpp::Enter()
{
  if(CEF_MEMBER_MISSING(struct_, enter))
    return false;

  return struct_->enter(struct_)?true:false;
}

bool CefV8ContextCToCpp::Exit()
{
  if(CEF_MEMBER_MISSING(struct_, exit))
    return false;

  return struct_->exit(struct_)?true:false;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefV8ContextCToCpp, CefV8Context,
    cef_v8context_t>::DebugObjCt = 0;
#endif

