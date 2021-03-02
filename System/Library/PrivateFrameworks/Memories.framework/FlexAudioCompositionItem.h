/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@class FlexAudioClip;

@interface FlexAudioCompositionItem : MovieCompositionItem

@property (nonatomic,retain) FlexAudioClip * clip; 
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_PM9)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(id)trackInfoDict;
-(id)segmentsForFMTrack:(id)arg1 andTimeRange:(SCD_Struct_PM9)arg2 ;
-(id)audioTrackSegmentsForDestinationTime:(SCD_Struct_PM8)arg1 ;
@end
