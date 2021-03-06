/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding> {

	NSString* _vettingToken;
	NSString* _vettingEmail;
	NSString* _vettingPhone;
	NSString* _routingKey;
	NSData* _encryptedKey;
	NSString* _baseToken;
	NSString* _displayedHostname;

}

@property (nonatomic,copy) NSString * vettingToken;                     //@synthesize vettingToken=_vettingToken - In the implementation block
@property (nonatomic,retain) NSString * vettingEmail;                   //@synthesize vettingEmail=_vettingEmail - In the implementation block
@property (nonatomic,retain) NSString * vettingPhone;                   //@synthesize vettingPhone=_vettingPhone - In the implementation block
@property (nonatomic,retain) NSString * routingKey;                     //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * encryptedKey;                     //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,retain) NSString * baseToken;                      //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,retain) NSString * displayedHostname;              //@synthesize displayedHostname=_displayedHostname - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)vettingToken;
-(void)setVettingToken:(NSString *)arg1 ;
-(NSString *)vettingEmail;
-(void)setVettingEmail:(NSString *)arg1 ;
-(NSString *)vettingPhone;
-(void)setVettingPhone:(NSString *)arg1 ;
-(NSData *)encryptedKey;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayedHostname;
-(NSString *)baseToken;
-(void)setRoutingKey:(NSString *)arg1 ;
-(void)setBaseToken:(NSString *)arg1 ;
-(void)setDisplayedHostname:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)routingKey;
@end

