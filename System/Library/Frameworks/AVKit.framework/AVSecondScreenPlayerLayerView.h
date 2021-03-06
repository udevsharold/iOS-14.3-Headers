/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class AVPlayerLayer, AVObservationController;

@interface AVSecondScreenPlayerLayerView : UIView {

	AVPlayerLayer* _activeSourcePlayerLayer;
	AVObservationController* _observationController;

}

@property (nonatomic,readonly) AVPlayerLayer * layer; 
@property (assign,nonatomic,__weak) AVPlayerLayer * activeSourcePlayerLayer;               //@synthesize activeSourcePlayerLayer=_activeSourcePlayerLayer - In the implementation block
@property (nonatomic,retain) AVObservationController * observationController;              //@synthesize observationController=_observationController - In the implementation block
+(Class)layerClass;
-(void)dealloc;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(void)startShowingContentFromSourcePlayerLayer:(id)arg1 ;
-(void)stopShowingContentFromActiveSourcePlayerLayer;
-(AVObservationController *)observationController;
-(AVPlayerLayer *)activeSourcePlayerLayer;
-(void)setActiveSourcePlayerLayer:(AVPlayerLayer *)arg1 ;
@end

