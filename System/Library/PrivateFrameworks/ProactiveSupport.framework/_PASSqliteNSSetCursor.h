/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASSqliteCollectionsCursor.h>

@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {

	NSSet* _set;
	id _currentValue;
	NSEnumerator* _valuesEnumerator;

}

@property (nonatomic,retain) NSSet * collection; 
+(const char*)sqliteMethodName;
+(id)planningInfoForValueConstraint:(int)arg1 ;
+(const char*)sqliteCreateTableStatement;
-(void)setCollection:(NSSet *)arg1 ;
-(void)finalizeConstraints;
-(BOOL)currentIndexEof;
-(void)applyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)stepIndexedRow;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(id)currentIndexedValue;
@end

