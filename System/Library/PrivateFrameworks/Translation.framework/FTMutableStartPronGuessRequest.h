/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartPronGuessRequest.h>

@class NSString;

@interface FTMutableStartPronGuessRequest : FTStartPronGuessRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSString * orthography; 
@property (nonatomic,copy) NSString * language; 
@property (assign,nonatomic) long long codec; 
-(long long)codec;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setCodec:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)orthography;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)language;
-(NSString *)speech_id;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(void)setOrthography:(NSString *)arg1 ;
@end

