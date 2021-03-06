/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WK_RTCVideoEncoderH264, WK_RTCVideoEncoderH265;

@interface WK_RTCLocalVideoH264H265Encoder : NSObject {

	WK_RTCVideoEncoderH264* m_h264Encoder;
	WK_RTCVideoEncoderH265* m_h265Encoder;

}
-(void)setCallback:(/*^block*/id)arg1 ;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3 ;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2 ;
-(id)initWithCodecInfo:(id)arg1 ;
@end

