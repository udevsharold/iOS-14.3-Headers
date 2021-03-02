/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject {

	BOOL _shouldInterleaveClientResults;
	BOOL _enforceServerResultsOrder;
	NSArray* _results;
	NSString* _title;

}

@property (nonatomic,readonly) NSArray * results;                               //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL shouldInterleaveClientResults;              //@synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults - In the implementation block
@property (nonatomic,readonly) BOOL enforceServerResultsOrder;                  //@synthesize enforceServerResultsOrder=_enforceServerResultsOrder - In the implementation block
-(NSArray *)results;
-(id)initWithResults:(id)arg1 title:(id)arg2 shouldInterleaveClientResults:(BOOL)arg3 enforceServerResultsOrder:(BOOL)arg4 ;
-(BOOL)shouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(NSString *)title;
@end
