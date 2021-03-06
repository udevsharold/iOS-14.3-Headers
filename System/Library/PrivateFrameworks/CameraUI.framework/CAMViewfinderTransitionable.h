/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CAMPreviewView;


@protocol CAMViewfinderTransitionable
@property (nonatomic,readonly) CAMPreviewView * previewView; 
@property (nonatomic,readonly) long long desiredAspectRatio; 
@required
-(long long)desiredAspectRatio;
-(void)prepareForResumingUsingCrossfade;
-(void)removeInflightBlurAnimations;
-(CAMPreviewView *)previewView;

@end

