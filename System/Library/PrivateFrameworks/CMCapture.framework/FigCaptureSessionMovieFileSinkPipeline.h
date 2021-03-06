/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/FigCaptureMovieFileSinkPipeline.h>

@class NSMutableArray;

@interface FigCaptureSessionMovieFileSinkPipeline : FigCaptureMovieFileSinkPipeline {

	BOOL _momentCaptureMovieRecordingEnabled;
	BOOL _recording;
	NSMutableArray* _pendingIrisRecordings;

}

@property (assign,nonatomic) BOOL momentCaptureMovieRecordingEnabled;              //@synthesize momentCaptureMovieRecordingEnabled=_momentCaptureMovieRecordingEnabled - In the implementation block
@property (assign,nonatomic) BOOL recording; 
@property (nonatomic,retain) NSMutableArray * pendingIrisRecordings;               //@synthesize pendingIrisRecordings=_pendingIrisRecordings - In the implementation block
-(NSMutableArray *)pendingIrisRecordings;
-(void)dealloc;
-(void)setPendingIrisRecordings:(NSMutableArray *)arg1 ;
-(BOOL)recording;
-(BOOL)momentCaptureMovieRecordingEnabled;
-(void)setRecording:(BOOL)arg1 ;
-(void)setMomentCaptureMovieRecordingEnabled:(BOOL)arg1 ;
@end

