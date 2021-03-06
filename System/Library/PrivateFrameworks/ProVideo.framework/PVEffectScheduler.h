/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ProVideo/ProVideo-Structs.h>
@class NSObject;

@interface PVEffectScheduler : NSObject {

	set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > >* _effectSchedule;
	set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction> > >* _previousScheduleToUnload;
	tree_const_iterator<HGRef<LoadableInstruction>, std::__1::__tree_node<HGRef<LoadableInstruction>, void *> *, long>* _lastLoadedEffectSetIterator;
	SCD_Struct_PV22 _endTime;
	BOOL _loadedFinalInstructions;
	BOOL _isExporting;
	NSObject*<OS_dispatch_queue> _loadQueue;
	BOOL _isScheduling;
	HGSynchronizable* _effectScheduleLock;
	HGRef<PVInstructionGraphContext>* _effectLoadRenderContext;

}
-(id)init;
-(void)dealloc;
-(void)setIsExporting:(BOOL)arg1 ;
-(void)releaseAllUnusedEffects:(SCD_Struct_PV22)arg1 ;
-(BOOL)previousLoadedIteratorIsLastInList;
-(void)unloadInstructionFromPreviousSchedule;
-(void)resetSchedule:(id)arg1 ;
-(void)resetSearchPoint;
-(void)setEffectLoadingRenderContext:(HGRef<PVInstructionGraphContext>*)arg1 ;
-(void)loadEffects:(SCD_Struct_PV22)arg1 playerRate:(float)arg2 ;
-(BOOL)loadTimeIsNearEnd:(SCD_Struct_PV22)arg1 ;
@end

