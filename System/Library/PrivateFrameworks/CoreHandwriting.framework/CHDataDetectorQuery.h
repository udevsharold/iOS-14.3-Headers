/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHQuery.h>

@class DDScannerServiceConfiguration, NSArray;

@interface CHDataDetectorQuery : CHQuery {

	DDScannerServiceConfiguration* _dataDetectorConfiguration;
	NSArray* _foundItems;

}

@property (setter=_setFoundItems:,nonatomic,copy) NSArray * foundItems;              //@synthesize foundItems=_foundItems - In the implementation block
-(void)dealloc;
-(id)debugName;
-(void)stop;
-(NSArray *)foundItems;
-(id)initWithRecognitionSession:(id)arg1 ;
-(void)q_updateQueryResult;
-(void)_setFoundItems:(id)arg1 ;
-(id)_dataDetectorResultsForSessionResult:(id)arg1 ;
-(void)_enumerateDetectedRangesForContextualTextResults:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end
