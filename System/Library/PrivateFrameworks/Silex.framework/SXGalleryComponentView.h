/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <libobjc.A.dylib/SXDragManagerDataSource.h>

@class SXDragManager;

@interface SXGalleryComponentView : SXMediaComponentView <SXDragManagerDataSource> {

	SXDragManager* _dragManager;

}

@property (nonatomic,retain) SXDragManager * dragManager;              //@synthesize dragManager=_dragManager - In the implementation block
-(id)hostingView;
-(SXDragManager *)dragManager;
-(id)imageViewForLocation:(CGPoint)arg1 ;
-(id)viewForDragManager:(id)arg1 ;
-(id)dragManager:(id)arg1 dragableAtLocation:(CGPoint)arg2 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 ;
-(void)forceImageViewFullscreen:(id)arg1 ;
-(void)setDragManager:(SXDragManager *)arg1 ;
@end
