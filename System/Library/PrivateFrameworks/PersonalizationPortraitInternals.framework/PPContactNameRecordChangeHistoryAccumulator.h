/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNChangeHistoryEventVisitor.h>

@class CNContactStore, NSArray, NSMutableArray, NSString;

@interface PPContactNameRecordChangeHistoryAccumulator : NSObject <CNChangeHistoryEventVisitor> {

	CNContactStore* _store;
	NSArray* _keysToFetch;
	NSMutableArray* _records;
	BOOL _truncated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)records;
-(BOOL)truncated;
-(id)_nameRecordWithContactIdentifier:(id)arg1 changeType:(unsigned char)arg2 ;
-(void)visitDeleteContactEvent:(id)arg1 ;
-(void)visitAddContactEvent:(id)arg1 ;
-(id)initWithStore:(id)arg1 keysToFetch:(id)arg2 ;
-(void)visitDropEverythingEvent:(id)arg1 ;
-(void)visitUpdateContactEvent:(id)arg1 ;
@end

