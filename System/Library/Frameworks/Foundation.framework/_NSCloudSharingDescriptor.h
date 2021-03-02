/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding> {

	long long _operation;
	NSString* _sharedContentType;
	long long _numberOfInvitations;
	BOOL _invitationsSentViaThirdPartyService;
	BOOL _publicShare;

}

@property (assign) long long operation;                                   //@synthesize operation=_operation - In the implementation block
@property (assign) BOOL invitationsSentViaThirdPartyService;              //@synthesize invitationsSentViaThirdPartyService=_invitationsSentViaThirdPartyService - In the implementation block
@property (assign) BOOL publicShare;                                      //@synthesize publicShare=_publicShare - In the implementation block
@property (assign) long long numberOfInvitations;                         //@synthesize numberOfInvitations=_numberOfInvitations - In the implementation block
@property (copy) NSString * sharedContentType;                            //@synthesize sharedContentType=_sharedContentType - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)operation;
-(void)setInvitationsSentViaThirdPartyService:(BOOL)arg1 ;
-(BOOL)publicShare;
-(BOOL)invitationsSentViaThirdPartyService;
-(void)dealloc;
-(void)setPublicShare:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)sharedContentType;
-(void)setSharedContentType:(NSString *)arg1 ;
-(id)_variantSubstrings;
-(void)setNumberOfInvitations:(long long)arg1 ;
-(long long)numberOfInvitations;
-(void)setOperation:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
