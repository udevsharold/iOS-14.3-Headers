/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class AVCaptureInputPort, NSString;

@interface AVCaptureMetadataInputInternal : NSObject {

	AVCaptureInputPort* metadataPort;
	NSString* sourceID;
	opaqueCMFormatDescriptionRef desc;
	OpaqueCMClockRef clock;
	OpaqueCMBlockBufferRef emptyBoxedMetadata;

}
@end
