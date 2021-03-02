/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCVideoSink.h>
#import <libobjc.A.dylib/VCVideoCaptureClient.h>

@class NSString;

@interface VCVideoCaptureConverter : NSObject <VCVideoSink, VCVideoCaptureClient> {

	unsigned _destinationFramerate;
	unsigned _sourceFramerate;
	double _throttleRate;
	unsigned _sourceFrameCount;
	unsigned _lastDestinationFrameCount;
	BOOL _isThrottling;
	id _delegate;

}

@property (assign,nonatomic) unsigned sourceFramerate;                   //@synthesize sourceFramerate=_sourceFramerate - In the implementation block
@property (assign,nonatomic) unsigned destinationFramerate;              //@synthesize destinationFramerate=_destinationFramerate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sourceFrameRateDidChange:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)onVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 attribute:(SCD_Struct_Vi133)arg3 ;
-(id)delegate;
-(void)setSourceFramerate:(unsigned)arg1 ;
-(void)thermalLevelDidChange:(int)arg1 ;
-(id)clientCaptureRule;
-(void)avConferencePreviewError:(id)arg1 ;
-(void)cameraAvailabilityDidChange:(BOOL)arg1 ;
-(void)updateThrottleRate;
-(BOOL)processFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)setDestinationFramerate:(unsigned)arg1 ;
-(unsigned)sourceFramerate;
-(unsigned)destinationFramerate;
@end
