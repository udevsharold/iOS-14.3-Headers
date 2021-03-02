/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKProtobufSubcredentialInvitationMessage, MSMessage, PKAppletSubcredentialSharingInvitation, NSString;

@interface PKSubcredentialInvitationMessage : NSObject {

	PKProtobufSubcredentialInvitationMessage* _protoMessage;
	MSMessage* _underlyingMessage;

}

@property (nonatomic,readonly) MSMessage * underlyingMessage;                                     //@synthesize underlyingMessage=_underlyingMessage - In the implementation block
@property (nonatomic,copy) PKAppletSubcredentialSharingInvitation * phoneInvitation; 
@property (nonatomic,copy) PKAppletSubcredentialSharingInvitation * watchInvitation; 
@property (nonatomic,copy) NSString * dataString; 
@property (assign,nonatomic) unsigned long long status; 
@property (nonatomic,copy) NSString * uniqueIdentifier; 
-(id)init;
-(id)initWithUnderlyingMessage:(id)arg1 ;
-(void)_updateDataURL;
-(void)_updateLayoutContents;
-(MSMessage *)underlyingMessage;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(unsigned long long)status;
-(NSString *)uniqueIdentifier;
-(id)description;
-(void)setPhoneInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(void)setDataString:(NSString *)arg1 ;
-(void)setWatchInvitation:(PKAppletSubcredentialSharingInvitation *)arg1 ;
-(PKAppletSubcredentialSharingInvitation *)phoneInvitation;
-(PKAppletSubcredentialSharingInvitation *)watchInvitation;
-(id)_subcredentialInvitationMessageDataWithDataURL:(id)arg1 ;
-(id)_subcredentialInvitationMessageDataURLWithData:(id)arg1 ;
-(NSString *)dataString;
-(void)setStatus:(unsigned long long)arg1 ;
@end
