/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCObject.h>

@interface VCVideoQualityInfo : VCObject {

	BOOL _videoIsExpected;
	BOOL _isVideoQualityDegraded;
	double _firstDegradedMeasure;
	double _videoDegradedThreshold;
	unsigned long long _idsParticipantID;

}

@property (nonatomic,readonly) BOOL isVideoQualityDegraded;              //@synthesize isVideoQualityDegraded=_isVideoQualityDegraded - In the implementation block
@property (assign,nonatomic) BOOL videoIsExpected;                       //@synthesize videoIsExpected=_videoIsExpected - In the implementation block
-(void)dealloc;
-(id)initWithParticipantID:(unsigned long long)arg1 ;
-(void)setVideoIsExpected:(BOOL)arg1 ;
-(BOOL)videoIsExpected;
-(BOOL)updateWithLastDecodedFrameTime:(double)arg1 time:(double)arg2 ;
-(BOOL)isVideoQualityDegraded;
@end

