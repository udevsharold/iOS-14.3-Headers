/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKAppletSubcredentialSharingInvitation;

@interface PKPendingInvitationRequest : NSObject {

	/*^block*/id _completion;
	PKAppletSubcredentialSharingInvitation* _invitation;

}

@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
-(id)initWithInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeCompletionWithInvitation:(id)arg1 error:(id)arg2 ;
-(PKAppletSubcredentialSharingInvitation *)invitation;
@end

