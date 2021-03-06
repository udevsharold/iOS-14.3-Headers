/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIScenePresenter, UIScenePresentation;
@class UIWindow, UIView, NSString, UIScenePresentationContext;

@interface SBWindowSelfHostWrapper : NSObject {

	UIWindow* _window;
	id<UIScenePresenter> _presenter;
	UIView*<UIScenePresentation> _hostView;

}

@property (nonatomic,copy,readonly) NSString * requester; 
@property (nonatomic,readonly) UIWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UIView*<UIScenePresentation> hostView;                              //@synthesize hostView=_hostView - In the implementation block
@property (nonatomic,readonly) id<UIScenePresenter> presenter;                                     //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,copy,readonly) UIScenePresentationContext * presentationContext; 
+(id)wrapperForWindow:(id)arg1 orientation:(long long)arg2 hostRequester:(id)arg3 sceneIdentifier:(id)arg4 ;
+(id)wrapperForUseInWindow:(id)arg1 hostRequester:(id)arg2 sceneIdentifier:(id)arg3 ;
-(id<UIScenePresenter>)presenter;
-(void)stopHosting;
-(UIView*<UIScenePresentation>)hostView;
-(UIWindow *)window;
-(void)modifyPresentationContext:(/*^block*/id)arg1 ;
-(NSString *)requester;
-(UIScenePresentationContext *)presentationContext;
@end

