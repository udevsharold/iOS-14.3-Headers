/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYDClientProtocol.h>

@protocol SYDClientProtocol;
@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol> {

	id<SYDClientProtocol> _target;

}

@property (assign,nonatomic,__weak) id<SYDClientProtocol> target;              //@synthesize target=_target - In the implementation block
-(id)initWithTarget:(id)arg1 ;
-(id<SYDClientProtocol>)target;
-(void)setTarget:(id<SYDClientProtocol>)arg1 ;
-(void)storeDidChangeWithConfiguration:(id)arg1 changeDictionary:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

