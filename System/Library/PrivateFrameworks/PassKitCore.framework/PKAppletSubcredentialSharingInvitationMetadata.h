/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding> {

	BOOL _shouldRequestInvitation;
	NSString* _anonymizationSalt;

}

@property (nonatomic,retain) NSString * anonymizationSalt;              //@synthesize anonymizationSalt=_anonymizationSalt - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestInvitation;              //@synthesize shouldRequestInvitation=_shouldRequestInvitation - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)anonymizationSalt;
-(BOOL)shouldRequestInvitation;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldRequestInvitation:(BOOL)arg1 ;
-(void)setAnonymizationSalt:(NSString *)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end
