/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTMultiUserStartSpeechRequest.h>

@class FTStartSpeechRequest, NSArray, NSString;

@interface FTMutableMultiUserStartSpeechRequest : FTMultiUserStartSpeechRequest

@property (nonatomic,copy) FTStartSpeechRequest * start_speech_request; 
@property (nonatomic,copy) NSArray * user_parameters; 
@property (nonatomic,copy) NSString * primary_speech_id; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FTStartSpeechRequest *)start_speech_request;
-(void)setStart_speech_request:(FTStartSpeechRequest *)arg1 ;
-(NSArray *)user_parameters;
-(void)setUser_parameters:(NSArray *)arg1 ;
-(NSString *)primary_speech_id;
-(void)setPrimary_speech_id:(NSString *)arg1 ;
@end
