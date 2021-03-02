/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * buildNumber; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSString * clientIdentifier; 
@property (nonatomic,copy) NSString * version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appIdentifyingInfo;
+(id)appIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)clientIdentifier;
-(void)setBuildNumber:(NSString *)arg1 ;
-(NSString *)bundleId;
@end
