/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASFriend, _HKFitnessFriendActivitySnapshot;

@interface ASFriendListRow : NSObject {

	ASFriend* _friend;
	_HKFitnessFriendActivitySnapshot* _snapshot;

}

@property (nonatomic,retain) ASFriend * friend;                                        //@synthesize friend=_friend - In the implementation block
@property (nonatomic,retain) _HKFitnessFriendActivitySnapshot * snapshot;              //@synthesize snapshot=_snapshot - In the implementation block
-(_HKFitnessFriendActivitySnapshot *)snapshot;
-(ASFriend *)friend;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSnapshot:(_HKFitnessFriendActivitySnapshot *)arg1 ;
-(void)setFriend:(ASFriend *)arg1 ;
@end

