/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTServerEndpointFeatures.h>

@class NSArray, NSString;

@interface FTMutableServerEndpointFeatures : FTServerEndpointFeatures

@property (assign,nonatomic) int processed_audio_duration_ms; 
@property (assign,nonatomic) int num_of_words; 
@property (assign,nonatomic) int trailing_silence_duration; 
@property (assign,nonatomic) double eos_likelihood; 
@property (nonatomic,copy) NSArray * pause_counts; 
@property (assign,nonatomic) double silence_posterior; 
@property (nonatomic,copy) NSString * task_name; 
@property (nonatomic,copy) NSString * speech_id; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSpeech_id:(NSString *)arg1 ;
-(NSString *)task_name;
-(void)setTask_name:(NSString *)arg1 ;
-(NSString *)speech_id;
-(int)num_of_words;
-(int)trailing_silence_duration;
-(double)eos_likelihood;
-(NSArray *)pause_counts;
-(double)silence_posterior;
-(int)processed_audio_duration_ms;
-(void)setProcessed_audio_duration_ms:(int)arg1 ;
-(void)setNum_of_words:(int)arg1 ;
-(void)setTrailing_silence_duration:(int)arg1 ;
-(void)setEos_likelihood:(double)arg1 ;
-(void)setPause_counts:(NSArray *)arg1 ;
-(void)setSilence_posterior:(double)arg1 ;
@end

