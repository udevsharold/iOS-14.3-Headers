/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSTransaction.h>

@class NSString;

@interface BSBlockTransaction : BSTransaction {

	/*^block*/id _block;
	NSString* _debugName;

}

@property (nonatomic,copy) NSString * debugName;              //@synthesize debugName=_debugName - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)_descriptionProem;
-(void)_begin;
-(NSString *)debugName;
-(id)_graphNodeDebugName;
-(void)setDebugName:(NSString *)arg1 ;
@end

