/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFAssertion.h>

@protocol OS_os_transaction;
@class NSObject;

@interface HMFMemoryAssertion : HMFAssertion {

	NSObject*<OS_os_transaction> _internal;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> internal;              //@synthesize internal=_internal - In the implementation block
-(NSObject*<OS_os_transaction>)internal;
-(void)mark;
-(void)setInternal:(NSObject*<OS_os_transaction>)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)invalidate;
@end
