/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EDReference : NSObject <NSCopying> {

	EDAreaReference mAreaReference;

}
+(id)reference;
+(id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
+(id)referenceWithAreaReference:(EDAreaReference*)arg1 ;
+(id)referenceWithReference:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithReference:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)lastRow;
-(int)firstColumn;
-(int)lastColumn;
-(int)firstRow;
-(void)setLastColumn:(int)arg1 ;
-(void)setFirstColumn:(int)arg1 ;
-(void)setFirstRow:(int)arg1 ;
-(void)setLastRow:(int)arg1 ;
-(unsigned long long)countOfCellsBeingReferenced;
-(void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
-(id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4 ;
-(EDAreaReference)areaReference;
-(id)initWithAreaReference:(EDAreaReference*)arg1 ;
-(BOOL)isEqualToReference:(id)arg1 ;
-(BOOL)isValidCellReference;
-(BOOL)isValidAreaReference;
-(BOOL)containsRow:(int)arg1 column:(int)arg2 ;
-(BOOL)isCellReference;
-(BOOL)isRowReference;
-(BOOL)isColumnReference;
-(BOOL)fullyAdjacentToReference:(id)arg1 ;
-(void)unionWithReference:(id)arg1 ;
-(void)unionWithRow:(int)arg1 column:(int)arg2 ;
@end
