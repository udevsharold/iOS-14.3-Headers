/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTRecognitionToken.h>

@class NSString;

@interface FTMutableRecognitionToken : FTRecognitionToken

@property (nonatomic,copy) NSString * token_text; 
@property (assign,nonatomic) int start_milli_seconds; 
@property (assign,nonatomic) int end_milli_seconds; 
@property (assign,nonatomic) int silence_start_milli_seconds; 
@property (assign,nonatomic) int confidence; 
@property (assign,nonatomic) BOOL add_space_after; 
@property (nonatomic,copy) NSString * phone_seq; 
@property (nonatomic,copy) NSString * ipa_phone_seq; 
-(int)confidence;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setToken_text:(NSString *)arg1 ;
-(int)start_milli_seconds;
-(void)setStart_milli_seconds:(int)arg1 ;
-(int)end_milli_seconds;
-(void)setEnd_milli_seconds:(int)arg1 ;
-(int)silence_start_milli_seconds;
-(void)setSilence_start_milli_seconds:(int)arg1 ;
-(NSString *)phone_seq;
-(void)setAdd_space_after:(BOOL)arg1 ;
-(void)setPhone_seq:(NSString *)arg1 ;
-(NSString *)ipa_phone_seq;
-(void)setIpa_phone_seq:(NSString *)arg1 ;
-(NSString *)token_text;
-(BOOL)add_space_after;
-(void)setConfidence:(int)arg1 ;
@end

