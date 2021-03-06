/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTAvatarDisplayingController <AVTObjectViewController>
@property (assign,nonatomic,__weak) id<AVTAvatarDisplayingControllerDelegate> delegate; 
@required
-(void)reloadData;
-(void)prepareViewWithLayout:(id)arg1;
-(void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;
-(void)stopUsingAVTViewSessionSynchronously:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)prepareToTransitionToVisible:(BOOL)arg1 completionHandler:(/*^block*/id*)arg2;
-(void)displayAvatarForRecord:(id)arg1 animated:(BOOL)arg2;
-(id)initWithDataSource:(id)arg1 environment:(id)arg2;
-(void)setDelegate:(id)arg1;
-(id<AVTAvatarDisplayingControllerDelegate>)delegate;

@end

