/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSTables/TSTables-Structs.h>
@class TSTCellMap, TSTCellUIDIterator, TSTCell;

@interface TSTCellMapIterator : NSObject {

	TSTCellMap* _cellMap;
	TSTCellUIDIterator* _cellUIDIterator;
	unsigned long long _index;
	BOOL _oneToMany;
	TSTCellUID _currentCellUID;
	TSTCell* _currentCell;

}
-(id)currentCell;
-(id)initWithCellMap:(id)arg1 ;
-(pair<TSTCell *, TSTCellUID>)nextCellAndCellUID;
-(const TSTCellUID*)currentCellUID;
@end

