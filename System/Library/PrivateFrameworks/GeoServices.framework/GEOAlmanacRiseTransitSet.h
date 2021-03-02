/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject {

	CAARiseTransitSetDetails2 _rise;
	CAARiseTransitSetDetails2 _transit;
	CAARiseTransitSetDetails2 _set;

}

@property (nonatomic,readonly) NSDate * rise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * set; 
@property (nonatomic,readonly) BOOL transitIsAboveHorizon; 
@property (nonatomic,readonly) BOOL isIdeal; 
@property (nonatomic,readonly) CAARiseTransitSetDetails2 firstItem; 
@property (nonatomic,readonly) CAARiseTransitSetDetails2 lastItem; 
-(CAARiseTransitSetDetails2)lastItem;
-(NSDate *)set;
-(NSDate *)rise;
-(CAARiseTransitSetDetails2)firstItem;
-(BOOL)transitIsAboveHorizon;
-(BOOL)isIdeal;
-(id)description;
-(NSDate *)transit;
-(id)initWithRise:(const CAARiseTransitSetDetails2*)arg1 transit:(const CAARiseTransitSetDetails2*)arg2 set:(const CAARiseTransitSetDetails2*)arg3 ;
@end
