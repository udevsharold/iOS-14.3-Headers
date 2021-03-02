/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class SBHomeGestureParticipant, NSString;

@interface SBHomeGestureArbiterRecipe : NSObject <SBTestRecipe> {

	SBHomeGestureParticipant* _participant;

}

@property (nonatomic,retain) SBHomeGestureParticipant * participant;              //@synthesize participant=_participant - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(void)setParticipant:(SBHomeGestureParticipant *)arg1 ;
-(SBHomeGestureParticipant *)participant;
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
@end
