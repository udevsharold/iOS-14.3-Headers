/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKTranscriptPluginView <NSObject>
@property (assign,nonatomic,__weak) id<CKTranscriptPluginViewDelegate> pluginViewDelegate; 
@property (nonatomic,readonly) BOOL wantsOutline; 
@optional
-(BOOL)wantsOutline;
-(id<CKTranscriptPluginViewDelegate>)pluginViewDelegate;
-(void)setPluginViewDelegate:(id)arg1;
-(id)interactiveViews;
-(void)configureForDisplay;

@end
