#import <UIKit/UIKit.h>

#if __has_include(<React/RCTBridge.h>)
#import <React/RCTLog.h>
#import <React/RCTConvert.h>
#import <React/RCTBridge.h>
#import <React/RCTUtils.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTBridgeModule.h>
#elif __has_include("RCTBridge.h")
#import "RCTEventDispatcher.h"
#import "RCTBridgeModule.h"
#import "RCTBridge.h"
#import "RCTUtils.h"
#import "RCTConvert.h"
#import "RCTLog.h"
#elif __has_include("React/RCTBridge.h")
#import "React/RCTEventDispatcher.h"
#import "React/RCTBridgeModule.hh"
#import "React/RCTBridge.h"
#import "React/RCTUtils.h"
#import "React/RCTConvert.h"
#import "React/RCTLog.h"
#endif

@interface RNAlipay : NSObject <RCTBridgeModule>

+ (instancetype) shareInstance;

+ (BOOL)handleOpenURL:(NSURL *)url;

@end
