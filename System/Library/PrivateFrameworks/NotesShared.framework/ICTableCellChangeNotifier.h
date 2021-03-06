/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface ICTableCellChangeNotifier : NSObject {

	NSHashTable* _observers;

}

@property (retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)notifyOfChangeAtColumnID:(id)arg1 rowID:(id)arg2 delta:(long long)arg3 ;
@end

