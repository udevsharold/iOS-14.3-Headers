/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTFinishAudio.h>

@class NSArray;

@interface FTMutableFinishAudio : FTFinishAudio

@property (assign,nonatomic) int packet_count; 
@property (assign,nonatomic) float total_audio_recorded_seconds; 
@property (nonatomic,copy) NSArray * features_at_endpoint; 
@property (nonatomic,copy) NSArray * server_feature_latency_distribution; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)packet_count;
-(void)setPacket_count:(int)arg1 ;
-(float)total_audio_recorded_seconds;
-(void)setTotal_audio_recorded_seconds:(float)arg1 ;
-(NSArray *)features_at_endpoint;
-(void)setFeatures_at_endpoint:(NSArray *)arg1 ;
-(NSArray *)server_feature_latency_distribution;
-(void)setServer_feature_latency_distribution:(NSArray *)arg1 ;
@end

