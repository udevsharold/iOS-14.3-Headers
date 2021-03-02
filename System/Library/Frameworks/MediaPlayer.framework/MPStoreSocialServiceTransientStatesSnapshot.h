/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject {

	NSMutableDictionary* _transientFollowStatesPerProfileID;
	NSMutableDictionary* _transientFollowPendingRequestStatesPerProfileID;

}
-(id)init;
-(long long)transientFollowStateForPerson:(id)arg1 ;
-(long long)transientFollowPendingRequestStateForPerson:(id)arg1 ;
-(void)_addTransientFollowState:(long long)arg1 transientFollowPendingRequestState:(long long)arg2 forPerson:(id)arg3 ;
@end
