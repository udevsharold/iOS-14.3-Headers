/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>
#import <libobjc.A.dylib/CFLocalAceHandling.h>

@class NSString;

@interface CFVSGetVoiceAssetsRequest : SABaseClientBoundCommand <CFLocalAceHandling, CFLocalAceHandling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * quality; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)getVoiceAssetsRequest;
+(id)getVoiceAssetsRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)gender;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)quality;
-(void)setQuality:(NSString *)arg1 ;
-(NSString *)language;
-(void)setGender:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)handleWithCompletion:(/*^block*/id)arg1 ;
@end
