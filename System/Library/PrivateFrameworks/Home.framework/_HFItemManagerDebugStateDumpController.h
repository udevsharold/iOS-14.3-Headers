/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:18 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface _HFItemManagerDebugStateDumpController : NSObject {

	NSHashTable* _itemManagers;

}

@property (nonatomic,retain) NSHashTable * itemManagers;              //@synthesize itemManagers=_itemManagers - In the implementation block
+(id)sharedInstance;
-(void)registerItemManager:(id)arg1 ;
-(NSHashTable *)itemManagers;
-(id)init;
-(void)setItemManagers:(NSHashTable *)arg1 ;
-(id)_performStateDump;
@end

