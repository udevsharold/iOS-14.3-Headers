/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate;

@interface SASBootstrapSpeechIdMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * bootstrapSpeechId; 
@property (nonatomic,copy) NSString * deviceType; 
@property (nonatomic,copy) NSDate * keychainCreationDate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bootstrapSpeechIdMetadata;
+(id)bootstrapSpeechIdMetadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)bootstrapSpeechId;
-(void)setBootstrapSpeechId:(NSString *)arg1 ;
-(NSDate *)keychainCreationDate;
-(void)setKeychainCreationDate:(NSDate *)arg1 ;
@end
