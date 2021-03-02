/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDBlock.h>

@class WDTableProperties, NSMutableArray;

@interface WDTable : WDBlock {

	WDTableProperties* mProperties;
	NSMutableArray* mRows;

}
-(id)rowAt:(unsigned long long)arg1 ;
-(void)clearProperties;
-(id)addRow;
-(id)description;
-(id)properties;
-(id)initWithText:(id)arg1 ;
-(id)insertRowAtIndex:(unsigned long long)arg1 ;
-(int)nestingLevel;
-(unsigned long long)rowCount;
-(int)blockType;
-(id)runIterator;
-(id)newRunIterator;
-(id)rowIterator;
-(id)newRowIterator;
-(void)clearRows;
-(id)cellIterator;
-(id)newCellIterator;
@end
