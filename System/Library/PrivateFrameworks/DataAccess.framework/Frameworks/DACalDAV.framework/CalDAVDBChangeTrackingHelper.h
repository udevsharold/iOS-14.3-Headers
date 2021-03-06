/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface CalDAVDBChangeTrackingHelper : NSObject {

	NSString* _clientIdentifier;
	int _initialSequenceNumber;
	NSMutableDictionary* _savedChanges;

}
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)saveChange:(int)arg1 forEntityType:(int)arg2 ;
-(BOOL)clearUnconsumedAndUnsavedChanges;
@end

