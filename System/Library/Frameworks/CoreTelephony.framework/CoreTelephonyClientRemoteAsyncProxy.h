/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/CTXPCServiceInterface.h>

@protocol CTXPCServiceInterface;
@class NSObject, NSString;

@interface CoreTelephonyClientRemoteAsyncProxy : NSProxy <CTXPCServiceInterface> {

	NSObject*<CTXPCServiceInterface> _target;
	queue* _userQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)forwardInvocation:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithXPCObject:(id)arg1 userQueue:(queue*)arg2 errorHandler:(/*^block*/id)arg3 ;
@end
