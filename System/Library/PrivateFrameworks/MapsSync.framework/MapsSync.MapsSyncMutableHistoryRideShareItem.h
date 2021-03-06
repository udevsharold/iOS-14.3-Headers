/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSync/MapsSync.MapsSyncMutableHistoryItem.h>

@class GEOComposedWaypoint;

@interface MapsSync.MapsSyncMutableHistoryRideShareItem : MapsSync.MapsSyncMutableHistoryItem {

	 _proxyHistory;

}

@property (retain,nonatomic) GEOComposedWaypoint * startWaypoint; 
@property (retain,nonatomic) GEOComposedWaypoint * endWaypoint; 
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(void)setStartWaypoint:(GEOComposedWaypoint *)arg1 ;
-(void)setEndWaypoint:(GEOComposedWaypoint *)arg1 ;
-(id)initWithProxyObject:(id)arg1 ;
@end

