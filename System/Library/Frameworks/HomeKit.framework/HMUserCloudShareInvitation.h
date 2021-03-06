/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, CKDeviceToDeviceShareInvitationToken, NSString, HMHome, HMUser;

@interface HMUserCloudShareInvitation : NSObject {

	NSURL* _shareURL;
	CKDeviceToDeviceShareInvitationToken* _shareToken;
	NSString* _containerID;
	HMHome* _home;
	HMUser* _user;
	HMUser* _fromUser;

}

@property (readonly) NSURL * shareURL;                                               //@synthesize shareURL=_shareURL - In the implementation block
@property (readonly) CKDeviceToDeviceShareInvitationToken * shareToken;              //@synthesize shareToken=_shareToken - In the implementation block
@property (readonly) NSString * containerID;                                         //@synthesize containerID=_containerID - In the implementation block
@property (readonly) HMHome * home;                                                  //@synthesize home=_home - In the implementation block
@property (readonly) HMUser * user;                                                  //@synthesize user=_user - In the implementation block
@property (readonly) HMUser * fromUser;                                              //@synthesize fromUser=_fromUser - In the implementation block
-(HMUser *)user;
-(NSURL *)shareURL;
-(NSString *)containerID;
-(HMHome *)home;
-(HMUser *)fromUser;
-(id)initWithUser:(id)arg1 URL:(id)arg2 shareToken:(id)arg3 containerID:(id)arg4 forHome:(id)arg5 fromUser:(id)arg6 ;
-(CKDeviceToDeviceShareInvitationToken *)shareToken;
@end

