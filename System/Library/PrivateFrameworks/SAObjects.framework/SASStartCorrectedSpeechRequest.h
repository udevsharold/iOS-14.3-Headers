/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SASStartCorrectedSpeechRequest : SAStartRequest

@property (assign,nonatomic) long long combinedRank; 
@property (assign,nonatomic) double combinedScore; 
@property (nonatomic,copy) NSString * interactionId; 
@property (assign,nonatomic) BOOL onDeviceUtterancesPresent; 
@property (assign,nonatomic) long long originalRank; 
@property (assign,nonatomic) double originalScore; 
@property (nonatomic,copy) NSString * previousUtterance; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * utteranceSource; 
+(id)startCorrectedSpeechRequest;
+(id)startCorrectedSpeechRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setSessionId:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)sessionId;
-(void)setCombinedRank:(long long)arg1 ;
-(BOOL)requiresResponse;
-(double)combinedScore;
-(long long)combinedRank;
-(NSString *)interactionId;
-(void)setCombinedScore:(double)arg1 ;
-(void)setInteractionId:(NSString *)arg1 ;
-(BOOL)onDeviceUtterancesPresent;
-(void)setOnDeviceUtterancesPresent:(BOOL)arg1 ;
-(long long)originalRank;
-(void)setOriginalRank:(long long)arg1 ;
-(double)originalScore;
-(void)setOriginalScore:(double)arg1 ;
-(NSString *)utteranceSource;
-(NSString *)previousUtterance;
-(void)setPreviousUtterance:(NSString *)arg1 ;
-(void)setUtteranceSource:(NSString *)arg1 ;
@end

