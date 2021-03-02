/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIStatusBarData, NSCountedSet, NSMutableDictionary, NSSet;

@interface _UIStatusBarDataAggregator : NSObject {

	_UIStatusBarData* _overlayData;
	/*^block*/id _updateBlock;
	Class _dataClass;
	NSCountedSet* _delayedKeys;
	NSMutableDictionary* _pendingUpdates;
	NSMutableDictionary* _coalescedKeys;
	NSMutableDictionary* _coalescedTimers;

}

@property (nonatomic,copy) id updateBlock;                                       //@synthesize updateBlock=_updateBlock - In the implementation block
@property (nonatomic,copy) Class dataClass;                                      //@synthesize dataClass=_dataClass - In the implementation block
@property (nonatomic,retain) NSCountedSet * delayedKeys;                         //@synthesize delayedKeys=_delayedKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingUpdates;               //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coalescedKeys;                //@synthesize coalescedKeys=_coalescedKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * coalescedTimers;              //@synthesize coalescedTimers=_coalescedTimers - In the implementation block
@property (nonatomic,copy) _UIStatusBarData * overlayData;                       //@synthesize overlayData=_overlayData - In the implementation block
@property (nonatomic,copy,readonly) NSSet * delayedEntryKeys; 
@property (nonatomic,copy,readonly) NSSet * coalescedEntryKeys; 
+(void)initialize;
-(void)_updateForOverlayWithData:(id)arg1 ;
-(_UIStatusBarData *)overlayData;
-(void)updateWithData:(id)arg1 ;
-(void)beginDelayingUpdatesForEntryKeys:(id)arg1 ;
-(NSMutableDictionary *)pendingUpdates;
-(void)_updateForDelayedKeysWithData:(id)arg1 ;
-(NSSet *)delayedEntryKeys;
-(void)endCoalescingUpdatesForEntryKeys:(id)arg1 ;
-(NSSet *)coalescedEntryKeys;
-(id)_updatedDataFromData:(id)arg1 delayedKeys:(id)arg2 ;
-(NSMutableDictionary *)coalescedTimers;
-(void)setCoalescedTimers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)coalescedKeys;
-(id)initWithUpdateBlock:(/*^block*/id)arg1 ;
-(Class)dataClass;
-(void)setOverlayData:(_UIStatusBarData *)arg1 ;
-(void)setDataClass:(Class)arg1 ;
-(void)endDelayingUpdatesForEntryKeys:(id)arg1 ;
-(NSCountedSet *)delayedKeys;
-(void)setDelayedKeys:(NSCountedSet *)arg1 ;
-(void)setCoalescedKeys:(NSMutableDictionary *)arg1 ;
-(void)beginCoalescingUpdatesForEntryKeys:(id)arg1 delay:(double)arg2 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(void)_updateFromPendingUpdatesForKeys:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_updateForCoalescedKeysWithData:(id)arg1 ;
-(void)_coalescedUpdateForEntryKeys:(id)arg1 ;
-(void)setPendingUpdates:(NSMutableDictionary *)arg1 ;
@end
