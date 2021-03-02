/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, HFMediaPlaybackActionBuilder;


@protocol HFActionSetBuilderProtocol <NSObject>
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
@property (getter=isAffectedByEndEvents,nonatomic,readonly) BOOL affectedByEndEvents; 
@property (nonatomic,readonly) HFMediaPlaybackActionBuilder * mediaAction; 
@required
-(void)removeAllActions;
-(NSArray *)actions;
-(void)addAction:(id)arg1;
-(BOOL)isAffectedByEndEvents;
-(void)updateAction:(id)arg1;
-(id)deleteActionSet;
-(BOOL)requiresDeviceUnlock;
-(HFMediaPlaybackActionBuilder *)mediaAction;
-(void)removeAction:(id)arg1;

@end
