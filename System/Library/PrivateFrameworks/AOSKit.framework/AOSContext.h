/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AOSKit/AOSKit-Structs.h>
#import <libobjc.A.dylib/NSPortDelegate.h>

@class NSThread, NSString;

@interface AOSContext : NSObject <NSPortDelegate> {

	AOSAccountRef _account;
	AOSTransactionC* _transaction;
	/*function pointer*/void* _callback;
	NSThread* _callbackThread;
	id _info;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithAccount:(AOSAccountRef)arg1 andTransaction:(AOSTransactionC*)arg2 ;
-(void)setAccount:(AOSAccountRef)arg1 ;
-(void)setInfo:(id)arg1 ;
-(id)init;
-(AOSAccountRef)account;
-(id)info;
-(void)dealloc;
-(void)setTransaction:(AOSTransactionC*)arg1 ;
-(void)finalize;
-(AOSTransactionC*)transaction;
-(id)_callbackThread;
-(void)_performCallback;
-(BOOL)scheduleCallback;
@end
