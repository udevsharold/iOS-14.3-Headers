/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableSet, NSMutableArray;

@interface _GEOPlaceDataRequestHelper : NSObject {

	/*^block*/id _requestHandler;
	NSDictionary* _identifierOrderMap;
	NSMutableSet* _remaningIdentifiers;
	NSMutableArray* _results;

}
+(id)helperForHandler:(/*^block*/id)arg1 identifiers:(id)arg2 ;
+(id)helperExpiredIdentifiers:(id)arg1 ;
-(id)description;
-(BOOL)finishedIdentifier:(id)arg1 withResult:(id)arg2 error:(id)arg3 ;
-(void)failAllRemainingRequests;
@end
