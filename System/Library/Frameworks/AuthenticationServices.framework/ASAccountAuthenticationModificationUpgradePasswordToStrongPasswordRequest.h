/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthenticationServices/ASAccountAuthenticationModificationRequest.h>

@class NSString, ASCredentialServiceIdentifier, NSDictionary, NSExtension;

@interface ASAccountAuthenticationModificationUpgradePasswordToStrongPasswordRequest : ASAccountAuthenticationModificationRequest {

	NSString* _user;
	ASCredentialServiceIdentifier* _serviceIdentifier;
	NSDictionary* _userInfo;
	NSString* _password;
	NSExtension* _extension;

}

@property (nonatomic,readonly) NSString * password;                                            //@synthesize password=_password - In the implementation block
@property (nonatomic,readonly) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,readonly) NSString * user;                                                //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) ASCredentialServiceIdentifier * serviceIdentifier;              //@synthesize serviceIdentifier=_serviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                                        //@synthesize userInfo=_userInfo - In the implementation block
-(NSString *)user;
-(NSExtension *)extension;
-(ASCredentialServiceIdentifier *)serviceIdentifier;
-(NSString *)password;
-(NSDictionary *)userInfo;
-(id)initWithUser:(id)arg1 password:(id)arg2 extension:(id)arg3 serviceIdentifier:(id)arg4 userInfo:(id)arg5 ;
-(id)initWithUser:(id)arg1 serviceIdentifier:(id)arg2 userInfo:(id)arg3 ;
@end

