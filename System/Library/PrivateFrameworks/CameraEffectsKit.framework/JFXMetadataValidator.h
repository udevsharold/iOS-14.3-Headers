/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface JFXMetadataValidator : NSObject {

	long long _faceDataDetectedFacesCount;
	unsigned long long _lastARFrameHasFaceAnchors;
	unsigned long long _lastARFrameIsFaceTracked;

}

@property (assign,nonatomic) long long faceDataDetectedFacesCount;                      //@synthesize faceDataDetectedFacesCount=_faceDataDetectedFacesCount - In the implementation block
@property (assign,nonatomic) unsigned long long lastARFrameHasFaceAnchors;              //@synthesize lastARFrameHasFaceAnchors=_lastARFrameHasFaceAnchors - In the implementation block
@property (assign,nonatomic) unsigned long long lastARFrameIsFaceTracked;               //@synthesize lastARFrameIsFaceTracked=_lastARFrameIsFaceTracked - In the implementation block
-(id)init;
-(void)reset;
-(void)validateARImageData:(id)arg1 ;
-(void)validateFaceTrackedARFrame:(id)arg1 ;
-(long long)faceDataDetectedFacesCount;
-(void)setFaceDataDetectedFacesCount:(long long)arg1 ;
-(unsigned long long)lastARFrameHasFaceAnchors;
-(void)setLastARFrameHasFaceAnchors:(unsigned long long)arg1 ;
-(unsigned long long)lastARFrameIsFaceTracked;
-(void)setLastARFrameIsFaceTracked:(unsigned long long)arg1 ;
@end

