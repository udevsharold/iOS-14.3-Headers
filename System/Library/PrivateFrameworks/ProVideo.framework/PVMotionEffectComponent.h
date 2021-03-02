/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PVMotionEffectComponent <PVEffectComponent>
@required
+(id)parameterKeyToPublishedParameterNameMap;
-(void)documentDidStartLoading;
-(void)documentDidLoad:(const PVMotionDocumentInfo*)arg1;
-(void)documentWillOpenMedia:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2;
-(void)documentDidBecomeReady:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2;
-(void)documentWillRender:(const PVMotionDocumentInfo*)arg1 properties:(id)arg2 time:(SCD_Struct_PV22)arg3;
-(void)documentDidFailToLoad;
-(void)documentDidUnload;
-(BOOL)propertiesDisableCache:(id)arg1 time:(SCD_Struct_PV22)arg2 isAtPosterFrame:(BOOL)arg3;
-(id)parameterKeysThatInvalidateCache;
-(BOOL)didCacheInvalidatingParameterChange:(id)arg1 parameterA:(id)arg2 parameterB:(id)arg3;

@end
