/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol JFXRemoteCommandServerDelegate;
@class NSDistributedNotificationCenter;

@interface JFXRemoteCommandServer : NSObject {

	id<JFXRemoteCommandServerDelegate> _delegate;
	NSDistributedNotificationCenter* _distributedNotificationCenter;

}

@property (assign,nonatomic,__weak) id<JFXRemoteCommandServerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDistributedNotificationCenter * distributedNotificationCenter;              //@synthesize distributedNotificationCenter=_distributedNotificationCenter - In the implementation block
-(void)setDistributedNotificationCenter:(NSDistributedNotificationCenter *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSDistributedNotificationCenter *)distributedNotificationCenter;
-(void)setDelegate:(id<JFXRemoteCommandServerDelegate>)arg1 ;
-(id<JFXRemoteCommandServerDelegate>)delegate;
-(void)onRemoveEffectsNotification:(id)arg1 ;
-(void)onSetAnimojiNotification:(id)arg1 ;
-(void)onSetMemojiWithContentsOfFileNotification:(id)arg1 ;
-(void)onSetFilterWithIdentifierNotification:(id)arg1 ;
-(void)onGetEffectsRequest:(id)arg1 ;
-(void)onGetEffectsResponse:(id)arg1 ;
-(void)onOpenProjectPickerNotification:(id)arg1 ;
-(void)onOpenProjectNotification:(id)arg1 ;
-(void)onNewProjectNotification:(id)arg1 ;
-(void)onPlayNotification:(id)arg1 ;
-(void)onPlayClipAtIndexNotification:(id)arg1 ;
-(void)onRecordNotification:(id)arg1 ;
-(void)onExportProjectNotification:(id)arg1 ;
-(void)onExportProjectResponseNotification:(id)arg1 ;
-(void)onAddPosterWithIdentifierNotification:(id)arg1 ;
-(void)onAddPosterWithNameNotification:(id)arg1 ;
-(void)onAddEffectWithIdentifierNotification:(id)arg1 ;
-(void)onAddEffectWithNameNotification:(id)arg1 ;
-(void)onAddShapeWithIdentifierNotification:(id)arg1 ;
-(void)onAddStickerNotification:(id)arg1 ;
-(void)onAddStickerWithIdentifierNotification:(id)arg1 ;
-(void)onAddTextNotification:(id)arg1 ;
@end
