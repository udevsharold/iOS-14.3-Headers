/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>

@class NSArray, NSNumber, DeviceQuery;

@interface SeekTimeIntent : INIntent

@property (nonatomic,copy) NSArray * devices; 
@property (nonatomic,copy) NSNumber * playheadPosition; 
@property (nonatomic,copy) NSNumber * shouldStartPlaybackAfterSeek; 
@property (nonatomic,copy) NSArray * deviceContext; 
@property (nonatomic,copy) NSNumber * isSkipToEnd; 
@property (assign,nonatomic) long long mediaType; 
@property (nonatomic,copy) DeviceQuery * deviceQuery; 
@end
