/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSTables.framework/TSTables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSTables/TSTables-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSTTableSortRule : NSObject <NSCopying> {

	TSUModelColumnIndex _baseColumnIndex;
	int _direction;

}

@property (nonatomic,readonly) TSUModelColumnIndex baseColumnIndex;              //@synthesize baseColumnIndex=_baseColumnIndex - In the implementation block
@property (nonatomic,readonly) int direction;                                    //@synthesize direction=_direction - In the implementation block
+(id)ruleWithBaseColumnIndex:(TSUModelColumnIndex)arg1 direction:(int)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)direction;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initFromArchive:(const TableSortOrderArchive_SortRuleArchive*)arg1 ;
-(void)encodeToArchive:(TableSortOrderArchive_SortRuleArchive*)arg1 ;
-(TSUModelColumnIndex)baseColumnIndex;
-(id)initWithBaseColumnIndex:(TSUModelColumnIndex)arg1 direction:(int)arg2 ;
-(id)ruleByChangingBaseColumnIndexTo:(TSUModelColumnIndex)arg1 ;
-(id)ruleByChangingDirectionTo:(int)arg1 ;
@end

