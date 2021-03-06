/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebVideoFullscreenController : NSObject {

	RefPtr<VideoFullscreenControllerContext, WTF::DumbPtrTraits<VideoFullscreenControllerContext> >* _context;
	RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement> >* _videoElement;

}
-(id)init;
-(void)setVideoElement:(NakedPtr<WebCore::HTMLVideoElement>*)arg1 ;
-(NakedPtr<WebCore::HTMLVideoElement>*)videoElement;
-(void)enterFullscreen:(id)arg1 mode:(unsigned)arg2 ;
-(void)requestHideAndExitFullscreen;
-(void)didFinishFullscreen:(VideoFullscreenControllerContext*)arg1 ;
-(void)exitFullscreen;
@end

