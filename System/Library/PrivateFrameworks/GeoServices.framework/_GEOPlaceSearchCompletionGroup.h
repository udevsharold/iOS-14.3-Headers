/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCompletionGroup.h>

@class NSArray, NSString;

@interface _GEOPlaceSearchCompletionGroup : NSObject <GEOCompletionGroup> {

	NSString* _localizedSectionHeader;
	NSArray* _items;
	BOOL _shouldInterleaveClientResults;
	BOOL _enforceServerResultsOrder;

}

@property (nonatomic,readonly) NSArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSString * localizedSectionHeader;               //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
@property (nonatomic,readonly) BOOL shouldInterleaveClientResults;              //@synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults - In the implementation block
@property (nonatomic,readonly) BOOL enforceServerResultsOrder;                  //@synthesize enforceServerResultsOrder=_enforceServerResultsOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)items;
-(BOOL)shouldInterleaveClientResults;
-(BOOL)enforceServerResultsOrder;
-(id)initWithSection:(id)arg1 traits:(id)arg2 entryListIndex:(int)arg3 mapItems:(id)arg4 collections:(id)arg5 publishers:(id)arg6 ;
-(NSString *)localizedSectionHeader;
@end

