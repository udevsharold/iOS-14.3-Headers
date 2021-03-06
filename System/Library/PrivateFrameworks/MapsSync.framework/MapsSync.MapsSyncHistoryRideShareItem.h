/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOComposedWaypoint;

@interface MapsSync.MapsSyncHistoryRideShareItem : MapsSync.MapsSyncHistoryItem {

	 _startWaypoint;
	 _endWaypoint;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) GEOComposedWaypoint * startWaypoint; 
@property (readonly,nonatomic) GEOComposedWaypoint * endWaypoint; 
-(id)initWithObject:(id)arg1 ;
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(void)setPropertiesWithObject:(id)arg1 ;
-(Class)mutableObjectClass;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(Class)managedObjectClass;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
@end

