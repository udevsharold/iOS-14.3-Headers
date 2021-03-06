/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SACommandFailed;

@interface SAIntentGroupBatchSlotResolutionResultStepResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * base64EncodedProtobufMessage; 
@property (nonatomic,retain) SACommandFailed * commandFailed; 
@property (nonatomic,copy) NSString * jsonEncodedSlotResolutionResult; 
@property (nonatomic,copy) NSString * keyPath; 
@property (nonatomic,copy) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)batchSlotResolutionResultStepResult;
+(id)batchSlotResolutionResultStepResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)base64EncodedProtobufMessage;
-(void)setBase64EncodedProtobufMessage:(NSString *)arg1 ;
-(SACommandFailed *)commandFailed;
-(void)setCommandFailed:(SACommandFailed *)arg1 ;
-(NSString *)jsonEncodedSlotResolutionResult;
-(void)setJsonEncodedSlotResolutionResult:(NSString *)arg1 ;
-(void)setTypeName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)typeName;
@end

