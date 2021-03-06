#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "DDData.h"
#import "DDNumber.h"
#import "DDRange.h"
#import "HTTPAuthenticationRequest.h"
#import "HTTPConnection.h"
#import "HTTPLogging.h"
#import "HTTPMessage.h"
#import "HTTPServer.h"
#import "IRCocoaHTTPServer.h"
#import "MultipartFormDataParser.h"
#import "MultipartMessageHeader.h"
#import "MultipartMessageHeaderField.h"
#import "HTTPAsyncFileResponse.h"
#import "HTTPDataResponse.h"
#import "HTTPDynamicFileResponse.h"
#import "HTTPErrorResponse.h"
#import "HTTPFileResponse.h"
#import "HTTPRedirectResponse.h"
#import "HTTPResponse.h"
#import "WebSocket.h"

FOUNDATION_EXPORT double ZYCocoaHTTPServerVersionNumber;
FOUNDATION_EXPORT const unsigned char ZYCocoaHTTPServerVersionString[];

