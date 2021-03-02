/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSwitcherModifierEventSnapshot, SBSwitcherModifierStackSnapshot, SBSwitcherModifierEventResponseSnapshot;

@interface SBSwitcherModifierTimelineEntry : NSObject {

	SBSwitcherModifierEventSnapshot* _eventSnapshot;
	SBSwitcherModifierStackSnapshot* _postEventStackSnapshot;
	SBSwitcherModifierEventResponseSnapshot* _responseSnapshot;

}

@property (nonatomic,retain) SBSwitcherModifierEventSnapshot * eventSnapshot;                         //@synthesize eventSnapshot=_eventSnapshot - In the implementation block
@property (nonatomic,retain) SBSwitcherModifierStackSnapshot * postEventStackSnapshot;                //@synthesize postEventStackSnapshot=_postEventStackSnapshot - In the implementation block
@property (nonatomic,retain) SBSwitcherModifierEventResponseSnapshot * responseSnapshot;              //@synthesize responseSnapshot=_responseSnapshot - In the implementation block
-(SBSwitcherModifierEventSnapshot *)eventSnapshot;
-(SBSwitcherModifierEventResponseSnapshot *)responseSnapshot;
-(SBSwitcherModifierStackSnapshot *)postEventStackSnapshot;
-(void)setEventSnapshot:(SBSwitcherModifierEventSnapshot *)arg1 ;
-(void)setPostEventStackSnapshot:(SBSwitcherModifierStackSnapshot *)arg1 ;
-(void)setResponseSnapshot:(SBSwitcherModifierEventResponseSnapshot *)arg1 ;
@end
