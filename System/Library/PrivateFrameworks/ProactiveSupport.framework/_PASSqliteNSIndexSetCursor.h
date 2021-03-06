/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASSqliteRowIdIndexSetCursor.h>

@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (nonatomic,retain) NSIndexSet * collection; 
+(double)baseEstimatedCost;
+(const char*)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg1 ;
+(BOOL)canOrderByValue:(BOOL)arg1 ;
+(const char*)sqliteCreateTableStatement;
+(double)baseEstimatedRows;
-(void)setCollection:(NSIndexSet *)arg1 ;
-(void)applyValueSort:(BOOL)arg1 ;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(id)currentIndexedValue;
@end

