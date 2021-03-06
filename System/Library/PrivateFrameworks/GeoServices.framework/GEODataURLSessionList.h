/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface GEODataURLSessionList : NSObject {

	NSMutableArray* _urlSessions;
	NSMutableArray* _lastUsedDates;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(void)addSession:(id)arg1 ;
-(void)pruneSessionsNotInIdentifierArray:(id)arg1 agressive:(BOOL)arg2 ;
-(id)urlSessionForIdentifier:(id)arg1 ;
-(id)urlSessionForRequest:(id)arg1 ;
-(unsigned long long)count;
@end

