/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKAppletSubcredentialEncryptedRequest : NSObject <NSSecureCoding> {

	NSString* _encryptionScheme;
	NSString* _ephemeralPublicKey;
	NSString* _publicKeyHash;
	NSData* _data;

}

@property (nonatomic,readonly) NSString * encryptionScheme;                //@synthesize encryptionScheme=_encryptionScheme - In the implementation block
@property (nonatomic,readonly) NSString * ephemeralPublicKey;              //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,readonly) NSString * publicKeyHash;                   //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRequest:(id)arg1 ;
-(NSString *)ephemeralPublicKey;
-(NSString *)publicKeyHash;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)encryptionScheme;
-(id)initWithEncryptionScheme:(id)arg1 ephemeralPublicKey:(id)arg2 publicKeyHash:(id)arg3 data:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

