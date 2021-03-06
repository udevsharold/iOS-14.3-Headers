/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class KNMovieSegment;

@interface KNRecordingMovieSegmentTrimmer : NSObject {

	KNMovieSegment* _movieSegment;
	double _trimDurationInSeconds;

}
+(BOOL)canTrimMovieSegmentsInContext:(id)arg1 ;
-(id)initWithMovieSegment:(id)arg1 trimDuration:(double)arg2 ;
-(void)trimMovieSegmentWithCompletionHandler:(/*^block*/id)arg1 ;
@end

