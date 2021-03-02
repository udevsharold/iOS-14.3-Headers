/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCOperationRetrySignal.h>

@protocol OS_dispatch_group;
@class NSObject, NSString;

@interface FCOperationExternalSignal : NSObject <FCOperationRetrySignal> {

	BOOL _result;
	NSObject*<OS_dispatch_group> _group;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)triggerWithRetry:(BOOL)arg1 ;
-(void)onQueue:(id)arg1 signal:(/*^block*/id)arg2 ;
@end
