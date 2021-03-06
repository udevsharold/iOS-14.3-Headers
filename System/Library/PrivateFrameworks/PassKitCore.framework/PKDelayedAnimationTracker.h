/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, NSString;

@interface PKDelayedAnimationTracker : NSObject {

	CALayer* _layer;
	NSString* _key;
	/*^block*/id _removalAction;

}

@property (nonatomic,__weak,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) id removalAction;                        //@synthesize removalAction=_removalAction - In the implementation block
-(NSString *)key;
-(id)init;
-(id)initWithLayer:(id)arg1 key:(id)arg2 ;
-(CALayer *)layer;
-(void)removeAnimationIfPossible;
-(id)removalAction;
-(void)setRemovalAction:(id)arg1 ;
@end

