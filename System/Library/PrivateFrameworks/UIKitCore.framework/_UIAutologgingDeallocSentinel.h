/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIAutologgingDeallocSentinel : NSObject {

	BOOL _called;
	NSString* _message;

}

@property (nonatomic,copy) NSString * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL called;                   //@synthesize called=_called - In the implementation block
-(BOOL)called;
-(NSString *)message;
-(void)dealloc;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCalled:(BOOL)arg1 ;
@end

