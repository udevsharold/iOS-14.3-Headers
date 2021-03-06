/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCapture/AVFCapture-Structs.h>
@class NSURL;

@interface AVMomentCaptureMovieRecordingResolvedSettings : NSObject {

	long long _uniqueID;
	BOOL _torchEnabled;
	NSURL* _movieURL;
	NSURL* _spatialOverCaptureURL;
	SCD_Struct_AV22 _movieDimensions;

}

@property (readonly) long long uniqueID;                                   //@synthesize uniqueID=_uniqueID - In the implementation block
@property (getter=isTorchEnabled,readonly) BOOL torchEnabled;              //@synthesize torchEnabled=_torchEnabled - In the implementation block
@property (readonly) NSURL * movieURL;                                     //@synthesize movieURL=_movieURL - In the implementation block
@property (readonly) NSURL * spatialOverCaptureURL;                        //@synthesize spatialOverCaptureURL=_spatialOverCaptureURL - In the implementation block
@property (readonly) SCD_Struct_AV22 movieDimensions;                      //@synthesize movieDimensions=_movieDimensions - In the implementation block
+(id)movieRecordingResolvedSettingsWithUniqueID:(long long)arg1 torchEnabled:(BOOL)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(SCD_Struct_AV22)arg5 ;
-(long long)uniqueID;
-(void)dealloc;
-(NSURL *)movieURL;
-(id)description;
-(NSURL *)spatialOverCaptureURL;
-(id)_initWithUniqueID:(long long)arg1 torchEnabled:(BOOL)arg2 movieURL:(id)arg3 spatialOverCaptureURL:(id)arg4 movieDimensions:(SCD_Struct_AV22)arg5 ;
-(BOOL)isTorchEnabled;
-(SCD_Struct_AV22)movieDimensions;
-(id)debugDescription;
@end

