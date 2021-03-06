/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveSupport/_PASSqliteKeyValueCursor.h>

@class NSDictionary, NSEnumerator;

@interface _PASSqliteNSDictionaryCursor : _PASSqliteKeyValueCursor {

	NSDictionary* _dictionary;
	NSEnumerator* _keysEnumerator;
	id _currentKey;
	id _currentValue;
	id _valueEqualTo;

}

@property (nonatomic,retain) NSDictionary * collection; 
+(const char*)sqliteMethodName;
+(id)planningInfoForKeyConstraint:(int)arg1 ;
-(void)setCollection:(NSDictionary *)arg1 ;
-(id)currentIndexedKey;
-(void)finalizeConstraints;
-(void)applyKeyConstraint:(int)arg1 withArgument:(id)arg2 ;
-(void)stepIndexedRow;
-(BOOL)currentIndexedRowSatisfiesConstraints;
-(id)currentIndexedValue;
@end

