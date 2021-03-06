/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSJSCallbackHandlerErrorReporter;
#import <SafariShared/SafariShared-Structs.h>
@class JSValue;

@interface WBSJSCallbackHandler : NSObject {

	OpaqueJSValueRef _callbackFunction;
	OpaqueJSValueRef _rejectFunction;
	id<WBSJSCallbackHandlerErrorReporter> _errorReporter;
	JSRetainPtr<OpaqueJSContext *>* _globalContext;

}

@property (nonatomic,readonly) OpaqueJSContextRef globalContext; 
@property (nonatomic,readonly) JSValue * jsValue; 
-(id)call;
-(id)callWithArgument:(id)arg1 argument:(id)arg2 ;
-(id)callWithArgument:(id)arg1 argument:(id)arg2 argument:(id)arg3 ;
-(void)dealloc;
-(JSValue *)jsValue;
-(OpaqueJSContextRef)globalContext;
-(id)initWithCallbackFunction:(OpaqueJSValueRef)arg1 errorReporter:(id)arg2 context:(OpaqueJSContextRef)arg3 ;
-(id)initWithErrorReporter:(id)arg1 context:(OpaqueJSContextRef)arg2 ;
-(id)initWithPromiseResolveFunction:(OpaqueJSValueRef)arg1 rejectFunction:(OpaqueJSValueRef)arg2 context:(OpaqueJSContextRef)arg3 ;
-(void)reportErrorWithMessage:(id)arg1 ;
-(id)callWithArgument:(id)arg1 ;
@end

