/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTAudioPacket.h>

@class NSData;

@interface FTMutableAudioPacket : FTAudioPacket

@property (nonatomic,copy) NSData * audio_bytes; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)audio_bytes;
-(void)setAudio_bytes:(NSData *)arg1 ;
-(void)audio_bytes:(/*^block*/id)arg1 ;
@end
