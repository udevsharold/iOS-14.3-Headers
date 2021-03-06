/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class OADTable, OADTableRow;

@interface PMTableRowMapper : CMMapper {

	OADTable* mTable;
	OADTableRow* mRow;
	unsigned long long mRowIndex;

}
-(float)height;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(unsigned long long)cellCount;
-(id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3 ;
@end

