/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * appleConnectServiceTicket; 
@property (nonatomic,copy) NSString * appleConnectSessionToken; 
@property (nonatomic,copy) NSString * connectionMode; 
@property (nonatomic,copy) NSString * connectionType; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * linkedAssistantId; 
@property (nonatomic,copy) NSString * linkedSpeechId; 
@property (nonatomic,copy) NSData * linkedValidationData; 
@property (nonatomic,copy) NSString * speechId; 
@property (nonatomic,copy) NSData * validationData; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createAssistant;
+(id)createAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)connectionType;
-(id)groupIdentifier;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setSpeechId:(NSString *)arg1 ;
-(void)setConnectionType:(NSString *)arg1 ;
-(NSString *)appleConnectServiceTicket;
-(void)setAppleConnectServiceTicket:(NSString *)arg1 ;
-(NSString *)linkedAssistantId;
-(void)setLinkedAssistantId:(NSString *)arg1 ;
-(NSString *)linkedSpeechId;
-(void)setLinkedSpeechId:(NSString *)arg1 ;
-(NSData *)linkedValidationData;
-(NSData *)validationData;
-(void)setLinkedValidationData:(NSData *)arg1 ;
-(void)setValidationData:(NSData *)arg1 ;
-(NSString *)language;
-(NSString *)connectionMode;
-(void)setConnectionMode:(NSString *)arg1 ;
-(NSString *)speechId;
-(NSString *)appleConnectSessionToken;
-(void)setAppleConnectSessionToken:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
@end
