/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseAceObject.h>

@class NSData, NSString;

@interface SACFScriptEncryptionParameters : SABaseAceObject

@property (nonatomic,copy) NSData * encryptionKey; 
@property (nonatomic,copy) NSData * hmac; 
@property (nonatomic,copy) NSData * hmacKey; 
@property (nonatomic,copy) NSData * initializationVector; 
@property (nonatomic,copy) NSString * type; 
+(id)scriptEncryptionParameters;
+(id)scriptEncryptionParametersWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setEncryptionKey:(NSData *)arg1 ;
-(NSData *)hmac;
-(void)setType:(NSString *)arg1 ;
-(NSData *)encryptionKey;
-(void)setHmacKey:(NSData *)arg1 ;
-(void)setInitializationVector:(NSData *)arg1 ;
-(NSData *)hmacKey;
-(NSString *)type;
-(void)setHmac:(NSData *)arg1 ;
-(id)encodedClassName;
-(NSData *)initializationVector;
@end

