/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FLFollowUpController;

@interface SSFollowUpController : NSObject {

	FLFollowUpController* _followUpController;

}

@property (nonatomic,retain) FLFollowUpController * followUpController;              //@synthesize followUpController=_followUpController - In the implementation block
+(id)sharedController;
-(id)init;
-(id)dismissFollowUpWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)pendingFollowUpWithIdentifier:(id)arg1 ;
-(id)_dismissFollowUpWithIdentifier:(id)arg1 ;
-(id)_postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)postFollowUpWithIdentifier:(id)arg1 account:(id)arg2 userInfo:(id)arg3 ;
-(id)dismissFollowUpWithIdentifier:(id)arg1 ;
-(id)_createFollowUpItemForRenewCredentialsWithUserInfo:(id)arg1 ;
-(id)_createFollowUpItemForIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(id)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)setFollowUpController:(FLFollowUpController *)arg1 ;
-(FLFollowUpController *)followUpController;
@end
