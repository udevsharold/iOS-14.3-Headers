/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol UIDragInteractionContext <UIInteractionContext>
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) BOOL shouldAnimateLift; 
@property (nonatomic,readonly) id animations; 
@property (nonatomic,readonly) id completion; 
@required
-(BOOL)shouldAnimateLift;
-(id)animations;
-(long long)state;
-(NSArray *)items;
-(id)completion;

@end
