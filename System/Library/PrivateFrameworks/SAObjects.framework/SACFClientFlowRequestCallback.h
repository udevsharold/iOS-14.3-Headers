/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, NSNumber, SAIntentGroupSiriKitMetrics, SASVSystemDialogActOutput;

@interface SACFClientFlowRequestCallback : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * applicationContextObjects; 
@property (nonatomic,copy) NSArray * conversationStateAttachments; 
@property (nonatomic,copy) NSArray * dictationPromptAbortValues; 
@property (nonatomic,copy) NSString * dictationPromptTargetDomain; 
@property (nonatomic,copy) NSArray * dictationPromptTargetNodes; 
@property (nonatomic,copy) NSArray * disambiguationPromptAbortValues; 
@property (nonatomic,copy) NSNumber * disambiguationPromptAmbiguityId; 
@property (nonatomic,copy) NSArray * disambiguationPromptResponseTargets; 
@property (nonatomic,copy) NSString * disambiguationPromptTargetDomain; 
@property (nonatomic,copy) NSArray * displayHintsAsJson; 
@property (nonatomic,copy) NSString * nlInput; 
@property (nonatomic,copy) NSNumber * objectDisambiguation; 
@property (assign,nonatomic) BOOL shouldResetFlowTaskState; 
@property (nonatomic,retain) SAIntentGroupSiriKitMetrics * siriKitMetrics; 
@property (nonatomic,retain) SASVSystemDialogActOutput * systemDialogActOutput; 
@property (nonatomic,copy) NSArray * weightedPromptAbortValues; 
@property (nonatomic,copy) NSArray * weightedPromptResponseOptions; 
@property (nonatomic,copy) NSArray * weightedPromptResponseTargets; 
@property (nonatomic,copy) NSNumber * weightedPromptStrict; 
@property (nonatomic,copy) NSString * weightedPromptTargetDomain; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientFlowRequestCallback;
+(id)clientFlowRequestCallbackWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)applicationContextObjects;
-(void)setApplicationContextObjects:(NSArray *)arg1 ;
-(NSArray *)conversationStateAttachments;
-(void)setConversationStateAttachments:(NSArray *)arg1 ;
-(NSArray *)dictationPromptAbortValues;
-(void)setDictationPromptAbortValues:(NSArray *)arg1 ;
-(void)setNlInput:(NSString *)arg1 ;
-(NSString *)dictationPromptTargetDomain;
-(void)setDictationPromptTargetDomain:(NSString *)arg1 ;
-(NSArray *)dictationPromptTargetNodes;
-(void)setDictationPromptTargetNodes:(NSArray *)arg1 ;
-(NSArray *)disambiguationPromptAbortValues;
-(void)setDisambiguationPromptAbortValues:(NSArray *)arg1 ;
-(NSNumber *)disambiguationPromptAmbiguityId;
-(void)setDisambiguationPromptAmbiguityId:(NSNumber *)arg1 ;
-(NSArray *)disambiguationPromptResponseTargets;
-(NSString *)disambiguationPromptTargetDomain;
-(void)setDisambiguationPromptResponseTargets:(NSArray *)arg1 ;
-(void)setDisambiguationPromptTargetDomain:(NSString *)arg1 ;
-(NSArray *)displayHintsAsJson;
-(void)setDisplayHintsAsJson:(NSArray *)arg1 ;
-(NSNumber *)objectDisambiguation;
-(void)setObjectDisambiguation:(NSNumber *)arg1 ;
-(BOOL)shouldResetFlowTaskState;
-(void)setShouldResetFlowTaskState:(BOOL)arg1 ;
-(SASVSystemDialogActOutput *)systemDialogActOutput;
-(void)setSystemDialogActOutput:(SASVSystemDialogActOutput *)arg1 ;
-(NSArray *)weightedPromptAbortValues;
-(void)setWeightedPromptAbortValues:(NSArray *)arg1 ;
-(NSArray *)weightedPromptResponseOptions;
-(void)setWeightedPromptResponseOptions:(NSArray *)arg1 ;
-(NSArray *)weightedPromptResponseTargets;
-(void)setWeightedPromptResponseTargets:(NSArray *)arg1 ;
-(NSNumber *)weightedPromptStrict;
-(void)setWeightedPromptStrict:(NSNumber *)arg1 ;
-(NSString *)weightedPromptTargetDomain;
-(void)setWeightedPromptTargetDomain:(NSString *)arg1 ;
-(void)setSiriKitMetrics:(SAIntentGroupSiriKitMetrics *)arg1 ;
-(NSString *)nlInput;
-(SAIntentGroupSiriKitMetrics *)siriKitMetrics;
-(id)encodedClassName;
@end
