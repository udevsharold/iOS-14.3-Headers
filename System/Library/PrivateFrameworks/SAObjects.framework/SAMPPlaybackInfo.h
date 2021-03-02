/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long durationMillis; 
@property (nonatomic,retain) SACalendar * lastPlayedDate; 
@property (assign,nonatomic) long long playbackPositionMillis; 
@property (assign,nonatomic) long long plays; 
@property (assign,nonatomic) BOOL rememberPlaybackPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)playbackInfoWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)playbackInfo;
-(id)groupIdentifier;
-(long long)plays;
-(long long)durationMillis;
-(long long)playbackPositionMillis;
-(BOOL)rememberPlaybackPosition;
-(void)setRememberPlaybackPosition:(BOOL)arg1 ;
-(SACalendar *)lastPlayedDate;
-(void)setLastPlayedDate:(SACalendar *)arg1 ;
-(void)setDurationMillis:(long long)arg1 ;
-(void)setPlaybackPositionMillis:(long long)arg1 ;
-(id)encodedClassName;
-(void)setPlays:(long long)arg1 ;
@end
