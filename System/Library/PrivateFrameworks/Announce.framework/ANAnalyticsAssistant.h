/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:33:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Announce/Announce-Structs.h>
#import <libobjc.A.dylib/ANAnalyticsAssistantProtocol.h>

@interface ANAnalyticsAssistant : NSObject <ANAnalyticsAssistantProtocol>
-(id)_playerForAnnouncement:(id)arg1 ;
-(int)_linearBucketAtInterval:(double)arg1 value:(double)arg2 max:(double)arg3 ;
-(ANAnalyticsAssistantAudioData)audioDataForAnnouncement:(id)arg1 ;
-(ANAnalyticsAssistantSenderData)senderDataForAnnouncement:(id)arg1 ;
-(long long)boundGroupCount:(long long)arg1 ;
-(long long)bucketFromSize:(long long)arg1 ;
-(long long)bucketFromDuration:(double)arg1 ;
-(long long)bucketFromReceiveTime:(double)arg1 ;
@end
