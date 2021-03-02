/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class VEKProduction;


@protocol PMEditorMenuViewControllerDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long numberOfClipsInMovie; 
@property (nonatomic,readonly) VEKProduction * production; 
@property (nonatomic,readonly) double sequenceDuration; 
@required
-(VEKProduction *)production;
-(void)prepareLayoutForCollapsedMode;
-(void)prepareLayoutForSpiltMode;
-(void)showTitleEditorViewController;
-(void)showMusicPickerViewController;
-(void)showContentEditorViewController;
-(void)showDurationEditorViewController;
-(void)showKeyAssetSelectionPicker;
-(void)showDebugTitleStylePickerViewController;
-(void)showDebugEditStylePickerViewController;
-(void)showDebugTransitionPickerViewController;
-(void)showDebugFilterPickerViewController;
-(unsigned long long)numberOfClipsInMovie;
-(double)sequenceDuration;

@end
