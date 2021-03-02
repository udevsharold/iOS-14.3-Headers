/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CMCapture/CMCapture-Structs.h>
@class BWFigVideoCaptureDevice, NSString;

@interface FigCaptureSessionActiveCameraCaptureSource : NSObject {

	OpaqueFigCaptureSourceRef _source;
	BWFigVideoCaptureDevice* _device;
	NSString* _nonLocalizedName;
	int _deviceType;

}

@property (nonatomic,readonly) OpaqueFigCaptureSourceRef source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) BWFigVideoCaptureDevice * device;              //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * nonLocalizedName;                   //@synthesize nonLocalizedName=_nonLocalizedName - In the implementation block
@property (nonatomic,readonly) int deviceType;                                //@synthesize deviceType=_deviceType - In the implementation block
-(int)deviceType;
-(void)dealloc;
-(BWFigVideoCaptureDevice *)device;
-(NSString *)nonLocalizedName;
-(id)initWithSource:(OpaqueFigCaptureSourceRef)arg1 device:(id)arg2 ;
-(OpaqueFigCaptureSourceRef)source;
@end
