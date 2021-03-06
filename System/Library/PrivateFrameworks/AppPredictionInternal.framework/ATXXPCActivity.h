/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXActivityDeferrableProtocol.h>

@protocol OS_xpc_object, OS_os_log;
@class NSObject, NSString;

@interface ATXXPCActivity : NSObject <ATXActivityDeferrableProtocol> {

	NSObject*<OS_xpc_object> _activity;
	NSString* _name;
	NSObject*<OS_os_log> _handle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldDefer;
-(id)init;
-(BOOL)didDefer;
-(id)initWithActivity:(id)arg1 name:(id)arg2 logHandle:(id)arg3 ;
-(id)initWithActivity:(id)arg1 name:(id)arg2 ;
@end

