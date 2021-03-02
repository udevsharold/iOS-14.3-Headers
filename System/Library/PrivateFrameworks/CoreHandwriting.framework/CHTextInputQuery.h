/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHQuery.h>

@protocol CHTextInputQueryTargetDataSource;
@class NSArray;

@interface CHTextInputQuery : CHQuery {

	NSArray* _availableItems;
	id<CHTextInputQueryTargetDataSource> _textInputTargetsDataSource;
	double _totalDuration;

}

@property (setter=_setAvailableItems:,nonatomic,copy) NSArray * availableItems;                  //@synthesize availableItems=_availableItems - In the implementation block
@property (assign,nonatomic) double totalDuration;                                               //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign) id<CHTextInputQueryTargetDataSource> textInputTargetsDataSource;              //@synthesize textInputTargetsDataSource=_textInputTargetsDataSource - In the implementation block
+(id)queryItemStableIdentifierForStrokeGroup:(id)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(void)dealloc;
-(NSArray *)availableItems;
-(double)totalDuration;
-(id)debugName;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)setTextInputTargetsDataSource:(id<CHTextInputQueryTargetDataSource>)arg1 ;
-(void)q_updateQueryResult;
-(id<CHTextInputQueryTargetDataSource>)textInputTargetsDataSource;
-(id)q_textInputItemsFromSessionResult:(id)arg1 ;
-(void)_setAvailableItems:(id)arg1 ;
@end
